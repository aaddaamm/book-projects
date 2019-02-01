type shirtSize =
  | Small
  | Medium
  | Large
  | XLarge;

let mySize: shirtSize = Medium;
let otherSize = Large;

let priceIf = (size: shirtSize): float => {
  switch (size) {
    | Small => 11.00
    | Medium => 12.50
    | Large => 14.00
    | XLarge => 16.00
  }
};

Js.log(priceIf(mySize));
Js.log(priceIf(otherSize));

let stringOfShirtSize = (size: shirtSize): string => {
  switch (size) {
    | Small => "S"
    | Medium => "M"
    | Large => "L"
    | XLarge => "XL"
  }
};

Js.log(stringOfShirtSize(mySize));

