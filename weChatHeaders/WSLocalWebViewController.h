//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "HandleHaokanActionExt.h"
#import "ITopStoryPluginMsgExt.h"
#import "IWebSearchRedPointMgrExt.h"
#import "MMKernelExt.h"
#import "MMWebSearchViewDelegate.h"
#import "WSWebRecommendTabsViewDelegate.h"

@class MMUILabel, MMUIScrollView, MMWebSearchController, NSDictionary, NSString, UIButton, UIImageView, UILongPressGestureRecognizer, UIView, WCStatTimerHelper, WSDotLoadingView, WSWebRecommendTabsView;

@interface WSLocalWebViewController : MMUIViewController <MMWebSearchViewDelegate, ITopStoryPluginMsgExt, IWebSearchRedPointMgrExt, HandleHaokanActionExt, MMKernelExt, WSWebRecommendTabsViewDelegate>
{
    int _scene;
    MMWebSearchController *_webSearchController;
    WCStatTimerHelper *_pageTimeHelper;
    _Bool m_bShouldForcedRotationToPortrait;
    long long _orientation;
    struct CGRect _videoFrame;
    _Bool _hasInitContainerView;
    _Bool _hasFirstWebviewJsbridgeReady;
    _Bool _hasSendOnUiInitEvent;
    _Bool _hasDisplayedView;
    unsigned long long _beginPreloadTime;
    long long _contentInsetAdjustmentBehavior;
    long long _currentIndex;
    long long _currentCategory;
    NSString *_lastExposeNumReddotId;
    NSString *_lastExposeContentReddotId;
    NSString *_lastExposeRecommendReddotId;
    _Bool _needExposeWhenUpdate;
    MMUIScrollView *_retryContainerView;
    UIImageView *_retryIcon;
    MMUILabel *_retryLabel;
    UIButton *_retryButton;
    MMUIScrollView *_loadingContainerView;
    UIImageView *_headView;
    WSDotLoadingView *_WSDotLoadingView;
    WSWebRecommendTabsView *_tabContainer;
    UIView *_navShadowView;
    UILongPressGestureRecognizer *_debugGesture;
    UILongPressGestureRecognizer *_debugGesture2;
    _Bool _shouldForbidCache;
    _Bool _bForbidNavigationItems;
    _Bool _bForbidNavigationTabs;
    int _VCType;
    unsigned long long _businessType;
    NSString *_contentTitle;
    NSDictionary *_tabsInfo;
    id <WSLocalWebViewControllerDelegate> _delegate;
    NSString *_redDotMsgId;
    unsigned long long _navigationBarStyle;
    NSString *_nsInitExtText;
    unsigned long long _enterTime;
}

@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) NSString *nsInitExtText; // @synthesize nsInitExtText=_nsInitExtText;
@property(nonatomic) _Bool bForbidNavigationTabs; // @synthesize bForbidNavigationTabs=_bForbidNavigationTabs;
@property(nonatomic) _Bool bForbidNavigationItems; // @synthesize bForbidNavigationItems=_bForbidNavigationItems;
@property(nonatomic) unsigned long long navigationBarStyle; // @synthesize navigationBarStyle=_navigationBarStyle;
@property(retain, nonatomic) NSString *redDotMsgId; // @synthesize redDotMsgId=_redDotMsgId;
@property(readonly, nonatomic) _Bool shouldForbidCache; // @synthesize shouldForbidCache=_shouldForbidCache;
@property(nonatomic) int VCType; // @synthesize VCType=_VCType;
@property(nonatomic) __weak id <WSLocalWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *tabsInfo; // @synthesize tabsInfo=_tabsInfo;
@property(retain, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
- (void).cxx_destruct;
- (void)handleOpenProfileWithParams:(id)arg1;
- (void)handleUpdateNumReddotWithParams:(id)arg1;
- (void)handleHaokanActionWithClientData:(id)arg1 serverData:(id)arg2;
- (void)onWebRecommendNotifyMsgToJs:(id)arg1;
- (void)onWebRecommendReddotNotifyToJs:(id)arg1;
- (void)onWebRecommendNumRedPointChange:(id)arg1;
- (void)onRequestSetCommontEnd:(id)arg1 requestOpType:(unsigned int)arg2;
- (void)onRequestPostCommentEnd:(id)arg1;
- (void)startForcedRotation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onOpenProfileWithOpenId:(id)arg1;
- (void)onHideNavBarShadow:(id)arg1;
- (void)onShowNavBarShadow:(id)arg1;
- (void)onQueryCommCgi:(id)arg1;
- (void)onFetchReddot:(id)arg1;
- (void)onUpdateNumReddot:(id)arg1;
- (void)onFetchNumReddot:(id)arg1;
- (void)onPostComments:(id)arg1;
- (void)onSetComments:(id)arg1;
- (void)onOpenProfilePage:(id)arg1;
- (void)onControllerWillBeginDetailSearch:(id)arg1;
- (void)onSearchBackToPreviousView;
- (void)onSearchLaunchNextViewWithBizType:(unsigned long long)arg1;
- (void)onWebPageActive:(id)arg1;
- (void)onJsbridgeReady:(id)arg1;
- (void)didFinishLoadWebView:(id)arg1;
- (void)onWebViewTerminal:(id)arg1;
- (void)onTryForbidCacheVcWhenWebviewCauseError:(id)arg1;
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 video:(id)arg3;
- (void)windowHide:(id)arg1;
- (double)webSearchViewPosY;
- (void)stopLoadingAnimation;
- (void)handleLoadingTimeout;
- (void)startLoadingAnimation;
- (void)layoutAnimatingView;
- (void)tryInitAnimatingView;
- (void)onClickWebViewReload:(id)arg1;
- (void)initRetryView;
- (void)showRetryTips;
- (id)fetchTabNeededParamsWith:(id)arg1;
- (long long)fetchNeedShowWebRecommendContentReddot;
- (id)fetchWebRecommendLatestNumReddotMsgId;
- (long long)fetchWebRecommendNumReddotCount;
- (void)handleTabSelected:(long long)arg1 tabItemInfo:(id)arg2 byClicked:(_Bool)arg3;
- (void)hideNavBarShadow:(id)arg1;
- (void)manuallyHideNavShadowView;
- (void)showNavBarShadow:(id)arg1;
- (void)initWebView;
- (void)updateTitleViewWithTitle:(id)arg1;
- (void)updateExposeReddot;
- (void)updateTabContainer;
- (void)judgeCurrentTabIndexWithTabList:(id)arg1;
- (_Bool)initNavTabsWith:(id)arg1;
- (void)initTitleView;
- (void)onOpenWebSearch:(id)arg1;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)onLongPressView:(id)arg1;
- (void)setNavigationRightItemHidden:(_Bool)arg1;
- (void)setNavigationBarTabHidden:(_Bool)arg1;
- (void)initNavigationBar;
- (void)reloadNavigationBar;
- (void)onWSLocalWebViewReturn;
- (void)willDisappear;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)trySendNewIntentEvent;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)reportTabReddotExpose;
- (void)viewDidLoad;
- (void)tryInitContainerView;
- (_Bool)tryParallelAsyncWebRecommend:(unsigned long long)arg1 reddotMsgId:(id)arg2;
- (_Bool)hasFirstWebviewJsbridgeReady;
- (void)preInitContainerView;
@property(readonly, copy) NSString *description;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)initWebSearchController;
- (id)initWithScene:(int)arg1;
- (id)currentResultView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

