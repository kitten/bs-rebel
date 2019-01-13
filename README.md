# bs-rebel

**Rebel** is a toolkit for collection APIs that work with both `bsb-native` and `bsb`.

When you're aiming to write libraries with BuckleScript you're
often made to choose between using convenient APIs that only
work when compiling to JS, like `Js.Array` or to include more
`bs-platform/lib` code, like `Array` or `Belt`.

Think of **Rebel** as a standard library wrapper. It aims to
use JS built-ins as often as possible, but falls back to using
the BuckleScript standard library on native.

*(Its name comes from "Re" as in "Reason" and "bel" as in "belt")*

## Getting Started

Install the library from `npm`:

```sh
yarn add bs-rebel
# or for npm
npm install --save bs-rebel
```

And add `bs-rebel` to your `bsconfig.json`

```diff
{
  "name": "<your name>",
  "version": "0.1.0",
  "sources": ["src"],
  "bsc-flags": ["-bs-super-errors"],
  "bs-dependencies": [
+    "bs-rebel"
  ]
}
```

All of Rebel's module are namespaced as `Rebel`, so for instance to
access the `MutableQueue` module use: `Rebel.MutableQueue`

## Supported APIs

### `MutableQueue`

See [Belt.MutableQueue](https://bucklescript.github.io/bucklescript/api/Belt.MutableQueue.html) for this module's signature.

In JS, this module uses externals to mirror as many functions
from the `Belt` module as possible. The only functions that don't
completely compile away (but are rather small) are
`reduce`, `reduceU`, and `transfer`.

It also adds an `addMany` function that does compile away, but
isn't part of the standard `Belt.MutableQueue` module.

