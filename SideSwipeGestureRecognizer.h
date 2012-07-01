/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@interface SideSwipeGestureRecognizer : _AudioQueueAllocateBuffer
{
    struct CGPoint startPoint_;
    int direction_;
    float swipeEdge_;
}

- (void)setDirection:(int)fp8;
- (int)direction;
- (void)setSwipeEdge:(float)fp8;
- (float)swipeEdge;
- (id).cxx_construct;
- (void)touchesCancelled:(id)fp8 withEvent:(id)fp12;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;

@end

