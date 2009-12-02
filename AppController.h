//
//  AppController.h
//  AMOptionMenuDemo
//
//  Created by Andy Mroczkowski on 7/8/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AMOptionMenuController;
@class AMOptionPopUpButton;

@interface AppController : NSObject {

	AMOptionPopUpButton* popUpButton;
	
	IBOutlet NSMenuItem* testMenu;
	
	IBOutlet NSWindow* window;
	
	AMOptionMenuController* ds;

}

@property (assign) IBOutlet AMOptionPopUpButton* popUpButton;

- (IBAction) setBlue:(id)sender;
- (IBAction) setReallyAwesome:(id)sender;


@end
