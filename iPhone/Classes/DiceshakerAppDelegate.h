//
//  DiceshakerAppDelegate.h
//  Diceshaker
//
//  Created by ∞ on 04/08/08.
//  Copyright __MyCompanyName__ 2008. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreMotion/CoreMotion.h>
#import "L0Dice.h"

#import <AudioToolbox/AudioToolbox.h>

#define kL0CurrentDiceRollDidChangeNotification @"L0CurrentDiceRollDidChange"
#define kL0DiceshakerShouldPlaySoundDefault @"L0DiceshakerShouldPlaySoundDefault"
#define kL0DiceshakerDrawerHiddenDefault @"L0DiceshakerDrawerHiddenDefault"
#define kL0DiceshakerLastDiceDefault @"L0DiceshakerLastDiceDefault"

#define kL0DiceshakerFirstLaunchDateDefault @"L0DiceshakerFirstLaunchDate"
#define kL0DiceshakerFirstNagDateDefault @"L0DiceshakerFirstNagDate"
#define kL0DiceshakerDidEndNaggingDefault @"L0DiceshakerDidEndNagging"
#define kL0DiceshakerDonationsURLKey @"L0DiceshakerDonationsURL"

enum {
	kL0DiceshakerAlertTagUnknownURL = 1001,
};
#define kL0DiceshakerAppStoreURLKey @"L0DiceshakerAppStoreURL"

@class DiceshakerViewController;

@interface DiceshakerAppDelegate : NSObject <UIApplicationDelegate, UIAccelerometerDelegate, UIAlertViewDelegate> {	
	BOOL histeresisExcited;
	
	BOOL systemSoundAvailable;
	SystemSoundID systemSound;
	
	BOOL handledCrossAppURL;
	NSURL* returnCrossAppURL;
}

@property (nonatomic, strong) IBOutlet UIWindow *window;
@property (nonatomic, strong) IBOutlet UIViewController* mainController;
@property (nonatomic, strong) IBOutlet UINavigationController* navigationController;
@property (nonatomic, strong) IBOutlet UIViewController* backSideController;
@property (nonatomic, strong) L0Dice* currentDice;

@property (nonatomic, readonly, strong) NSMutableArray* history;
@property (nonatomic, readonly, copy) NSArray* lastRoll;

@property (assign) BOOL flippingBack;

#if 0
@property (strong) CMAccelerometerData* lastAcceleration;
#else
@property (strong) UIAcceleration* lastAcceleration;
#endif

- (IBAction) roll;
- (void) playRollSound;
- (IBAction) flipToBackSide;
- (IBAction) flipToFrontSide;

- (void) eraseRollHistory;

- (void) showNagScreenIfNeeded;
- (void) showFirstNag;
- (void) showLastNag;

- (IBAction) donate;

- (IBAction) sendToOtherApp;
- (IBAction) sendCancelToOtherApp;

@end

@interface L0Dice (L0DiceshakerSavingAndLoading)

- (NSDictionary*) asDictionary;
+ (id) diceWithDictionary:(NSDictionary*) d;

@end
