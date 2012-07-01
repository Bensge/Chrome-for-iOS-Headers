/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

#import "FirstRunIpadViewControllerProtocol-Protocol.h"
#import "SyncAspViewControllerProtocol-Protocol.h"

@class FancyTextField, PrimaryActionButton, SecondaryActionButton, UIView;

@interface FirstRunAspViewController : _AudioQueueAllocateBuffer <FirstRunIpadViewControllerProtocol, SyncAspViewControllerProtocol>
{
    UIView *contentView_;
    UIView *shadowedView_;
    UIView *titleView_;
    FancyTextField *loginField_;
    FancyTextField *aspField_;
    PrimaryActionButton *signInButton_;
    SecondaryActionButton *skipButton_;
    UIView *activityIndicator_;
    struct ChromeLoginControllerDelegate *loginDelegate_;
    struct scoped_nsobject<FirstRunIpadAdjuster> ipadAdjuster_;
    struct ObjCPropertyReleaser propertyReleaser_FirstRunAspViewController_;
}

- (void)setActivityIndicator:(id)fp8;
- (id)activityIndicator;
- (void)setSkipButton:(id)fp8;
- (id)skipButton;
- (void)setSignInButton:(id)fp8;
- (id)signInButton;
- (void)setAspField:(id)fp8;
- (id)aspField;
- (void)setLoginField:(id)fp8;
- (id)loginField;
- (void)setTitleView:(id)fp8;
- (id)titleView;
- (void)setShadowedView:(id)fp8;
- (id)shadowedView;
- (void)setContentView:(id)fp8;
- (id)contentView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)reportInvalidApplicationSpecificPassword;
- (void)textFieldChanged:(id)fp8;
- (void)cancelPressed:(id)fp8;
- (void)signInPressed:(id)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithLoginDelegate:(struct ChromeLoginControllerDelegate *)fp8;

@end

