//
//  L0DraggableNavigationBar.h
//  Diceshaker
//
//  Created by ∞ on 13/02/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface L0DraggableNavigationBar : UINavigationBar {
	IBOutlet id __weak touchTarget;
	SEL touchAction;
}

@property (weak) id touchTarget;
@property (assign) SEL touchAction;

@end
