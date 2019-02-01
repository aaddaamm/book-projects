/*
   this is called an alias for a named parameter. but it's also a
   represaentation of what is happening under the hood. this was simply
   un-sugaring what the system will use i.e. ~principal as principal.
 */
let payment = (~principal as p, ~apr, ~years) => {
  let r = (apr /. 12.0) /. 100.0;
  let n = float_of_int(years * 12);
  let powerTerm = (1.0 +. r) ** n;
  p *. (r *. powerTerm) /. (powerTerm -. 1.0);
};

let amount = payment(~years=30, ~apr=5.0, ~principal=10000.00);
Js.log2("Amount per month: $", Js.Float.toFixedWithPrecision(amount, ~digits=2));

let amount2 = payment(~years=15, ~apr=7.5, ~principal=25000.00);
Js.log2("Amount per month: $", Js.Float.toFixedWithPrecision(amount2, ~digits=2));
