/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NewTabPagePanelController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class UITableView, UITableViewCell;

@interface OpenTabsPanelSignedin : NewTabPagePanelController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate>
{
    UITableViewCell *storedCell_;
    UITableView *table_;
    struct ScopedVector<DistantSession> sessions_;
    struct ChromeToDeviceContentManagementService *chromeToDeviceManager_;
    BOOL chromeToDeviceSessionCollapsed_;
    struct scoped_nsobject<ContextMenuController> contextMenuController_;
    int timerRefreshRateSeconds_;
    struct ObjCPropertyReleaser propertyReleaser_OpenTabsPanelSignedin_;
}

- (void)setTable:(id)fp8;
- (id)table;
- (void)setStoredCell:(id)fp8;
- (id)storedCell;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)relativeTimeStringForTime:(struct Time)fp8;
- (id)entryImageAtIndexPath:(id)fp8 completion:(id)fp(null);
- (void)toggleExpansionOfSession:(int)fp8;
- (BOOL)isSectionSeparatorCell:(id)fp8;
- (BOOL)isSectionMiddleCell:(id)fp8;
- (BOOL)isHeaderCell:(id)fp8;
- (BOOL)isSectionLastCell:(id)fp8;
- (BOOL)isWindowSeparatorCell:(id)fp8;
- (BOOL)isTabSection:(int)fp8;
- (void)adornTableCell:(id)fp8 background:(id)fp12 highlight:(id)fp16;
- (id)imageViewWithImageNamed:(id)fp8;
- (BOOL)isSnapshotRow:(id)fp8;
- (BOOL)isSyncedSessionRow:(id)fp8;
- (void)removeSnapshotAtIndexPath:(id)fp8;
- (void)removeSessionAtIndexPath:(id)fp8;
- (id)contextMenuForRowAtIndexPath:(id)fp8;
- (void)handleOpenTabsLongPress:(id)fp8;
- (BOOL)gestureRecognizerShouldBegin:(id)fp8;
- (id)chromeToDeviceURL:(id)fp8;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 tabCellForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 sessionCellForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 separatorCellForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 willDisplayCell:(id)fp12 forRowAtIndexPath:(id)fp16;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)updateSessionCell:(id)fp8 withDistantSession:(struct DistantSession *)fp12;
- (void)reload;
- (void)scheduleTimeRefresh;
- (void)reloadData;
- (id)initWithLoader:(id)fp8 profile:(struct Profile *)fp12;

@end

