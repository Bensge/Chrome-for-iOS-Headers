/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@interface SetUpForTestingCommand : _AudioQueueAllocateBuffer
{
    BOOL clearBrowsingData_;
    BOOL closeTabs_;
    int numberOfNewTabs_;
}

- (void)setNumberOfNewTabs:(int)fp8;
- (int)numberOfNewTabs;
- (BOOL)closeTabs;
- (BOOL)clearBrowsingData;
- (int)tag;
- (id)initWithUrl:(id)fp8;

@end

