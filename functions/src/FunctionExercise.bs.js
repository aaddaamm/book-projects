// Generated by BUCKLESCRIPT VERSION 4.0.8, PLEASE EDIT WITH CARE
'use strict';


function discount(p, d) {
  var decimalPrice = p;
  return decimalPrice - decimalPrice * d / 100.00;
}

function fivePercentOff(param) {
  return discount(param, 5);
}

function tenPercentOff(param) {
  return discount(param, 10);
}

function halfOff(param) {
  return discount(param, 50);
}

console.log("Item Price is:", 30);

console.log("Item Price with 5% discount is:", discount(30, 5));

console.log("Item Price with 10% discount is:", discount(30, 10));

console.log("Item Price with 50% discount is:", discount(30, 50));

var price = 30;

exports.discount = discount;
exports.price = price;
exports.fivePercentOff = fivePercentOff;
exports.tenPercentOff = tenPercentOff;
exports.halfOff = halfOff;
/*  Not a pure module */
