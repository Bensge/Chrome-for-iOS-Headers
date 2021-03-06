/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

#import "NativeContentProvider-Protocol.h"
#import "NotificationObserverDelegate-Protocol.h"
#import "PrerenderProvider-Protocol.h"
#import "TabDelegate-Protocol.h"
#import "WWANStateModelBridge-Protocol.h"

@interface PrerenderController : _AudioQueueAllocateBuffer <PrerenderProvider, NativeContentProvider, TabDelegate, WWANStateModelBridge, NotificationObserverDelegate>
{
    struct Profile *profile_;
    struct scoped_nsobject<Tab> tab_;
    struct GURL prerenderedURL_;
    struct GURL scheduledURL_;
    int scheduledTransition_;
    struct scoped_ptr<NotificationObserverBridge> observerBridge_;
    struct PrefChangeRegistrar prefChangeRegistrar_;
    struct scoped_ptr<WWANStateObserverBridge> wwanStateObserverBridge_;
    BOOL enabled_;
    BOOL wifiOnly_;
    BOOL usingWWAN_;
    id <PrerenderControllerDelegate> delegate_;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (struct GURL)prerenderedURL;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)currentSessionEntry;
- (void)discardPrerender;
- (void)removeScheduledPrerenderRequests;
- (void)schedulePrerenderCancel;
- (void)destroyPreviewContents;
- (void)startPrerender;
- (BOOL)shouldPrerenderURL:(const struct GURL *)fp8;
- (BOOL)isPrerenderingEnabled;
- (id)controllerForUrl:(id)fp8 withError:(id)fp12;
- (id)controllerForUrl:(id)fp8;
- (void)observe:(int)fp8 source:(const struct NotificationSource *)fp12 details:(const struct NotificationDetails *)fp16;
- (void)wwanStateChangedTo:(BOOL)fp8;
- (id)releasePrerenderContents;
- (void)cancelPrerender;
- (void)prerenderURL:(const struct GURL *)fp8 transition:(int)fp12 immediately:(BOOL)fp16;
- (void)dealloc;
- (id)initWithProfile:(struct Profile *)fp8;

@end

