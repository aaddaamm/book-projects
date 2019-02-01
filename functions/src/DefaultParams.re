/*
   when using default params we need to pass at least one unnamed
   parameter a unit type or () becuse of the way currying is done.
 */
let payment = (~principal, ~apr, ~years=30, ()) => {
  let r = (apr /. 12.0) /. 100.0;
  let n = float_of_int(years * 12);
  let powerTerm = (1.0 +. r) ** n;
  principal *. (r *. powerTerm) /. (powerTerm -. 1.0);
};

let toFixed = Js.Float.toFixedWithPrecision;

let amount = payment(~apr=5.0, ~principal=10000.00, ());
Js.log2("Amount per month: $", toFixed(amount, ~digits=2));

let apr = 7.5;
let principal = 25000.00

let amount2 = payment(~years=15, ~apr, ~principal, ());
Js.log2("Amount per month: $", toFixed(amount2, ~digits=2));
