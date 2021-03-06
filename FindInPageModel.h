/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@interface FindInPageModel : _AudioQueueAllocateBuffer
{
    BOOL enabled_;
    struct scoped_nsobject<NSString> text_;
    unsigned int matches_;
    unsigned int currentIndex_;
    struct CGPoint currentPoint_;
}

- (struct CGPoint)currentPoint;
- (unsigned int)currentIndex;
- (unsigned int)matches;
- (BOOL)enabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateIndex:(int)fp8 atPoint:(struct CGPoint)fp12;
- (void)updateQuery:(id)fp8 matches:(unsigned int)fp12;
- (void)setEnabled:(BOOL)fp8;
- (id)text;

@end

