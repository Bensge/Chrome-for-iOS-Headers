/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@interface GTMLogger : _AudioQueueAllocateBuffer
{
    id <GTMLogWriter> writer_;
    id <GTMLogFormatter> formatter_;
    id <GTMLogFilter> filter_;
}

+ (id)logger;
+ (id)loggerWithWriter:(id)fp8 formatter:(id)fp12 filter:(id)fp16;
+ (id)standardLoggerWithPath:(id)fp8;
+ (id)standardLoggerWithStderr;
+ (id)standardLogger;
+ (void)setSharedLogger:(id)fp8;
+ (id)sharedLogger;
- (void)logAssert:(id)fp8;
- (void)logError:(id)fp8;
- (void)logInfo:(id)fp8;
- (void)logDebug:(id)fp8;
- (void)setFilter:(id)fp8;
- (id)filter;
- (void)setFormatter:(id)fp8;
- (id)formatter;
- (void)setWriter:(id)fp8;
- (id)writer;
- (void)dealloc;
- (id)initWithWriter:(id)fp8 formatter:(id)fp12 filter:(id)fp16;
- (id)init;

@end

