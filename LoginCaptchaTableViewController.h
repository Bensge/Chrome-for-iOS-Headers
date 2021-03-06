/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

#import "SyncCaptchaViewControllerProtocol-Protocol.h"

@interface LoginCaptchaTableViewController : _AudioQueueAllocateBuffer <SyncCaptchaViewControllerProtocol>
{
    struct ChromeLoginControllerDelegate *loginDelegate_;
    struct scoped_nsobject<UIImage> captchaImage_;
    struct scoped_nsobject<UIBarButtonItem> signInButton_;
    struct scoped_nsobject<UIBarButtonItem> waitButton_;
    struct scoped_nsobject<UITextField> captchaEntry_;
    struct scoped_nsobject<SettingsLinkController> cannotAccessAccountController_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setCaptchaImage:(id)fp8;
- (void)cancelPressed;
- (void)signInPressed:(id)fp8;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 titleForFooterInSection:(int)fp12;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithLoginDelegate:(struct ChromeLoginControllerDelegate *)fp8;

@end

