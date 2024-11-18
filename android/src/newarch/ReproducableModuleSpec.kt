package com.reproducablemodule

import com.facebook.react.bridge.ReactApplicationContext

abstract class ReproducableModuleSpec internal constructor(context: ReactApplicationContext) :
  NativeReproducableModuleSpec(context) {
}
