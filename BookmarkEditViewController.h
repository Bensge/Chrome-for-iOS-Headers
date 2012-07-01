/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

#import "BookmarkFolderViewControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class BookmarkFolderViewController, BookmarkTextFieldCell, NSString, UITableViewCell;

@interface BookmarkEditViewController : _AudioQueueAllocateBuffer <BookmarkFolderViewControllerDelegate, UITextFieldDelegate>
{
    id <BookmarkEditViewControllerDelegate> editorDelegate_;
    struct scoped_ptr<BookmarkEditModelBridge> bridge_;
    struct Profile *profile_;
    const struct BookmarkNode *editingBookmark_;
    const struct BookmarkNode *folder_;
    // Error parsing type: ^{BookmarkModel=^^?^^?{NotificationRegistrar={vector<content::NotificationRegistrar::Record, std::allocator<content::NotificationRegistrar::Record> >={_Vector_impl=^{Record}^{Record}^{Record}}}}^{Profile}BB{BookmarkNode=^^?{basic_string<unsigned short, base::string16_char_traits, std::allocator<unsigned short> >={_Alloc_hider=^S}}^{BookmarkNode}{ScopedVector<BookmarkNode>={vector<BookmarkNode *, std::allocator<BookmarkNode *> >={_Vector_impl=^^{BookmarkNode}^^{BookmarkNode}^^{BookmarkNode}}}}q{GURL={basic_string<char, std::char_traits<char>, std::allocator<char> >={_Alloc_hider=*}}B{Parsed={Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}^{Parsed}}^{GURL}}i{Time=q}{Time=q}{scoped_ptr<gfx::Image>=^{Image}}iBi}^{BookmarkPermanentNode}^{BookmarkPermanentNode}^{BookmarkPermanentNode}q{ObserverList<BookmarkModelObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<BookmarkModelObserver *, std::allocator<BookmarkModelObserver *> >={_Vector_impl=^^{BookmarkModelObserver}^^{BookmarkModelObserver}^^{BookmarkModelObserver}}}ii}{multiset<BookmarkNode *, BookmarkModel::NodeURLComparator, std::allocator<BookmarkNode *> >={_Rb_tree<BookmarkNode *, BookmarkNode *, std::_Identity<BookmarkNode *>, BookmarkModel::NodeURLComparator, std::allocator<BookmarkNode *> >={_Rb_tree_impl<BookmarkModel::NodeURLComparator, false>={NodeURLComparator=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}{Lock={LockImpl={_opaque_pthread_mutex_t=l[40c]}}}{CancelableRequestConsumerTSimple<BookmarkNode *>=^^?{map<CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest, BookmarkNode *, std::less<CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest>, std::allocator<std::pair<const CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest, BookmarkNode *> > >={_Rb_tree<CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest, std::pair<const CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest, BookmarkNode *>, std::_Select1st<std::pair<const CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest, BookmarkNode *> >, std::less<CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest>, std::allocator<std::pair<const CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest, BookmarkNode *> > >={_Rb_tree_impl<std::less<CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest>, false>={less<CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest>=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}{PendingRequest=^{CancelableRequestProvider}i}}{scoped_refptr<BookmarkStorage>=^{BookmarkStorage}}{scoped_ptr<BookmarkIndex>=^{BookmarkIndex}}{WaitableEvent={scoped_refptr<base::WaitableEvent::WaitableEventKernel>=^{WaitableEventKernel}}}i{scoped_ptr<BookmarkExpandedStateTracker>=^{BookmarkExpandedStateTracker}}}, name: bookmarks_
    BookmarkTextFieldCell *titleCell_;
    BookmarkTextFieldCell *urlCell_;
    UITableViewCell *folderCell_;
    NSString *pageTitle_;
    NSString *urlString_;
    BookmarkFolderViewController *folderViewController_;
    BOOL inPopover_;
    struct ObjCPropertyReleaser propertyReleaser_BookmarkEditViewController_;
}

