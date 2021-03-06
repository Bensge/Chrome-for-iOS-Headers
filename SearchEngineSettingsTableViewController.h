/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@interface SearchEngineSettingsTableViewController : _AudioQueueAllocateBuffer
{
    struct Profile *profile_;
    struct TemplateURLService *templateURLService_;
    int selectedRow_;
    BOOL updatingBackend_;
    // Error parsing type: {scoped_ptr<<anonymous>::SearchEngineObserver>="ptr_"^{SearchEngineObserver}}, name: observer_
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)templateURLServiceChanged;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (id)initWithProfile:(struct Profile *)fp8;

@end

