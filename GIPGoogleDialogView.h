/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@class GIPResourceLoader, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface GIPGoogleDialogView : _AudioQueueAllocateBuffer
{
    UIButton *rightButton_;
    UIButton *leftButton_;
    UIButton *fullButton_;
    UILabel *title_;
    UILabel *caption_;
    UIImageView *backgroundView_;
    UIImageView *iconView_;
    UIActivityIndicatorView *spinner_;
    UIView *contentView_;
    int buttonCount_;
    GIPResourceLoader *imageLoader_;
    BOOL contentViewShouldFillDialog_;
}

- (BOOL)contentViewShouldFillDialog;
- (void)setImageLoader:(id)fp8;
- (id)imageLoader;
- (id)contentView;
- (id)iconView;
- (id)backgroundView;
- (id)caption;
- (id)title;
- (id)fullButton;
- (id)rightButton;
- (id)leftButton;
- (void)relayout;
- (void)stopAnimatingSpinner;
- (void)startAnimatingSpinner;
- (struct CGRect)contentFrame;
- (struct CGRect)iconViewFrame;
- (void)setIconViewImage:(id)fp8 withAlpha:(float)fp12;
- (struct CGRect)fullSizeButtonFrame;
- (struct CGRect)leftButtonFrame;
- (struct CGRect)rightButtonFrame;
- (void)setButtonCount:(int)fp8;
- (id)buttonWithNormalImage:(id)fp8 pressedImage:(id)fp12;
- (void)layoutSubviews;
- (void)setContentViewShouldFillDialog:(BOOL)fp8;
- (id)initWithFrame:(struct CGRect)fp8 imageLoader:(id)fp24 fillContent:(BOOL)fp28;
- (id)initWithFrame:(struct CGRect)fp8 imageLoader:(id)fp24;
- (id)initWithFrame:(struct CGRect)fp8;

@end

