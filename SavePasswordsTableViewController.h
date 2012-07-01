/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@interface SavePasswordsTableViewController : _AudioQueueAllocateBuffer
{
    // Error parsing type: {PrefMember<bool>="_vptr$NotificationObserver"^^?"pref_name_"{basic_string<char, std::char_traits<char>, std::allocator<char> >="_M_dataplus"{_Alloc_hider="_M_p"*}}"observer_"^{NotificationObserver}"prefs_"^{PrefService}"setting_value_"B"internal_"{scoped_refptr<PrefMember<bool>::Internal>="ptr_"^{Internal}}}, name: passwordManagerEnabled_
    struct PasswordStore *passwordStore_;
    struct scoped_ptr<SavePasswordsConsumer> savedPasswordsConsumer_;
    struct scoped_ptr<SavePasswordsConsumer> blacklistPasswordsConsumer_;
    struct ScopedVector<webkit::forms::PasswordForm> savedForms_;
    struct ScopedVector<webkit::forms::PasswordForm> blacklistedForms_;
    struct scoped_nsobject<UISwitch> savePasswordsSwitch_;
    struct ObjCPropertyReleaser propertyReleaser_SavePasswordsTableViewController_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)visibleSectionNumberToSectionEnum:(int)fp8;
- (void)deleteRowOrSection:(id)fp8 form:(struct ScopedVector<webkit::forms::PasswordForm> *)fp12 forIndexPath:(id)fp16;
- (void)onPasswordStoreRequestDone:(const struct vector<webkit::forms::PasswordForm *, std::allocator<webkit::forms::PasswordForm *>> *)fp8;
- (void)getLoginsFromPasswordStore;
- (void)enableSavePasswordsChanged:(id)fp8;
- (void)tableView:(id)fp8 commitEditingStyle:(int)fp12 forRowAtIndexPath:(id)fp16;
- (BOOL)tableView:(id)fp8 canEditRowAtIndexPath:(id)fp12;
- (void)setEditing:(BOOL)fp8 animated:(BOOL)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (id)initWithProfile:(struct Profile *)fp8;

@end
