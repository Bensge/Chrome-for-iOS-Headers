/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@class NSThread;

@interface ChromeToDevicePendingJobManager : _AudioQueueAllocateBuffer
{
    struct scoped_nsobject<NSMutableDictionary> printToPhoneJobs_;
    struct scoped_nsobject<NSMutableDictionary> snapshotJobs_;
    NSThread *operation_thread_;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelAllPendingJobs;
- (void)cancelAllPendingJobs:(id)fp8;
- (id)titleForJob:(id)fp8;
- (BOOL)hasJob:(id)fp8;
- (void)removeFailedSnapshotJobWithOriginalURL:(id)fp8;
- (id)snapshotJobWithOriginalURL:(id)fp8;
- (id)jobWithChromeToDeviceURL:(id)fp8;
- (id)printToPhoneJobWithId:(id)fp8;
- (id)snapshotJobWithId:(id)fp8;
- (void)tabWillClose:(id)fp8;
- (void)removePrintToPhoneJob:(id)fp8;
- (void)removeSnapshotJob:(id)fp8;
- (void)addPrintToPhoneJob:(id)fp8;
- (void)addSnapshotJob:(id)fp8;
- (void)dealloc;
- (id)init;

@end

