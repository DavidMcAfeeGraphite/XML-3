//
//  BookDetailViewController.h
//  XML
//
// Created by David McAfee 2012

#import <UIKit/UIKit.h>

@class Book;

@interface BookDetailViewController : UIViewController {

	IBOutlet UITableView *tableView;
	
	Book *aBook;
}

@property (nonatomic, retain) Book *aBook;

@end
