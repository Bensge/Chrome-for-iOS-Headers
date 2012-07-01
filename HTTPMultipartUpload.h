/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@class NSDictionary, NSHTTPURLResponse, NSMutableDictionary, NSString, NSURL;

@interface HTTPMultipartUpload : _AudioQueueAllocateBuffer
{
    NSURL *url_;
    NSDictionary *parameters_;
    NSMutableDictionary *files_;
    NSString *boundary_;
    NSHTTPURLResponse *response_;
}

- (id)response;
- (id)send:(id *)fp8;
- (id)files;
- (void)addFileContents:(id)fp8 name:(id)fp12;
- (void)addFileAtPath:(id)fp8 name:(id)fp12;
- (id)parameters;
- (void)setParameters:(id)fp8;
- (id)URL;
- (void)dealloc;
- (id)initWithURL:(id)fp8;
- (id)formDataForFile:(id)fp8 name:(id)fp12;
- (id)formDataForFileContents:(id)fp8 name:(id)fp12;
- (id)formDataForKey:(id)fp8 value:(id)fp12;
- (id)multipartBoundary;

@end
