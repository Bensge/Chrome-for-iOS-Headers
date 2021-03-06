/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

#import "SyncAspViewControllerProtocol-Protocol.h"

@class UITextField;

@interface SyncApplicationSpecificPasswordTableViewController : _AudioQueueAllocateBuffer <SyncAspViewControllerProtocol>
{
    struct ChromeLoginControllerDelegate *loginDelegate_;
    struct scoped_nsobject<UIBarButtonItem> signInButton_;
    struct scoped_nsobject<UIBarButtonItem> waitButton_;
    struct scoped_nsobject<UITextField> passwordText_;
    struct scoped_nsobject<SettingsLinkController> cannotAccessAccountController_;
    BOOL incorrect_password_supplied_;
    UITextField *applicationSpecificField_;
}

- (void)setApplicationSpecificField:(id)fp8;
- (id)applicationSpecificField;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reportInvalidApplicationSpecificPassword;
- (void)cancelPressed;
- (void)signInPressed:(id)fp8;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithLoginDelegate:(struct ChromeLoginControllerDelegate *)fp8;

@end

