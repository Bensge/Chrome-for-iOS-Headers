/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@interface SnapshotManager : _AudioQueueAllocateBuffer
{
}

- (void)greyImageForSessionID:(id)fp8 callback:(id)fp(null);
- (void)removeImageWithSessionID:(id)fp8;
- (void)setImage:(id)fp8 withSessionID:(id)fp12;
- (void)retrieveImageForSessionID:(id)fp8 callback:(id)fp(null);
- (id)generateSnapshotForView:(id)fp8 withSize:(struct CGSize)fp12 overlayView:(id)fp20 overlayYOffset:(float)fp24;

@end

