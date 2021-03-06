/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@interface URLVerifyingProtocolHandler : _AudioQueueAllocateBuffer
{
    struct scoped_nsobject<NSURL> url_;
}

+ (id)canonicalRequestForRequest:(id)fp8;
+ (BOOL)canInitWithRequest:(id)fp8;
+ (id)currentURLForWebView:(id)fp8 trustLevel:(int *)fp12;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithRequest:(id)fp8 cachedResponse:(id)fp12 client:(id)fp16;

@end

