/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@interface OmniboxPopupTableViewController : _AudioQueueAllocateBuffer
{
    struct ScopedCFTypeRef<const __CTFont *> smallFont_;
    struct ScopedCFTypeRef<const __CTFont *> bigFont_;
    struct ScopedCFTypeRef<const __CTFont *> smallBoldFont_;
    struct ScopedCFTypeRef<const __CTFont *> bigBoldFont_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)acceptRow:(unsigned int)fp8;
- (void)copyRowToOmnibox:(unsigned int)fp8;
- (id)attributedStringWithString:(id)fp8 classifications:(const struct vector<AutocompleteMatch::ACMatchClassification, std::allocator<AutocompleteMatch::ACMatchClassification>> *)fp12 smallFont:(BOOL)fp16 color:(id)fp20 dimColor:(id)fp24;
- (BOOL)isAppendQueryEnabled:(unsigned int)fp8;
- (id)getLeftImage:(unsigned int)fp8;
- (const struct vector<AutocompleteMatch::ACMatchClassification, std::allocator<AutocompleteMatch::ACMatchClassification>> *)getDetailTextClassifications:(unsigned int)fp8;
- (id)getDetailText:(unsigned int)fp8;
- (const struct vector<AutocompleteMatch::ACMatchClassification, std::allocator<AutocompleteMatch::ACMatchClassification>> *)getTextClassifications:(unsigned int)fp8;
- (id)getText:(unsigned int)fp8;
- (unsigned int)dataSourceIndexToDisplayRowNumber:(unsigned int)fp8;
- (unsigned int)numberOfRows;
- (void)scrollViewDidScroll:(id)fp8;
- (void)appendButtonTapped:(id)fp8;
- (id)tableView:(id)fp8 willSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)viewDidUnload;
- (void)viewDidLoad;

@end
