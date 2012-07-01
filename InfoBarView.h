/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "BidiContainerView.h"

@class BidiTextLabel, UIButton;

@interface InfoBarView : BidiContainerView
{
    int type_;
    BidiTextLabel *label_;
    UIButton *button1_;
    UIButton *button2_;
    float messageWidth_;
    float rightMarginWidth_;
    float buttonWidth_;
    float visibleHeight_;
    float targetHeight_;
    float backgroundHeight_;
    const struct InfoBarViewConfig *config_;
    struct InfoBarViewDelegate *delegate_;
}

- (void)setVisibleHeight:(float)fp8;
- (float)visibleHeight;
- (id)infoBarButton:(id)fp8 tag:(int)fp12 target:(id)fp16 action:(SEL)fp20;
- (void)addButton:(id)fp8 target:(id)fp12 action:(SEL)fp16;
- (void)addButton1:(id)fp8 button2:(id)fp12 target:(id)fp16 action:(SEL)fp20;
- (void)addLabel:(id)fp8;
- (void)addLeftIcon:(id)fp8;
- (void)addCloseButtonWithTarget:(id)fp8 action:(SEL)fp12;
- (id)backgroundGradientImageForType:(int)fp8 height:(float)fp12;
- (void)resetBackground:(int)fp8;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8 label:(id)fp16 font:(id)fp20;
- (id)initWithFrame:(struct CGRect)fp8 delegate:(struct InfoBarViewDelegate *)fp24 type:(int)fp28;

@end
