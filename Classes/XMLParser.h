//
//  XMLParser.h
//  XML
//
// Created by David McAfee 2012


#import <UIKit/UIKit.h>

@class XMLAppDelegate, Book;

@interface XMLParser : NSObject {

	NSMutableString *currentElementValue;
	
	XMLAppDelegate *appDelegate;
	Book *aBook; 
}

- (XMLParser *) initXMLParser;

@end
