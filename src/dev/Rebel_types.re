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
  let clear: (t('a), [@bs.as 0] _) => unit;
  let push: (t('a), 'a) => unit;
  let pop: t('a) => option('a);
  let copy: t('a) => t('a);
  let size: t('a) => int;
  let forEachU: (t('a), (.'a) => unit) => unit;
  let forEach: (t('a), 'a => unit) => unit;
  let isEmpty: t('a) => bool;
  let top: t('a) => option('a);
};

module MutableQueue_js_t: MutableQueue = MutableQueue_js;
module MutableQueue_native_t: MutableQueue = MutableQueue_native;

module MutableStack_js_t: MutableStack = MutableStack_js;
module MutableStack_native_t: MutableStack = MutableStack_native;
