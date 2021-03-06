/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

#import "SyncObserverModelBridge-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@interface SyncEncryptionPassphraseTableViewController : _AudioQueueAllocateBuffer <UITableViewDelegate, SyncObserverModelBridge>
{
    struct Profile *profile_;
    struct scoped_ptr<SyncObserverBridge> syncObserver_;
    struct scoped_nsobject<UITextField> passphrase_;
    struct scoped_nsobject<NSString> headerMessage_;
    struct scoped_nsobject<NSString> processingMessage_;
    struct scoped_nsobject<SyncErrorController> syncErrorController_;
    struct scoped_nsobject<SettingsLinkController> dashboardController_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onStateChanged;
- (void)hideDecyrptionProgress;
- (void)showDecryptingProgress;
- (void)setRightNavBarItem;
- (void)signInPressed;
- (void)nextTextField:(id)fp8;
- (void)editingChanged:(id)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 willSelectRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForFooterInSection:(int)fp12;
- (id)tableView:(id)fp8 viewForFooterInSection:(int)fp12;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (BOOL)forDecryption;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithProfile:(struct Profile *)fp8;

@end

