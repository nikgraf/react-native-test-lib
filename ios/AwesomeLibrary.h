#ifdef __cplusplus
#import "react-native-awesome-library.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNAwesomeLibrarySpec.h"

@interface AwesomeLibrary : NSObject <NativeAwesomeLibrarySpec>
#else
#import <React/RCTBridgeModule.h>

@interface AwesomeLibrary : NSObject <RCTBridgeModule>
#endif

@end
