//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "scrollViewDelegate-Protocol.h"

@class MMPageControl, MMScrollView, NSString, UIImageView;
@protocol whatsnewViewDelegateEx;

@interface WhatsnewViewController : MMUIViewController <UIScrollViewDelegate, scrollViewDelegate>
{
    id <whatsnewViewDelegateEx> m_delegate;
    MMScrollView *m_scrollView;
    unsigned long long m_uiCurrentPage;
    MMPageControl *m_pageControl;
    UIImageView *m_btnImageView;
    _Bool _m_showWithAnimation;
}

@property(nonatomic) _Bool m_showWithAnimation; // @synthesize m_showWithAnimation=_m_showWithAnimation;
@property(nonatomic) __weak id <whatsnewViewDelegateEx> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)unhighlightBtn;
- (void)highlightBtn;
- (void)initPages;
- (void)initScrollView;
- (void)initPageCtrl;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)touchesBegan_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved_ScrollView:(id)arg1 withEvent:(id)arg2;
- (_Bool)fixPageControl;
- (void)nextPage:(id)arg1;
- (void)enterWechat;
- (void)stopShowWhatsNew;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

