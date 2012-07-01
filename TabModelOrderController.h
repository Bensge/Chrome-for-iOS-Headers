/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@class TabModel;

@interface TabModelOrderController : _AudioQueueAllocateBuffer
{
    TabModel *model_;
    int insertionPolicy_;
}

- (void)setInsertionPolicy:(int)fp8;
- (int)insertionPolicy;
- (void)tabSelected:(id)fp8;
- (id)determineNewSelectedTabFromRemovedTab:(id)fp8;
- (int)determineInsertionIndexForAppending;
- (int)determineInsertionIndexForTab:(id)fp8 transition:(int)fp12 opener:(id)fp16 adjacency:(int)fp20;
- (void)dealloc;
- (id)initWithTabModel:(id)fp8;

@end
