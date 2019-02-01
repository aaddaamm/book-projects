// Generated by BUCKLESCRIPT VERSION 4.0.8, PLEASE EDIT WITH CARE
'use strict';

var Caml_int32 = require("bs-platform/lib/js/caml_int32.js");

function payment(p, apr, years) {
  var r = apr / 12.0 / 100.0;
  var n = Caml_int32.imul(years, 12);
  var powerTerm = Math.pow(1.0 + r, n);
  return p * (r * powerTerm) / (powerTerm - 1.0);
}

var amount = payment(10000.00, 5.0, 30);

console.log("Amount per month: $", amount.toFixed(2));

var amount2 = payment(25000.00, 7.5, 15);

console.log("Amount per month: $", amount2.toFixed(2));

exports.payment = payment;
exports.amount = amount;
exports.amount2 = amount2;
/* amount Not a pure module */
