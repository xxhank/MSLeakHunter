//
//  MSViewLeakHunter.h
//  MindSnacks
//
//  Created by Javier Soto on 12/7/12.
//
//

#import "MSLeakHunter.h"

#if MSLeakHunter_ENABLED

/**
 * @discussion if a view hasn't been deallocated after this time after it disappeared from screen, it's considered "pottentially leaked"
 */
#define kMSViewLeakHunterDisappearAndDeallocateMaxInterval 15.0f

/**
 * @discussion when installed, it's going to print messages in the log whenever a view is not deallocated after a while of disappearing from screen.
 */
@interface MSViewLeakHunter : NSObject <MSLeakHunter>

@end

#endif