/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

#import "SettingsNavigationControllerSyncProtocol-Protocol.h"
#import "SyncObserverModelBridge-Protocol.h"

@interface SignInSettingsTableViewController : _AudioQueueAllocateBuffer <SyncObserverModelBridge, SettingsNavigationControllerSyncProtocol>
{
    struct scoped_ptr<SyncInitialSetupController> syncController_;
    struct scoped_ptr<SyncObserverBridge> syncObserver_;
    struct scoped_nsobject<SyncErrorController> signInErrorController_;
    struct scoped_nsobject<SyncErrorController> servicesErrorController_;
    struct scoped_nsobject<ChromeToDeviceErrorController> chromeToDeviceErrorController_;
    struct Profile *profile_;
    struct SyncSetupService *sync_setup_service_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)autoLoginSwitchChanged:(id)fp8;
- (void)printToPhoneSwitchChanged:(id)fp8;
- (void)syncSwitchChanged:(id)fp8;
- (void)reloadData;
- (BOOL)shouldCommitSyncOnExit;
- (void)onStateChanged;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForFooterInSection:(int)fp12;
- (id)tableView:(id)fp8 viewForFooterInSection:(int)fp12;
- (id)tableView:(id)fp8 titleForFooterInSection:(int)fp12;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (id)initWithProfile:(struct Profile *)fp8;

@end

