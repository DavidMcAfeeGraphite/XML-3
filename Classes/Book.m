//
//  Book.m
//  XML
//
// Created by David McAfee 2012

#import "Book.h"


@implementation Book

@synthesize name, genre, price, bookID;



- (void) dealloc {
	
	[genre release];
	[price release];
	[name release];
	[super dealloc];
}

@end
