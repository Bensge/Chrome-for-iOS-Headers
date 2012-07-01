/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

#import "SyncLoginViewControllerProtocol-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@interface SyncLoginTableViewController : _AudioQueueAllocateBuffer <SyncLoginViewControllerProtocol, UIAlertViewDelegate, UITextFieldDelegate>
{
    struct ChromeLoginControllerDelegate *loginDelegate_;
    int loginStatus_;
    BOOL allowUserNameChange_;
    struct scoped_nsobject<UITextField> usernameField_;
    struct scoped_nsobject<NSString> username_;
    struct scoped_nsobject<UITextField> passwordField_;
    struct scoped_nsobject<UIBarButtonItem> signInButton_;
    struct scoped_nsobject<UIBarButtonItem> waitButton_;
    struct scoped_nsobject<TableViewErrorFooter> errorFooterView_;
    struct scoped_nsobject<SettingsLinkController> cannotAccessAccountController_;
    BOOL makePasswordFirstResponder_;
    BOOL keepPasswordOnBeginEdit_;
    BOOL keepPassword_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)keepPasswordAndReloadTableView;
- (BOOL)isLoggingIn;
- (void)addTextField:(id)fp8 toCell:(id)fp12;
- (void)setTraitsForTextField:(id)fp8 withKeyboardType:(int)fp12 returnKey:(int)fp16;
- (void)updateControlStateForLoggingIn:(BOOL)fp8;
- (BOOL)textField:(id)fp8 shouldChangeCharactersInRange:(struct _NSRange)fp12 replacementString:(id)fp20;
- (void)textFieldDidBeginEditing:(id)fp8;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)setLoggingInWithUserName:(id)fp8 errorState:(int)fp12 allowUserNameChange:(BOOL)fp16;
- (void)setLoggingOutWithUserName:(id)fp8;
- (void)cancelPressed:(id)fp8;
- (void)signInPressed:(id)fp8;
- (void)textFieldChanged:(id)fp8;
- (void)nextTextField:(id)fp8;
- (BOOL)credentialsEntered;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 willSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (float)tableView:(id)fp8 heightForFooterInSection:(int)fp12;
- (id)tableView:(id)fp8 viewForFooterInSection:(int)fp12;
- (id)tableView:(id)fp8 titleForFooterInSection:(int)fp12;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithLoginDelegate:(struct ChromeLoginControllerDelegate *)fp8;

@end
