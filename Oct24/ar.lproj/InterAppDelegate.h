//
//  InterAppDelegate.h
//  Oct24
//
//  Created by Elizabeth  McAlpin on 10/24/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class View;

@interface InterAppDelegate : UIResponder <UIApplicationDelegate>{
    
    View *view;
    UIWindow *_window;
}

@property (strong, nonatomic) UIWindow *window;

@end
