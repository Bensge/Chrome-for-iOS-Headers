/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface GIPResourceLoader : _AudioQueueAllocateBuffer
{
    unsigned int cacheSize_;
    NSMutableDictionary *cache_;
    NSMutableArray *access_;
    NSString *bundleName_;
}

+ (id)imageNamed:(id)fp8 inBundle:(id)fp12;
+ (id)imageNamed:(id)fp8 fromLoader:(id)fp12 shouldCache:(BOOL)fp16;
+ (id)imageNamed:(id)fp8 fromLoader:(id)fp12;
- (void)setBundleName:(id)fp8;
- (id)bundleName;
- (void)flush;
- (void)prune;
- (void)touch:(id)fp8;
- (void)put:(id)fp8 forKey:(id)fp12;
- (id)imageNamed:(id)fp8 cache:(BOOL)fp12;
- (id)imageNamed:(id)fp8;
- (void)dealloc;
- (id)initWithCacheSize:(int)fp8 bundleName:(id)fp12;
- (id)initWithCacheSize:(int)fp8;
- (id)initWithBundleName:(id)fp8;
- (id)init;

@end

