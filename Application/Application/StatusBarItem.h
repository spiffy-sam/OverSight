//
//  file: StatusBarMenu.h
//  project: OverSight (login item)
//  description: menu handler for status bar icon (header)
//
//  created by Patrick Wardle
//  copyright (c) 2017 Objective-See. All rights reserved.
//


@import Cocoa;

@interface StatusBarItem : NSObject <NSPopoverDelegate>
{

}

//status item
@property(nonatomic, strong, readwrite)NSStatusItem *statusItem;

//popover
@property(retain, nonatomic)NSPopover *popover;

//disabled flag
@property BOOL isDisabled;

/* METHODS */

//init
-(id)init:(NSMenu*)menu;

//update status item menu
-(void)setActiveDevices:(NSArray*)activeDevices;

//remove status item
-(void)removeStatusItem;

@end
