/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@class NILinkedList;

@interface NILinkedListEnumerator : _AudioQueueAllocateBuffer
{
    NILinkedList *_ll;
    struct NILinkedListNode *_iterator;
}

- (id)nextObject;
- (id)initWithLinkedList:(id)fp8;
- (void)dealloc;

@end

