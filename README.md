# bs-rebel

A simple collection toolkit for Bucklescript that attempts to
optimize for bundlesize on JS with `bsb` and simply falls back
to `Array` and `Belt` on `bsb-native`.

This allows the use of the same types and code for managing
collections while not worrying about how they compile to JS.
