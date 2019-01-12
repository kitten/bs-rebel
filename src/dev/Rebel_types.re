module type MutableQueue = {
  type t('a);

  let make: unit => t('a);
  let add: (t('a), 'a) => unit;
  let peek: t('a) => option('a);
  let pop: t('a) => option('a);
  let copy: t('a) => t('a);
  let size: t('a) => int;
};

module MutableQueue_js_t: MutableQueue = MutableQueue_js;
module MutableQueue_native_t: MutableQueue = MutableQueue_native;
