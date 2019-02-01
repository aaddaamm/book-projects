let discount = (~price as p, ~discount as d) => {
  let decimalPrice = float_of_int(p);
  decimalPrice -. (decimalPrice *. float_of_int(d) /. 100.00);
};

let price = 30;

let fivePercentOff = discount(~discount=5);

let tenPercentOff = discount(~discount=10);

let halfOff = discount(~discount=50);

Js.log2("Item Price is:", price);
Js.log2("Item Price with 5% discount is:", fivePercentOff(~price=price));
Js.log2("Item Price with 10% discount is:", tenPercentOff(~price=price));
Js.log2("Item Price with 50% discount is:", halfOff(~price=price));

