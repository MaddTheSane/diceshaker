//
//  L0DiceshakerNagTester.m
//  Diceshaker
//
//  Created by ∞ on 27/11/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import "L0DiceshakerNagTester.h"

#if DEBUG

@interface DiceshakerAppDelegate (private)
- (void) _showNagMessagesDisabled;
@end

@implementation DiceshakerAppDelegate (L0DiceshakerNagTester)

- (void) testFirstNag {
	dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(10 * NSEC_PER_MSEC)), dispatch_get_main_queue(), ^{
		[self showFirstNag];
	});
}

- (void) testLastNag {
	dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(10 * NSEC_PER_MSEC)), dispatch_get_main_queue(), ^{
		[self showLastNag];
	});
}

- (void) testNagsOff {
	dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(10 * NSEC_PER_MSEC)), dispatch_get_main_queue(), ^{
		[self _showNagMessagesDisabled];
	});
}

@end

#endif
