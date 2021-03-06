/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@class NSBundle;

@interface GTMUILocalizer : _AudioQueueAllocateBuffer
{
    id owner_;
    id otherObjectToLocalize_;
    id yetAnotherObjectToLocalize_;
    NSBundle *bundle_;
}

+ (id)bundleForOwner:(id)fp8;
- (void)setYetAnotherObjectToLocalize:(id)fp8;
- (id)yetAnotherObjectToLocalize;
- (void)setOtherObjectToLocalize:(id)fp8;
- (id)otherObjectToLocalize;
- (void)setOwner:(id)fp8;
- (id)owner;
- (void)localizeButton:(id)fp8;
- (void)localizeAccessibility:(id)fp8;
- (void)localizeView:(id)fp8 recursively:(BOOL)fp12;
- (void)localizeToolbar:(id)fp8;
- (void)localizeObject:(id)fp8 recursively:(BOOL)fp12;
- (id)localizedStringForString:(id)fp8;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithBundle:(id)fp8;

@end

