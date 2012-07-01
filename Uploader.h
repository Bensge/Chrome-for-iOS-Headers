/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@class NSData, NSMutableDictionary;

@interface Uploader : _AudioQueueAllocateBuffer
{
    NSMutableDictionary *parameters_;
    NSData *minidumpContents_;
    NSData *logFileData_;
    NSMutableDictionary *serverDictionary_;
    NSMutableDictionary *socorroDictionary_;
    NSMutableDictionary *googleDictionary_;
    NSMutableDictionary *extraServerVars_;
}

- (void)dealloc;
- (id)parameters;
- (void)logUploadWithID:(const char *)fp8;
- (void)uploadData:(id)fp8 name:(id)fp12;
- (void)report;
- (void)addServerParameter:(id)fp8 forKey:(id)fp12;
- (BOOL)populateServerDictionary:(id)fp8;
- (id)urlParameterDictionary;
- (id)dictionaryForServerType:(id)fp8;
- (void)createServerParameterDictionaries;
- (BOOL)readMinidumpData;
- (BOOL)readLogFileData;
- (id)clientID;
- (void)translateConfigurationData:(id)fp8;
- (id)initWithConfig:(id)fp8;
- (id)initWithConfigFile:(const char *)fp8;

@end
