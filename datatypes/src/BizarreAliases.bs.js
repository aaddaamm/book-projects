// Generated by BUCKLESCRIPT VERSION 4.0.8, PLEASE EDIT WITH CARE
'use strict';


function calcPercent(score, max) {
  return score / max * 100.0;
}

var result = calcPercent(60, 75);

console.log("Bogus result is " + (String(result) + ""));

var person = 60;

exports.person = person;
exports.calcPercent = calcPercent;
exports.result = result;
/* result Not a pure module */