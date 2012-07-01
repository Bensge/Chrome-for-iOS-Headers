/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@class CardView;

@interface StackCard : _AudioQueueAllocateBuffer
{
    id <StackCardViewProvider> viewProvider_;
    struct ObjCPropertyReleaser propertyReleaser_StackCard_;
    CardView *view_;
    struct CGRect bounds_;
    struct CGPoint center_;
    BOOL synchronizeView_;
    BOOL isActiveTab_;
}

- (BOOL)isActiveTab;
- (BOOL)synchronizeView;
- (void)setView:(id)fp8;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGPoint)centerOfPixelAlignedFrame;
- (struct CGRect)frameWithPixelAlignedOrigin;
- (struct CGPoint)pixelAlignedOrigin;
- (struct CGPoint)origin;
- (void)releaseView;
- (BOOL)viewIsLive;
- (void)setCenter:(struct CGPoint)fp8;
- (struct CGPoint)center;
- (void)setBounds:(struct CGRect)fp8;
- (struct CGRect)bounds;
- (void)setFrame:(struct CGRect)fp8;
- (struct CGRect)frame;
- (id)view;
- (void)setIsActiveTab:(BOOL)fp8;
- (void)setSynchronizeView:(BOOL)fp8;
- (id)initWithViewProvider:(id)fp8;

@end

