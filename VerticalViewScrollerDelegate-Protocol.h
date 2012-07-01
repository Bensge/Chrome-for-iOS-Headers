/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol VerticalViewScrollerDelegate <NSObject>
- (BOOL)allowDragAndDropWithinItemAtIndex:(unsigned int)fp8;
- (BOOL)allowDragAndDropWithItemAtIndex:(unsigned int)fp8;
- (void)viewMovedFromIndex:(unsigned int)fp8 insideIndex:(unsigned int)fp12;
- (void)viewMovedFromIndex:(unsigned int)fp8 toIndex:(unsigned int)fp12;
- (void)frameChanged;
- (unsigned int)numberOfElements;
- (void)updateView:(id)fp8 forIndex:(unsigned int)fp12;
- (id)newView;
@end

