
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNReproducableModuleSpec.h"

@interface ReproducableModule : NSObject <NativeReproducableModuleSpec>
#else
#import <React/RCTBridgeModule.h>

@interface ReproducableModule : NSObject <RCTBridgeModule>
#endif

@end
