//
//  RootViewController.h
//  XML
//
// Created by David McAfee 2012

#import <UIKit/UIKit.h>

@class XMLAppDelegate, BookDetailViewController;

@interface RootViewController : UITableViewController {
	
	XMLAppDelegate *appDelegate;
	BookDetailViewController *bdvController;
}

@end
