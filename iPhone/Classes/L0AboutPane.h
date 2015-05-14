//
//  L0AboutPane.h
//  Diceshaker
//
//  Created by ∞ on 04/08/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface L0AboutPane : UIViewController <UIActionSheetDelegate>

@property (weak) IBOutlet UILabel* versionLabel;
@property (weak) IBOutlet UISwitch* soundSwitch;
@property (strong) IBOutlet UILabel* soundSwitchLabel;

- (IBAction) goToInfiniteLabsDotNet;
- (IBAction) soundSwitchChanged;

- (IBAction) eraseRollHistory;

@end
