(* This is the Rebel entrypoint;
 * It's purposefully written so that modules are defined either
 * from `src/native` or `src/js` depending on the backend. It's also
 * written to support both bsb and bsb-native.
 * You'll find the actual externally facing module types in the
 * `src/dev/Rebel_types.re` file.
 *)

#if BS_NATIVE then
  #if BSB_BACKEND = "js" then
    module MutableQueue = MutableQueue_js
  #else
    module MutableQueue = MutableQueue_native
  #end
#else
  module MutableQueue = MutableQueue_js
#end

#if BS_NATIVE then
  #if BSB_BACKEND = "js" then
    module MutableStack = MutableStack_js
  #else
    module MutableStack = MutableStack_native
  #end
#else
  module MutableStack = MutableStack_js
#end

#if BS_NATIVE then
  #if BSB_BACKEND = "js" then
    module Array = Array_js
  #else
    module Array = Array_native
  #end
#else
  module Array = Array_js
#end
