/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

#import "ShareToTableDelegate-Protocol.h"

@class NSString, NSURL, ShareToService, ShareToTableViewController, UIView, UIViewController;

@interface ShareToController : _AudioQueueAllocateBuffer <ShareToTableDelegate>
{
    NSURL *url_;
    NSString *title_;
    UIViewController *controller_;
    ShareToService *lastUsedService_;
    UIView *containerView_;
    ShareToTableViewController *tableViewController_;
    struct ObjCPropertyReleaser propertyReleaser_ShareToController_;
}

+ (id)allocWithZone:(struct _NSZone *)fp8;
+ (id)sharedInstance;
- (void)setContainerView:(id)fp8;
- (id)containerView;
- (void)setTableViewController:(id)fp8;
- (id)tableViewController;
- (void)setLastUsedService:(id)fp8;
- (id)lastUsedService;
- (void)setController:(id)fp8;
- (id)controller;
- (void)setTitle:(id)fp8;
- (id)title;
- (void)setUrl:(id)fp8;
- (id)url;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)serviceItemSelected:(id)fp8;
- (void)tappedBehindPopup:(id)fp8;
- (void)dismissPopup;
- (void)showPopup;
- (id)availableServices;
- (void)unloadNib;
- (void)clearShare;
- (BOOL)isEnabled;
- (void)shareURL:(id)fp8 title:(id)fp12 controller:(id)fp16;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)autorelease;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;

@end

