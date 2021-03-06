
/*
 * The Cheat - The legendary universal game trainer for Mac OS X.
 * http://www.brokenzipper.com/trac/wiki/TheCheat
 *
 * Copyright (c) 2003-2011, Charles McGarvey et al.
 *
 * Distributable under the terms and conditions of the 2-clause BSD
 * license; see the file COPYING for the legal text of the license.
 */


#import <Cocoa/Cocoa.h>

#import "VMRegion.h"


@interface DumpContext : NSObject
{
	// for fast access while iterating through the task loop.
	@public;
	
	pid_t process;
	unsigned regionCount;
	VMRegion lastRegion;
	
	NSMutableData *dump;
}

// Initialization

- (id)initWithPID:(pid_t)pid;


@end
