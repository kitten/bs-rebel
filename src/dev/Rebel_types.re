module type MutableQueue = {
  type t('a);

  let fromArray: array('a) => t('a);
  let toArray: t('a) => array('a);
  let make: unit => t('a);
  let clear: t('a) => unit;
  let add: (t('a), 'a) => unit;
  let peek: t('a) => option('a);
  let pop: t('a) => option('a);
  let copy: t('a) => t('a);
  let size: t('a) => int;
  let mapU: (t('a), (.'a) => 'b) => t('b);
  let map: (t('a), 'a => 'b) => t('b);
  let forEachU: (t('a), (.'a) => unit) => unit;
  let forEach: (t('a), 'a => unit) => unit;
  let isEmpty: t('a) => bool;
  let reduceU: (t('a), 'b, (.'b, 'a) => 'b) => 'b;
  let reduce: (t('a), 'b, ('b, 'a) => 'b) => 'b;
  let addMany: (t('a), t('a)) => unit;
  let transfer: (t('a), t('a)) => unit;
};

module type MutableStack = {
  type t('a);

  let make: unit => t('a);
  let clear: t('a) => unit;
  let push: (t('a), 'a) => unit;
  let pop: t('a) => option('a);
  let copy: t('a) => t('a);
  let size: t('a) => int;
  let forEachU: (t('a), (.'a) => unit) => unit;
  let forEach: (t('a), 'a => unit) => unit;
  let isEmpty: t('a) => bool;
  let top: t('a) => option('a);
};

module type Array = {
type t('a) = array('a);

  let makeEmpty: unit => t('a);
  let makeUninitialized: int => t('a);
  let make: (int, 'a) => t('a);
  let size: t('a) => int;
  let get: (t('a), int) => option('a);
  let getUnsafe: (t('a), int) => 'a;
  let setUnsafe: (t('a), int, 'a) => unit;
  let fill: (t('a), 'a) => unit;
  let reverseInPlace: t('a) => unit;
  let copy: t('a) => t('a);
  let slice: (t('a), ~start: int, ~end_: int) => t('a);
  let sliceFrom: (t('a), int) => t('a);
  let append: (t('a), 'a) => t('a);
  let concat: (t('a), t('a)) => t('a);
  let map: (t('a), 'a => 'b) => t('b);
  let mapi: (t('a), ('a, int) => 'b) => t('b);
  let some: (t('a), 'a => bool) => bool;
  let somei: (t('a), ('a, int) => bool) => bool;
  let every: (t('a), 'a => bool) => bool;
  let everyi: (t('a), ('a, int) => bool) => bool;
  let filter: (t('a), 'a => bool) => t('a);
  let filteri: (t('a), ('a, int) => bool) => t('a);
  let find: (t('a), 'a => bool) => option('a);
  let findi: (t('a), ('a, int) => bool) => option('a);
  let findIndex: (t('a), 'a => bool) => int;
  let forEach: (t('a), 'a => unit) => unit;
  let forEachi: (t('a), ('a, int) => unit) => unit;
  let reduce: (t('a), ('b, 'a) => 'b, 'b) => 'b;
  let reducei: (t('a), ('b, 'a, int) => 'b, 'b) => 'b;
  let reduceRight: (t('a), ('b, 'a) => 'b, 'b) => 'b;
  let indexOf: (t('a), 'a) => int;
  let lastIndexOf: (t('a), 'a) => int;
  let shuffle: array('a) => array('a);
  let shuffleInPlace: array('a) => unit;
  let set: (t('a), int, 'a) => bool;
  let reverse: t('a) => t('a);
  let remove: (t('a), int) => t('a);
  let removeCount: (t('a), ~pos: int, ~count: int) => t('a);
  let includes: (t('a), 'a) => bool;
};

module MutableQueue_js_t: MutableQueue = MutableQueue_js;
module MutableQueue_native_t: MutableQueue = MutableQueue_native;

module MutableStack_js_t: MutableStack = MutableStack_js;
module MutableStack_native_t: MutableStack = MutableStack_native;

module Array_js_t: Array = Array_js;
module Array_native_t: Array = Array_native;
