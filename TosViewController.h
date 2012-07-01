/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

#import "FirstRunMetricsDelegate-Protocol.h"

@class PrimaryActionButton, ResizingGradientView, TabModel, UIButton, UIView;

@interface TosViewController : _AudioQueueAllocateBuffer <FirstRunMetricsDelegate>
{
    UIView *shadowedView_;
    UIView *bodyView_;
    UIButton *checkbox_;
    PrimaryActionButton *okButton_;
    ResizingGradientView *tosTopGradientView_;
    ResizingGradientView *tosBottomGradientView_;
    BOOL signInAttempted_;
    struct Profile *profile_;
    TabModel *tabModel_;
    id <UrlLoader> loader_;
    struct scoped_ptr<SyncInitialSetupController> syncController_;
    struct ObjCPropertyReleaser propertyReleaser_TosViewController_;
}

- (void)setTosBottomGradientView:(id)fp8;
- (id)tosBottomGradientView;
- (void)setTosTopGradientView:(id)fp8;
- (id)tosTopGradientView;
- (void)setOkButton:(id)fp8;
- (id)okButton;
- (void)setCheckbox:(id)fp8;
- (id)checkbox;
- (void)setBodyView:(id)fp8;
- (id)bodyView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)logMetrics:(int)fp8;
- (void)recordFirstRunMetrics:(BOOL)fp8;
- (void)addWelcomeTabAndDismiss;
- (void)setUpGradientFade:(id)fp8 bottomView:(id)fp12;
- (void)setSignInAttempted;
- (void)dismissModalDialog;
- (id)newTermsOfServiceUrl;
- (void)okButtonTapped:(id)fp8;
- (void)checkboxTapped:(id)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithLoader:(id)fp8 profile:(struct Profile *)fp12 tabModel:(id)fp16;

@end

