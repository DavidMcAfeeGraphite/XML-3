//
//  Book.h
//  XML
//
// Created by David McAfee 2012


#import <UIKit/UIKit.h>


@interface Book : NSObject {
	
	NSInteger bookID;
	NSString *name;	//Same name as the Entity Name.
	NSString *price;	//Same name as the Entity Name.
	NSString *genre;	//Same name as the Entity Name.
	
}

@property (nonatomic, readwrite) NSInteger bookID;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *price;
@property (nonatomic, retain) NSString *genre;

@end
