//
//  XMLAppDelegate.m
//  XML
//
// Created by David McAfee 2012

#import "XMLAppDelegate.h"
#import "RootViewController.h"
#import "XMLParser.h"

@implementation XMLAppDelegate

@synthesize window;
@synthesize navigationController, books;


- (void)applicationDidFinishLaunching:(UIApplication *)application {
	
	
	NSURL *url = [[NSURL alloc] initWithString:@"http://davidmcafeeislegendary.webs.com/appdata.xml"];
	NSXMLParser *xmlParser = [[NSXMLParser alloc] initWithContentsOfURL:url];
	
	//Initialize the delegate.
	XMLParser *parser = [[XMLParser alloc] initXMLParser];
	
	//Set delegate
	[xmlParser setDelegate:parser];
	
	//Start parsing the XML file.
	BOOL success = [xmlParser parse];
	
	if(success)
		NSLog(@"No Errors");
	else
		NSLog(@"Error Error Error!!!");
	
	// Configure and show the window
	[window addSubview:[navigationController view]];
	[window makeKeyAndVisible];
}


- (void)applicationWillTerminate:(UIApplication *)application {
	// Save data if appropriate
}


- (void)dealloc {
	[books release];
	[navigationController release];
	[window release];
	[super dealloc];
}

@end
