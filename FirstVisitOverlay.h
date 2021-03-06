/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@interface FirstVisitOverlay : _AudioQueueAllocateBuffer
{
    struct scoped_nsobject<UIView> view_;
    struct scoped_nsobject<UIView> helpOmniboxView_;
    struct scoped_nsobject<UIView> helpSwitchTabView_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)view;
- (void)startBounceView:(id)fp8;
- (void)startBounce;
- (void)setLabelAttributes:(id)fp8;
- (id)newBubbleWithFrame:(struct CGRect)fp8 helpText:(id)fp24 position:(struct CGPoint)fp28;
- (void)showOrHideView:(id)fp8 hidden:(BOOL)fp12;
- (void)setHelpBubblesHidden:(BOOL)fp8;
- (void)bringToFront:(id)fp8;
- (void)fadeOut;
- (void)fadeIn:(id)fp8 frame:(struct CGRect)fp12;
- (void)dealloc;
- (id)init;

@end

