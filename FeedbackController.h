/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@class NSString;

@interface FeedbackController : _AudioQueueAllocateBuffer
{
    NSString *tempDirPath_;
    struct scoped_ptr<FeedbackFetcherDelegate> fetcherDelegate_;
    struct scoped_nsobject<NSMutableDictionary> feedbackFiles_;
    struct URLRequestContextGetter *requestContext_;
    struct ObjCPropertyReleaser propertyReleaser_FeedbackController_;
}

+ (id)sharedInstance;
- (void)setRequestContext:(struct URLRequestContextGetter *)fp8;
- (struct URLRequestContextGetter *)requestContext;
- (void)setTempDirPath:(id)fp8;
- (id)tempDirPath;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)convertBatteryState:(int)fp8;
- (void)urlFetchDidComplete:(const struct URLFetcher *)fp8;
- (BOOL)deleteFeedbackDataFile:(id)fp8;
- (id)allStoredFeedback;
- (void)removeAllStoredFeedbacks;
- (unsigned int)sendFeedback;
- (BOOL)saveFeedback:(id)fp8;
- (id)init;

@end

