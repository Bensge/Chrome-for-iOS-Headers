/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@class GTMFadeTruncatingLabel, TabSpinnerImageProvider, UIButton, UIImage;

@interface TabView : _AudioQueueAllocateBuffer
{
    TabSpinnerImageProvider *spinnerProvider_;
    UIButton *closeButton_;
    GTMFadeTruncatingLabel *titleLabel_;
    UIImage *background_;
    struct scoped_nsobject<UIImageView> faviconView_;
    BOOL collapsed_;
    struct ObjCPropertyReleaser propertyReleaser_TabView_;
}

- (BOOL)isCollapsed;
- (void)setBackground:(id)fp8;
- (id)background;
- (void)setTitleLabel:(id)fp8;
- (id)titleLabel;
- (void)setCloseButton:(id)fp8;
- (id)closeButton;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopProgressSpinner;
- (void)startProgressSpinner;
- (struct CGRect)closeRectForBounds:(struct CGRect)fp8;
- (struct CGRect)titleRectForBounds:(struct CGRect)fp8;
- (struct CGRect)faviconRectForBounds:(struct CGRect)fp8;
- (void)updateBackgroundImage:(BOOL)fp8;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)fp8 withEvent:(id)fp16;
- (void)drawRect:(struct CGRect)fp8;
- (void)setFavicon:(id)fp8;
- (id)favicon;
- (void)setTitle:(id)fp8;
- (void)setCollapsed:(BOOL)fp8;
- (void)setSelected:(BOOL)fp8;
- (id)initWithImageProvider:(id)fp8;

@end
