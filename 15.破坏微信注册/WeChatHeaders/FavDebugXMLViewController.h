//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt-Protocol.h"

@class FavoritesItem, NSString, RichTextView, UILabel, UIScrollView;

@interface FavDebugXMLViewController : MMUIViewController <ILinkEventExt>
{
    UIScrollView *m_scrollView;
    FavoritesItem *m_favItem;
    UILabel *m_syncLabel;
    UILabel *m_favIdLabel;
    RichTextView *m_textLabel;
    NSString *m_copyedText;
}

- (void).cxx_destruct;
- (void)showMenuItemForText:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onCopy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)onTextLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)initTextLabel;
- (void)initSyncLabel;
- (void)initFavIdLabel;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithFavItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

