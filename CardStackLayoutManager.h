/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@interface CardStackLayoutManager : _AudioQueueAllocateBuffer
{
    struct scoped_nsobject<NSMutableArray> cards_;
    BOOL treatOverExtensionAsScroll_;
    unsigned int previousFirstPinchCardIndex_;
    unsigned int previousSecondPinchCardIndex_;
    struct CGSize cardSize_;
    float maxStagger_;
    float maximumOverextensionAmount_;
    float endLimit_;
    float layoutAxisPosition_;
    float startLimit_;
    BOOL layoutIsVertical_;
    int lastStartStackCardIndex_;
    int firstEndStackCardIndex_;
}

- (int)firstEndStackCardIndex;
- (int)lastStartStackCardIndex;
- (BOOL)layoutIsVertical;
- (void)setStartLimit:(float)fp8;
- (float)startLimit;
- (float)layoutAxisPosition;
- (float)endLimit;
- (void)setMaximumOverextensionAmount:(float)fp8;
- (float)maximumOverextensionAmount;
- (void)setMaxStagger:(float)fp8;
- (float)maxStagger;
- (struct CGSize)cardSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (float)overextensionAmount;
- (BOOL)stackIsFullyOverextended;
- (BOOL)stackIsFullyFannedOut;
- (BOOL)stackIsFullyCollapsed;
- (BOOL)isInEdgeStack:(unsigned int)fp8;
- (BOOL)isInEndStack:(unsigned int)fp8;
- (BOOL)isInStartStack:(unsigned int)fp8;
- (void)setSynchronizeCardViews:(BOOL)fp8;
- (BOOL)cardIsCollapsed:(id)fp8;
- (BOOL)cardIsCovered:(id)fp8;
- (float)pushThresholdForIndexFromEdge:(int)fp8;
- (float)staggerOffsetForIndexFromEdge:(int)fp8;
- (float)cardOriginOnLayoutAxis:(id)fp8;
- (struct CGPoint)cardOrigin:(id)fp8;
- (float)layoutOffset:(struct CGPoint)fp8;
- (float)layoutLength:(struct CGSize)fp8;
- (float)fullyCollapsedStackLength;
- (float)maximumStackLength;
- (float)fannedStackLength;
- (float)computeEdgeStackInnerEdge:(BOOL)fp8 withVisualStackLimit:(float)fp12;
- (int)computeEdgeStackBoundaryIndex:(BOOL)fp8 withVisualStackLimit:(float)fp12;
- (void)layOutEndStack;
- (void)layOutStartStackWithLimit:(float)fp8;
- (void)layOutStartStack;
- (void)layOutEdgeStacksWithStartLimit:(float)fp8;
- (float)startStackLimitAllowingForOverextensionOnCardAtIndex:(unsigned int)fp8;
- (void)handleMultitouchWithFirstDelta:(float)fp8 secondDelta:(float)fp12 firstCardIndex:(int)fp16 secondCardIndex:(int)fp20 decayOnOverpinch:(BOOL)fp24;
- (void)blendOffsetsOfCardsBetweenFirstIndex:(int)fp8 secondIndex:(int)fp12 withFirstDelta:(float)fp16 secondDelta:(float)fp20;
- (void)moveCardsStartingAtIndex:(int)fp8 towardsEnd:(BOOL)fp12 withDrivingDelta:(float)fp16;
- (float)constrainedOffset:(float)fp8 forCardAtIndex:(int)fp12 constrainingNeighborIsPrevious:(BOOL)fp16;
- (void)moveOriginOfCardAtIndex:(unsigned int)fp8 toOffset:(float)fp12;
- (void)moveCardsFromIndex:(unsigned int)fp8 toIndex:(unsigned int)fp12 byAmount:(float)fp16;
- (void)moveCardAtIndex:(unsigned int)fp8 byAmount:(float)fp12;
- (float)cappedFanoutOffsetForCardAtIndex:(int)fp8;
- (float)maximumOffsetForCardAtIndex:(int)fp8;
- (float)maximumCardSeparation;
- (float)clipDelta:(float)fp8 forCardAtIndex:(int)fp12;
- (void)moveCardsrestoringFanoutFromIndex:(unsigned int)fp8 toEnd:(BOOL)fp12 byAmount:(float)fp16 restoreFanOutInStartStack:(BOOL)fp20;
- (void)scrollCardAwayFromPrecedingNeighbor:(unsigned int)fp8;
- (void)scrollCardAtIndex:(unsigned int)fp8 byDelta:(float)fp12 allowEarlyOverscroll:(BOOL)fp16 decayOnOverscroll:(BOOL)fp20 scrollLeadingCards:(BOOL)fp24;
- (void)eliminateOverpinch;
- (void)eliminateOverscroll;
- (void)eliminateOverextension;
- (void)capOverscrollTowardEnd;
- (void)capOverscrollWithScrolledIndex:(unsigned int)fp8 allowEarlyOverscroll:(BOOL)fp12;
- (float)limitOfOverscrollTowardEnd;
- (float)limitOfOverextensionTowardStart;
- (BOOL)overextensionTowardEndOnFirstCard;
- (BOOL)overextensionTowardStartOnCardAtIndex:(unsigned int)fp8;
- (float)distanceBetweenCardAtIndex:(unsigned int)fp8 andCardAtIndex:(unsigned int)fp12;
- (void)fanOutCardsInEdgeStack:(BOOL)fp8;
- (void)recomputeEndStack;
- (void)fanOutCardsWithStartIndex:(unsigned int)fp8;
- (id)cards;
- (void)setLayoutAxisPosition:(float)fp8;
- (void)setLayoutIsVertical:(BOOL)fp8;
- (void)setCardSize:(struct CGSize)fp8;
- (void)removeAllCards;
- (void)removeCard:(id)fp8;
- (void)insertCard:(id)fp8 atIndex:(unsigned int)fp12;
- (void)addCard:(id)fp8;
- (void)setEndLimit:(float)fp8;
- (float)scrollCardAwayFromPrecedingNeighborAmount;
- (float)minStackStaggerAmount;
- (id)init;

@end

