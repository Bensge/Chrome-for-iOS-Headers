/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class UIScrollView, UIView;

@interface VerticalViewScroller : _AudioQueueAllocateBuffer <UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    UIScrollView *scrollView_;
    struct scoped_nsobject<NSMutableSet> reusableViews_;
    int firstNeededIndex_;
    int lastNeededIndex_;
    int leftMargin_;
    BOOL dragging_;
    UIView *draggingView_;
    int draggingOriginalIndex_;
    int draggingOldIndex_;
    int draggingNewIndex_;
    struct CGPoint lastDragPoint_;
    unsigned int numElements_;
    BOOL newIndexIsDropTarget_;
    struct ObjCPropertyReleaser propertyReleaser_VerticalViewScroller_;
    struct CGSize viewSize_;
    struct UIEdgeInsets viewMargin_;
    unsigned int numColumns_;
    id <VerticalViewScrollerDelegate> delegate_;
    float topMargin_;
}

- (void)setTopMargin:(float)fp8;
- (float)topMargin;
- (id)delegate;
- (unsigned int)numColumns;
- (void)setViewMargin:(struct UIEdgeInsets)fp8;
- (struct UIEdgeInsets)viewMargin;
- (void)setViewSize:(struct CGSize)fp8;
- (struct CGSize)viewSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)fp8;
- (void)handlePan:(id)fp8;
- (void)endDragging:(struct CGPoint)fp8;
- (BOOL)isNewIndexDropTarget;
- (void)waitAndUpdateLayout;
- (void)updateDragPosition:(struct CGPoint)fp8;
- (void)updateDropTargetAnimations;
- (void)updateScrollViewOffset;
- (void)beginDragging:(id)fp8;
- (void)createAndLayoutViews;
- (void)addView:(unsigned int)fp8;
- (struct CGRect)frameForIndex:(unsigned int)fp8;
- (void)layoutSubviews;
- (void)layoutViews:(BOOL)fp8;
- (void)scrollViewDidScroll:(id)fp8;
- (void)setAccessibilityLabel:(id)fp8;
- (void)setDelegate:(id)fp8;
- (float)scrollViewHeight;
- (id)viewForIndex:(int)fp8;
- (int)indexForView:(id)fp8;
- (void)reloadView:(unsigned int)fp8;
- (void)reloadViews;
- (void)setFrame:(struct CGRect)fp8;
- (void)updateLeftMargin;
- (id)dequeueReusableView;
- (int)indexForTag:(int)fp8;
- (int)tagForIndex:(int)fp8;
- (void)setNumColumns:(unsigned int)fp8;
- (void)updateContentSize;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)fp8;
- (void)setup;

@end

