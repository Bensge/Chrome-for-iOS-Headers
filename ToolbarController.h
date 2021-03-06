/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

#import "ToolsPopupDelegate-Protocol.h"

@class UIButton, UIImageView;

@interface ToolbarController : _AudioQueueAllocateBuffer <ToolsPopupDelegate>
{
    UIButton *toolsMenuButton_;
    UIButton *stackButton_;
    int style_;
    struct scoped_nsobject<ToolsPopupController> toolsPopupController_;
    struct ObjCPropertyReleaser propertyReleaser_ToolbarController_;
    UIImageView *view_;
    UIImageView *backgroundView_;
}

- (void)setStackButton:(id)fp8;
- (id)stackButton;
- (void)setToolsMenuButton:(id)fp8;
- (id)toolsMenuButton;
- (int)style;
- (void)setBackgroundView:(id)fp8;
- (id)backgroundView;
- (void)setView:(id)fp8;
- (id)view;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dismissToolsMenuPopup:(id)fp8;
- (unsigned int)snapshotHash;
- (void)stackButtonTouchDown:(id)fp8;
- (void)recordUserMetrics:(id)fp8;
- (void)setTabCount:(int)fp8;
- (void)standardButtonPressed;
- (void)setStandardControlsTransform:(struct CGAffineTransform)fp8;
- (void)translateStandardControls:(struct UIOffset)fp8;
- (void)setStandardControlsVisible:(BOOL)fp8;
- (struct CGRect)specificControlsArea;
- (id)prefixForImageName:(id)fp8 style:(int)fp12;
- (void)swapNormalAndHighlightedImagesForToolsMenuButton;
- (void)dismissToolsMenuPopup;
- (void)showToolsMenuPopupInView:(id)fp8 withOptions:(unsigned int)fp12;
- (void)setUpButton:(id)fp8 withImageName:(id)fp12 hasDisabledImage:(BOOL)fp16;
- (void)applicationDidEnterBackground:(id)fp8;
- (id)toolsPopupController;
- (void)dealloc;
- (id)initWithStyle:(int)fp8;

@end

