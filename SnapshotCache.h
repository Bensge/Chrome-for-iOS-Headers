/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@class NSSet;

@interface SnapshotCache : _AudioQueueAllocateBuffer
{
    struct scoped_nsobject<NSMutableDictionary> imageDictionary_;
    struct scoped_nsobject<NSMutableDictionary> greyImageDictionary_;
    NSSet *pinnedIDs_;
    struct scoped_nsobject<NSString> mostRecentGreySessionId_;
    struct scoped_nsprotocol<void (^)(UIImage *)> mostRecentGreyBlock_;
    struct ObjCPropertyReleaser propertyReleaser_SnapshotCache_;
}

+ (id)allocWithZone:(struct _NSZone *)fp8;
+ (id)sharedInstance;
- (void)setPinnedIDs:(id)fp8;
- (id)pinnedIDs;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)greyImageForSessionID:(id)fp8 callback:(id)fp(null);
- (void)clearGreySessionInfo;
- (void)removeGreyCache;
- (void)createGreyCache:(id)fp8;
- (void)loadGreyImageAsync:(id)fp8;
- (void)saveGreyImage:(id)fp8 forKey:(id)fp12;
- (void)handleBecomeActive;
- (void)handleResignActive;
- (void)handleLowMemory;
- (void)purgeCacheOlderThan:(const struct Time *)fp8 keeping:(id)fp12;
- (struct FilePath)imagePathForSessionID:(id)fp8;
- (struct FilePath)cacheDirectory;
- (void)removeImageWithSessionID:(id)fp8;
- (void)setImage:(id)fp8 withSessionID:(id)fp12;
- (void)retrieveImageForSessionID:(id)fp8 callback:(id)fp(null);
- (id)init;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)autorelease;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;

@end

