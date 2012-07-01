/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@class NSString;

@interface GTMKeyValueObservingHelper : _AudioQueueAllocateBuffer
{
    id observer_;
    SEL selector_;
    id userInfo_;
    id target_;
    NSString *keyPath_;
}

- (void)deregister;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)dealloc;
- (id)description;
- (id)initWithObserver:(id)fp8 object:(id)fp12 keyPath:(id)fp16 selector:(SEL)fp20 userInfo:(id)fp24 options:(unsigned int)fp28;

@end
