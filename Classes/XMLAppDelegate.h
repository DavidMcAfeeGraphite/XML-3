//
//  XMLAppDelegate.h
//  XML
//
//  Created by David McAfee


#import <UIKit/UIKit.h>

@interface XMLAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
	
	NSMutableArray *books;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@property (nonatomic, retain) NSMutableArray *books;

@end

