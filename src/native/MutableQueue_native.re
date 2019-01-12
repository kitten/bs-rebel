type t('a) = Belt.MutableQueue.t('a);

let make = Belt.MutableQueue.make;
let add = Belt.MutableQueue.add;
let peek = Belt.MutableQueue.peek;
let pop = Belt.MutableQueue.pop;
let copy = Belt.MutableQueue.copy;
let size = Belt.MutableQueue.size;
