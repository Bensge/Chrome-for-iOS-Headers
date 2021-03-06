/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@class NSMutableArray, UITableViewCell;

@interface ToolsPopupTableViewController : _AudioQueueAllocateBuffer
{
    UITableViewCell *iconsCell_;
    BOOL isCurrentPageBookmarked_;
    int toolbarType_;
    NSMutableArray *menuItems_;
    id <ToolsPopupTableDelegate> delegate_;
    struct ObjCPropertyReleaser propertyReleaser_ToolsPopupTableViewController_;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setMenuItems:(id)fp8;
- (id)menuItems;
- (void)setIsCurrentPageBookmarked:(BOOL)fp8;
- (BOOL)isCurrentPageBookmarked;
- (void)setIconsCell:(id)fp8;
- (id)iconsCell;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)createIconsItem;
- (void)initializeMenu:(unsigned int)fp8;
- (void)buttonPressed:(id)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 willSelectRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)setItemEnabled:(BOOL)fp8 withTag:(int)fp12;
- (void)setItemTitle:(int)fp8 withTag:(int)fp12;
- (float)optimalHeight:(float)fp8;
- (void)awakeFromNib;

@end

