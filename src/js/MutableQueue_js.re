type t('a) = array('a);

[@bs.new] external make: unit => t('a) = "Array";
[@bs.send] external add: (t('a), 'a) => unit = "push";
[@bs.get] external peek: t('a) => option('a) = "0";
[@bs.send] external pop: t('a) => option('a) = "shift";
[@bs.send] external copy: t('a) => t('a) = "slice";
[@bs.get] external size: t('a) => int = "length";