- (void)setInPopover:(BOOL)fp8;
- (BOOL)inPopover;
- (void)setUrlCell:(id)fp8;
- (id)urlCell;
- (void)setUrlString:(id)fp8;
- (id)urlString;
- (void)setTitleCell:(id)fp8;
- (id)titleCell;
- (void)setPageTitle:(id)fp8;
- (id)pageTitle;
- (void)setFolderCell:(id)fp8;
- (id)folderCell;
- (void)setFolderViewController:(id)fp8;
- (id)folderViewController;
- (void)setEditorDelegate:(id)fp8;
- (id)editorDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)bookmarkFolderDidSelect:(const struct BookmarkNode *)fp8;
- (void)bookmarkCancel;
- (void)bookmarkSave;
- (void)bookmarkRemove;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 willSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 titleForHeaderInSection:(int)fp12;
- (float)tableView:(id)fp8 heightForFooterInSection:(int)fp12;
- (id)tableView:(id)fp8 viewForFooterInSection:(int)fp12;
- (id)footerViewButtonInFrame:(struct CGRect)fp8;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (id)folderEditorCell;
- (id)urlEditorCell;
- (id)titleEditorCell;
- (BOOL)textFieldShouldReturn:(id)fp8;
- (void)updateSaveButtonState;
- (void)textFieldChanged:(id)fp8;
- (void)unregisterObservers;
- (void)registerObservers;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)discardCachedCells;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)setFolder:(const struct BookmarkNode *)fp8;
- (const struct BookmarkNode *)editingBookmark;
- (void)setEditingBookmark:(const struct BookmarkNode *)fp8;
- (void)dealloc;
-     // Error parsing type: @20@0:4^{Profile=^^?{map<const void *, linked_ptr<base::SupportsUserData::Data>, std::less<const void *>, std::allocator<std::pair<const void *const, linked_ptr<base::SupportsUserData::Data> > > >={_Rb_tree<const void *, std::pair<const void *const, linked_ptr<base::SupportsUserData::Data> >, std::_Select1st<std::pair<const void *const, linked_ptr<base::SupportsUserData::Data> > >, std::less<const void *>, std::allocator<std::pair<const void *const, linked_ptr<base::SupportsUserData::Data> > > >={_Rb_tree_impl<std::less<const void *>, false>={less<const void *>=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}Bi}8^{BookmarkModel=^^?^^?{NotificationRegistrar={vector<content::NotificationRegistrar::Record, std::allocator<content::NotificationRegistrar::Record> >={_Vector_impl=^{Record}^{Record}^{Record}}}}^{Profile}BB{BookmarkNode=^^?{basic_string<unsigned short, base::string16_char_traits, std::allocator<unsigned short> >={_Alloc_hider=^S}}^{BookmarkNode}{ScopedVector<BookmarkNode>={vector<BookmarkNode *, std::allocator<BookmarkNode *> >={_Vector_impl=^^{BookmarkNode}^^{BookmarkNode}^^{BookmarkNode}}}}q{GURL={basic_string<char, std::char_traits<char>, std::allocator<char> >={_Alloc_hider=*}}B{Parsed={Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}^{Parsed}}^{GURL}}i{Time=q}{Time=q}{scoped_ptr<gfx::Image>=^{Image}}iBi}^{BookmarkPermanentNode}^{BookmarkPermanentNode}^{BookmarkPermanentNode}q{ObserverList<BookmarkModelObserver, false>={WeakReferenceOwner={scoped_refptr<base::internal::WeakReference::Flag>=^{Flag}}}{vector<BookmarkModelObserver *, std::allocator<BookmarkModelObserver *> >={_Vector_impl=^^{BookmarkModelObserver}^^{BookmarkModelObserver}^^{BookmarkModelObserver}}}ii}{multiset<BookmarkNode *, BookmarkModel::NodeURLComparator, std::allocator<BookmarkNode *> >={_Rb_tree<BookmarkNode *, BookmarkNode *, std::_Identity<BookmarkNode *>, BookmarkModel::NodeURLComparator, std::allocator<BookmarkNode *> >={_Rb_tree_impl<BookmarkModel::NodeURLComparator, false>={NodeURLComparator=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}{Lock={LockImpl={_opaque_pthread_mutex_t=l[40c]}}}{CancelableRequestConsumerTSimple<BookmarkNode *>=^^?{map<CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest, BookmarkNode *, std::less<CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest>, std::allocator<std::pair<const CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest, BookmarkNode *> > >={_Rb_tree<CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest, std::pair<const CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest, BookmarkNode *>, std::_Select1st<std::pair<const CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest, BookmarkNode *> >, std::less<CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest>, std::allocator<std::pair<const CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest, BookmarkNode *> > >={_Rb_tree_impl<std::less<CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest>, false>={less<CancelableRequestConsumerTSimple<BookmarkNode *>::PendingRequest>=}{_Rb_tree_node_base=i^{_Rb_tree_node_base}^{_Rb_tree_node_base}^{_Rb_tree_node_base}}I}}}{PendingRequest=^{CancelableRequestProvider}i}}{scoped_refptr<BookmarkStorage>=^{BookmarkStorage}}{scoped_ptr<BookmarkIndex>=^{BookmarkIndex}}{WaitableEvent={scoped_refptr<base::WaitableEvent::WaitableEventKernel>=^{WaitableEventKernel}}}i{scoped_ptr<BookmarkExpandedStateTracker>=^{BookmarkExpandedStateTracker}}}12r^{BookmarkNode=^^?{basic_string<unsigned short, base::string16_char_traits, std::allocator<unsigned short> >={_Alloc_hider=^S}}^{BookmarkNode}{ScopedVector<BookmarkNode>={vector<BookmarkNode *, std::allocator<BookmarkNode *> >={_Vector_impl=^^{BookmarkNode}^^{BookmarkNode}^^{BookmarkNode}}}}q{GURL={basic_string<char, std::char_traits<char>, std::allocator<char> >={_Alloc_hider=*}}B{Parsed={Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}{Component=ii}^{Parsed}}^{GURL}}i{Time=q}{Time=q}{scoped_ptr<gfx::Image>=^{Image}}iBi}16, name: initWithProfile:bookmarkModel:folder:
- (id)initWithProfile:(struct Profile *)fp8;
- (id)init;

@end

