//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ILinkEventExt.h"
#import "IUiUtilExt.h"
#import "MMScrollActionSheetIconViewDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class MMUILabel, NSArray, NSMutableArray, NSString, RichTextView, UIButton, UIViewController;

@interface MMScrollActionSheet : UIView <MMScrollActionSheetIconViewDelegate, IUiUtilExt, UIScrollViewDelegate, UIPopoverPresentationControllerDelegate, ILinkEventExt>
{
    unsigned long long _rowCount;
    NSArray *_dataAry;
    NSString *_description;
    NSString *_subdescription;
    NSString *_cancelTitle;
    NSArray *_bottomBtnDataAry;
    UIViewController *_popoverControllerNew;
    _Bool _isShowed;
    double _layoutOffsetY;
    double _layoutWidth;
    id <MMScrollActionSheetDelegate> _delegate;
    UIView *_transparentView;
    UIView *_containerView;
    MMUILabel *_titleLabel;
    RichTextView *_subtitleLabel;
    UIButton *_cancelButton;
    NSMutableArray *_rowScrollViewArray;
    NSMutableArray *_seperatorViewArray;
    NSMutableArray *_bottomButtonArray;
    NSMutableArray *_bottomSeperatorArray;
}

@property(retain, nonatomic) NSMutableArray *bottomSeperatorArray; // @synthesize bottomSeperatorArray=_bottomSeperatorArray;
@property(retain, nonatomic) NSMutableArray *bottomButtonArray; // @synthesize bottomButtonArray=_bottomButtonArray;
@property(retain, nonatomic) NSMutableArray *seperatorViewArray; // @synthesize seperatorViewArray=_seperatorViewArray;
@property(retain, nonatomic) NSMutableArray *rowScrollViewArray; // @synthesize rowScrollViewArray=_rowScrollViewArray;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) RichTextView *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *transparentView; // @synthesize transparentView=_transparentView;
@property(nonatomic) __weak id <MMScrollActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)relayoutElements:(_Bool)arg1;
- (void)_reloadCustomItems:(id)arg1 desciption:(id)arg2 subDesciption:(id)arg3 cancelButtonTitle:(id)arg4 bottomBtnDataAry:(id)arg5 animated:(_Bool)arg6;
- (void)reloadCustomItems:(id)arg1 desciption:(id)arg2 subDesciption:(id)arg3 cancelButtonTitle:(id)arg4 bottomBtnDataAry:(id)arg5 animated:(_Bool)arg6;
- (id)customItems;
- (void)dismissAnimated:(_Bool)arg1;
- (void)showInView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)onMainWindowFrameChanged;
- (void)handleTap:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)onCustomBtnClicked:(id)arg1;
- (void)onCancelBtnClicked;
- (void)onActionSheetIconView:(id)arg1 didTapedWithItem:(id)arg2;
- (void)fixContainerPosition;
- (void)fixLayoutWithSafeArea;
- (void)setupCancelButtonIfNeeded:(_Bool)arg1;
- (void)setupBottomButtonsIfNeeded:(_Bool)arg1;
- (void)setupScrollViews:(_Bool)arg1;
- (void)setupTitleIfNeeded:(_Bool)arg1;
- (void)setupContainerViewIfNeeded;
- (void)setupTransparentViewIfNeeded;
- (id)getSubtitleLinks;
- (void)dealloc;
- (id)initWithItemsAndBtnDataAry:(id)arg1 desciption:(id)arg2 subDesciption:(id)arg3 cancelButtonTitle:(id)arg4 bottomBtnDataAry:(id)arg5;
- (id)initWithItemsAndBtnDataAry:(id)arg1 desciption:(id)arg2 cancelButtonTitle:(id)arg3 bottomBtnDataAry:(id)arg4;
- (id)initWithItems:(id)arg1 desciption:(id)arg2 cancelButtonTitle:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

