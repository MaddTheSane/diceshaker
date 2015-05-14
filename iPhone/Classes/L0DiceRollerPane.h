//
//  L0DiceRollerPane.h
//  Diceshaker
//
//  Created by ∞ on 04/08/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DiceshakerAppDelegate.h"

@class L0DraggableNavigationBar;

@interface L0DiceRollerPane : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource, UITableViewDataSource, UITableViewDelegate> {
	IBOutlet UIPickerView* dicePicker;
	IBOutlet UIView* container;
	IBOutlet UITableView* historyTable;
	IBOutlet UILabel* resultLabel;
	IBOutlet UILabel* eachDieLabel;
	
	IBOutlet UIView* infoButtonHeaderView;
	IBOutlet UIButton* infoButton;
	
	IBOutlet L0DraggableNavigationBar* bottomBar;
}
@property (assign) IBOutlet DiceshakerAppDelegate* controller;
- (IBAction) toggleDicePicker;
- (void) repositionDicePicker:(BOOL) animated;

@end
