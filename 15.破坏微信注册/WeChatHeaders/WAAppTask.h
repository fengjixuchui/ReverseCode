//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMTipsViewControllerDelegate-Protocol.h"
#import "WAAppTansitionControllerDelegate-Protocol.h"
#import "WAAppTaskLoaderDelegate-Protocol.h"
#import "WABackgroundFetchExt-Protocol.h"
#import "WAContactMgrExtension-Protocol.h"
#import "WAJSCoreServiceDelegate-Protocol.h"
#import "WAJavaScriptContextExtension-Protocol.h"
#import "WAPermissionHandlerDelegate-Protocol.h"
#import "WAWebViewDelegate-Protocol.h"

@class CContact, MMTimer, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString, WAAppOpenParameter, WAAppTansitionController, WAAppTaskExtInfo, WAAppTaskLoader, WAAppTaskReferrerInfo, WAAppTaskRunningStateEnterBackgroundContext, WAAppTaskShowFromBackgroundContext, WAIpadAdaptLogic, WAJSCoreService, WAPackageConfig, WAPermissionHandler, WARemoteDebugger, WAWebViewController, WAWebViewPageMgr, WxaExternalInfo;
@protocol WAAppTaskDelegate;

@interface WAAppTask : NSObject <WAAppTansitionControllerDelegate, WAJavaScriptContextExtension, WAAppTaskLoaderDelegate, WAWebViewDelegate, WAJSCoreServiceDelegate, WAPermissionHandlerDelegate, MMTipsViewControllerDelegate, WAContactMgrExtension, WABackgroundFetchExt>
{
    NSString *_appID;
    WAAppTaskReferrerInfo *_backToWeAppReferrerInfo;
    CContact *_contact;
    WAPackageConfig *_packageConfig;
    NSString *_relativeURL;
    unsigned int _debugModeType;
    NSDictionary *_dicExtraInfo;
    WAAppTaskShowFromBackgroundContext *_showFromBackgroundContext;
    _Bool _isDebugAndVConsoleOpen;
    WxaExternalInfo *_wxaExternalInfo;
    NSMutableDictionary *_dicTabWebView;
    WAWebViewController *_preloadWebView;
    WAJSCoreService *_appService;
    WARemoteDebugger *_remoteDebugger;
    WAAppTaskReferrerInfo *_referrerInfo;
    _Bool _isSimulatedNativeWeApp;
    NSString *_lastLaunchNativcePageString;
    _Bool _isBackgroundOnLaunchNativePage;
    double _beginOpenTime;
    WAWebViewController *_curAppRouteWebView;
    WAWebViewController *_currentAppRouteDoneWebView;
    _Bool _isPopParent;
    _Bool _isPopAllParent;
    _Bool _isEnableClose;
    _Bool _isWebViewAppear;
    _Bool _isAlreadyLaunchOpenURL;
    _Bool _isAlreadyLaunchAlertMsg;
    _Bool _isEnterforegroundReload;
    unsigned int _webViewMaxDepth;
    unsigned int _actualWebviewDepth;
    unsigned int _backgroundTaskMaxTimeout;
    NSString *_refererHost;
    unsigned int _lifeSpanBeforeSuspend;
    unsigned int _lifeSpanAfterSuspend;
    _Bool _bIsAlreadyCloseAppByTerminal;
    _Bool _resetTaskWhenEnterForeground;
    _Bool _bIsNeedShowUserGuide;
    MMTimer *_suspendTimer;
    _Bool _isSuspendTimerWorking;
    NSString *_topBarText;
    unsigned long long _weixinAppPlatformState;
    unsigned long long _taskPlatformState;
    unsigned long long _runningState;
    NSRecursiveLock *_lock;
    _Bool _isRecording;
    _Bool _isLivePushing;
    _Bool _isLivePlaying;
    _Bool _isVideoPlaying;
    NSArray *_arrPageStackPaths;
    NSMutableSet *_setLoadedModuleName;
    _Bool _isGameAppOrientationPortrait;
    NSMutableArray *_arrPrivacy;
    WAAppTansitionController *_appTransitionController;
    _Bool _bIsUpdatingPkg;
    _Bool _bIsNextLaunchNeedRelaunch;
    WAIpadAdaptLogic *_ipadAdaptLogic;
    _Bool _bShowMaskWindowAboveWebviewForIpad;
    long long _reportPerformanceInterval;
    long long _initMemory;
    _Bool _isGameApp;
    _Bool _backgroundMusic;
    unsigned int _timeEnterBackground;
    unsigned int _launchScene;
    unsigned int _enterScene;
    unsigned int _originScene;
    id <WAAppTaskDelegate> delegate;
    NSString *_enterPath;
    WAAppTaskExtInfo *_taskExtInfo;
    WAAppOpenParameter *_taskOpenInfo;
    double _openTaskTime;
    NSString *_instanceId;
    WAAppTaskLoader *_forceReloadAppLoader;
    NSMutableArray *_arrAppServiewCacheEventData;
    WAAppTaskLoader *_appLoader;
    WAPermissionHandler *_permissionHandler;
    WAAppTaskRunningStateEnterBackgroundContext *_enterBackgroundContext;
    WAWebViewPageMgr *_pageMgr;
}

+ (id)rootPresentingViewControllerWithViewController:(id)arg1;
+ (id)appIDListFromViewController:(id)arg1;
+ (id)topNavigationControllerOnMainWindow;
+ (id)appIdWithWeAppNavigationController:(id)arg1;
@property(retain, nonatomic) WAWebViewPageMgr *pageMgr; // @synthesize pageMgr=_pageMgr;
@property(retain) WAAppTaskRunningStateEnterBackgroundContext *enterBackgroundContext; // @synthesize enterBackgroundContext=_enterBackgroundContext;
@property(retain) WAPermissionHandler *permissionHandler; // @synthesize permissionHandler=_permissionHandler;
@property(retain, nonatomic) WAAppTaskLoader *appLoader; // @synthesize appLoader=_appLoader;
@property(retain, nonatomic) NSMutableArray *arrAppServiewCacheEventData; // @synthesize arrAppServiewCacheEventData=_arrAppServiewCacheEventData;
@property(retain, nonatomic) WAAppTaskLoader *forceReloadAppLoader; // @synthesize forceReloadAppLoader=_forceReloadAppLoader;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(nonatomic) double openTaskTime; // @synthesize openTaskTime=_openTaskTime;
@property(readonly, nonatomic) WAJSCoreService *appService; // @synthesize appService=_appService;
@property(retain, nonatomic) WAAppOpenParameter *taskOpenInfo; // @synthesize taskOpenInfo=_taskOpenInfo;
@property(retain, nonatomic) WAAppTaskExtInfo *taskExtInfo; // @synthesize taskExtInfo=_taskExtInfo;
@property(retain, nonatomic) NSString *enterPath; // @synthesize enterPath=_enterPath;
@property(nonatomic) unsigned int originScene; // @synthesize originScene=_originScene;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;
@property(nonatomic) unsigned int launchScene; // @synthesize launchScene=_launchScene;
@property(nonatomic) _Bool backgroundMusic; // @synthesize backgroundMusic=_backgroundMusic;
@property(nonatomic) unsigned int timeEnterBackground; // @synthesize timeEnterBackground=_timeEnterBackground;
@property(nonatomic) _Bool isGameApp; // @synthesize isGameApp=_isGameApp;
@property(nonatomic) __weak id <WAAppTaskDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)reportPerformanceInfo;
- (void)initPerformanceReport;
- (void)onBackgroundFetchDataReturn:(id)arg1 FetchType:(id)arg2 FetchData:(id)arg3 FetchRequestParam:(id)arg4;
- (id)currentTaskFirstWebView;
- (id)getFileData:(id)arg1;
- (void)sendMemoryWarningEvent;
- (void)forceRelaunchWithContact:(id)arg1;
- (void)actionAfterAsyncUpdateContactCallBackType:(unsigned long long)arg1 withContact:(id)arg2;
- (void)onModifyWeAppContact:(id)arg1;
- (void)onUpdateWeAppContactSuccess:(id)arg1;
- (void)onUpdateWeAppContactFailedWithKey:(id)arg1 type:(unsigned long long)arg2 errMsg:(id)arg3;
- (void)sendJSEventWhenServiceWasReady:(long long)arg1 param:(id)arg2 webviewID:(unsigned long long)arg3;
- (void)onJSInjected:(id)arg1;
- (_Bool)isModuleLoadedWithName:(id)arg1;
- (void)addLoadedModuleName:(id)arg1;
- (_Bool)isInnerAudioPlaying;
- (_Bool)isWeAppWindowResizableForIpad;
- (long long)getContentModeFromAppJson:(id)arg1;
- (long long)privacyMenuState;
- (id)privacyTitle;
- (void)unregisterPrivacy:(unsigned long long)arg1;
- (void)registerPrivacy:(unsigned long long)arg1;
- (_Bool)isVideoPlaying;
- (void)setVideoPlayingState:(_Bool)arg1;
- (_Bool)isLivePlaying;
- (void)setLivePlayingState:(_Bool)arg1;
- (_Bool)isLivePushing;
- (void)setLivePusherState:(_Bool)arg1;
- (_Bool)isRecording;
- (void)setRecordState:(_Bool)arg1;
- (void)taskDidKickedOutMusicPlayerByOtherSource:(id)arg1;
- (_Bool)canKeepAliveByAudioPlayForReleaseMode;
- (_Bool)canKeeyAliveByAudioPlayForAllDebugMode;
- (_Bool)canKeepAliveByAudioPlay;
- (void)taskDidKickedOutFromHangUpModeByOtherWeAppId:(id)arg1;
- (void)taskDidResignHangUpMode;
- (void)taskDidEnterHangUpMode;
- (_Bool)isHangedUp;
- (void)markEnterBackgroundOnLaunchNativePage:(id)arg1 isWebPage:(_Bool)arg2;
- (void)reportEnterForegroundIfBackFromNativePage;
- (void)reportEnterForeground;
- (id)getTaskBrandLogoUrl;
- (void)setTopBarText:(id)arg1;
- (id)getTopBarText;
- (void)processWillTriggerSuspendTimer;
- (void)updateStorage;
- (void)triggerSuspendTimer:(id)arg1;
- (void)invalidateSuspendStatusTimer;
- (void)scheduleSuspendStatusTimer;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)showTipsViewWithTitle:(id)arg1 content:(id)arg2 tipsTag:(long long)arg3 delegate:(id)arg4;
- (void)closeTaskAndAlertMsg:(id)arg1 title:(id)arg2;
- (void)closeTaskAndJumpToURL:(id)arg1;
- (void)removeSelfBackToChatStateIfHave;
- (void)checkLaunchAction;
- (id)getExtraInfo:(id)arg1 remove:(_Bool)arg2;
- (void)addExtraInfo:(id)arg1 forKey:(id)arg2;
- (void)onLaunchPermissionInfoUpdate;
- (void)onUserAuthFailWithJSAPI:(id)arg1 failHandler:(CDUnknownBlockType)arg2 errMsg:(id)arg3 scene:(unsigned long long)arg4;
- (void)onUserAuthOKWithJSAPI:(id)arg1 handler:(CDUnknownBlockType)arg2 scene:(unsigned long long)arg3;
- (void)printConsoleLog:(id)arg1;
- (id)GetWeAppPluginByName:(id)arg1;
- (void)resetTask;
- (void)closeTask;
- (void)taskDidOpen;
- (_Bool)isTaskRunning;
- (unsigned long long)getEnterBackgroundReasonByEvent:(id)arg1;
- (void)onTaskRunningStateDidChangeTo:(unsigned long long)arg1 byEvent:(id)arg2;
- (void)onTaskRunningStateWillChangeTo:(unsigned long long)arg1 byEvent:(id)arg2;
- (unsigned long long)getTaskRunningStatus;
- (void)checkAndScheduleSuspendTimerIfNeeded;
- (void)updateRunningState:(unsigned long long)arg1 byEvent:(id)arg2;
- (void)suspendReceiveEvent:(id)arg1;
- (void)backgroundReceiveEvent:(id)arg1;
- (void)foregroundReceiveEvent:(id)arg1;
- (void)initStateReceiveEvent:(id)arg1;
- (void)notifyEvent:(id)arg1;
- (id)genUniqueResourceTakeOverEventWithType:(unsigned long long)arg1;
- (id)genCloseTaskEvent;
- (id)genBackgroundCheckEvent;
- (id)genSuspendTimerEvent;
- (id)genStateChangedEventWithPlatformType:(unsigned long long)arg1 direction:(unsigned long long)arg2 reason:(unsigned int)arg3;
- (void)setTaskPlatformState:(unsigned long long)arg1 reason:(unsigned int)arg2;
- (void)setWeixinAppPlatformState:(unsigned long long)arg1 reason:(unsigned int)arg2;
- (void)enterForegroundIfNeed;
- (_Bool)isFirstWebViewOnForeground;
- (void)enterBackgroundOnJumpOtherWeApp:(id)arg1;
- (void)enterBackgroundOnOpenH5Page:(id)arg1;
- (void)enterBackgroundOnOpenNativePage:(id)arg1;
- (void)checkForegound;
- (_Bool)getIsForeground;
- (void)taskEnterBackground:(long long)arg1;
- (void)taskEnterForeground;
- (void)onSystemEnterForeground;
- (void)onSystemEnterBackground;
- (void)mainThreadTriggerStrictBanMode:(id)arg1;
- (void)triggerStrictBanMode:(id)arg1;
- (void)checkUserAuthWithJSAPI:(id)arg1 handler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3 fromAppService:(id)arg4;
- (id)getPermissionDict;
- (id)getPermissionResultWithJSAPI:(id)arg1 fromAppService:(id)arg2 byTempPermission:(id)arg3;
- (id)getPermissionResultWithJSAPI:(id)arg1 byTempPermission:(id)arg2;
- (void)setAppServiceCurrentWebView:(id)arg1;
- (void)appServiceSendOnEnterBackground:(long long)arg1;
- (void)appServiceSendOnEnterForeground:(id)arg1 isFromSystemAwake:(_Bool)arg2;
- (id)getStrForOpenType:(unsigned long long)arg1 webviewID:(unsigned long long)arg2;
- (void)logAppRoutePerformance:(long long)arg1 time:(unsigned int)arg2;
- (_Bool)reportPerformance;
- (void)logAppRouteAction:(unsigned long long)arg1 webviewID:(unsigned long long)arg2;
- (void)sendOnAppRouteDoneWithWebView:(id)arg1;
- (void)sendAppRouteEventFromWebView:(id)arg1 openType:(unsigned long long)arg2;
- (void)setupAppServiceWithContact:(id)arg1 extraInfo:(id)arg2 preloadedAppService:(id)arg3;
- (void)clearAppService;
- (void)webviewNeedDismissSlientlyBelowMaskViewOnIpad:(id)arg1;
- (void)webviewUpdateMaskViewForIpad:(id)arg1;
- (void)webviewDidShow404ErrorView:(id)arg1;
- (void)remoteNetworkRequest:(id)arg1 taskID:(id)arg2 header:(id)arg3;
- (void)remoteDomEvent:(id)arg1 webViewID:(unsigned int)arg2;
- (_Bool)isIgnoreRemoteCheckDomain;
- (_Bool)isRemoteDebugMode;
- (void)webviewDidResize:(id)arg1;
- (void)triggerTaskRouteToHomePage:(id)arg1;
- (void)routeToHomePageWhenWebViewDidAppearWithNewSessionInfo:(id)arg1;
- (void)webViewInjectScriptFail:(id)arg1;
- (void)webViewOnPageReload:(id)arg1 withRouteInfo:(id)arg2;
- (void)reloadTerminatedWebViewIfNeeded;
- (void)webViewDidTerminateInContentProcess:(id)arg1;
- (_Bool)isPreloadCacheWebview:(id)arg1;
- (_Bool)isTopShowWebviewTerminate:(id)arg1;
- (void)reportWKWebViewTerminateAction:(id)arg1 closeAction:(unsigned long long)arg2;
- (void)sendJSEventToService:(id)arg1 param:(id)arg2 fromWebView:(id)arg3;
- (void)publishPostMessage:(id)arg1 fromWebView:(id)arg2;
- (_Bool)checkWebViewRunMode:(id)arg1;
- (_Bool)checkServiceRunInMainThread:(id)arg1;
- (_Bool)checkServiceRunMode:(id)arg1;
- (_Bool)hasPermissionToShowActionSheetMenuType:(unsigned int)arg1;
- (void)checkUserAuthWithJSAPI:(id)arg1 handler:(CDUnknownBlockType)arg2 failHandler:(CDUnknownBlockType)arg3 fromWebView:(id)arg4;
- (_Bool)isJsApiPermissionAutoGrantedInWebViewEnvironment:(id)arg1;
- (id)getPermissionResultWithJSAPI:(id)arg1 fromWebView:(id)arg2 byTempPermission:(id)arg3;
- (id)getPermissionResultWithJSAPI:(id)arg1;
- (unsigned long long)getWebViewDepthInStack;
- (id)getLastWebViewFrom:(id)arg1;
- (id)getFirstWebViewFrom:(id)arg1;
- (_Bool)webViewIsSameDepthWithFirstPage:(id)arg1;
- (_Bool)webViewIsFirstPage:(id)arg1;
- (void)firstPageWebViewDidSweepBack:(id)arg1;
- (void)checkShowFirstQuitEducation;
- (void)webViewClickExitButton:(id)arg1;
- (void)webViewBeforeClickReturnButton:(id)arg1;
- (void)makeWebViewEnableClose:(_Bool)arg1;
- (_Bool)isForceEnableClose;
- (void)killAppFrom:(id)arg1 animate:(_Bool)arg2;
- (void)enterBackgroundFrom:(id)arg1 mode:(long long)arg2 animate:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)enterBackgroundAndDismissPages:(_Bool)arg1;
- (id)popWebViewCount:(int)arg1 fromWebView:(id)arg2;
- (void)popToFirstWebViewFrom:(id)arg1 animated:(_Bool)arg2;
- (void)webViewDidSwitchTab:(id)arg1;
- (id)getPreviousWebViewFromWebView:(id)arg1;
- (id)getTabChildWebViewWithRelativeURL:(id)arg1 fromWebView:(id)arg2;
- (void)webViewOnBeforeEveluateIndexData:(id)arg1;
- (void)processPushOrPresentAViewController:(id)arg1;
- (void)webView:(id)arg1 didPresent:(id)arg2;
- (void)webViewDidPush:(id)arg1;
- (void)webViewDidBeDismissed:(id)arg1;
- (void)webViewDidBePoped:(id)arg1;
- (void)webViewDidDisappear:(id)arg1;
- (void)webViewDidAppear:(id)arg1;
- (id)getAndDeletePreLoadWebView;
- (void)setupPreloadWebViewFromWebView:(id)arg1;
- (void)updateAllWebView;
- (id)generateExtraInfoWithAppID:(id)arg1 Contact:(id)arg2;
- (id)getTabChildWebViewWithRelativeURL:(id)arg1 fromParentWebView:(id)arg2;
- (id)getChildWebViewWithRelativeURL:(id)arg1 childExtraInfo:(id)arg2 fromParentWebView:(id)arg3;
- (id)getNewWebViewControllerWithContact:(id)arg1 appID:(id)arg2 baseURL:(id)arg3 pageRelativeURL:(id)arg4 webviewId:(unsigned int)arg5 preloadedWebview:(id)arg6;
- (void)clearTabWebView;
- (void)removeTabWebViewWithParentWebView:(id)arg1;
- (void)addTabWebView:(id)arg1 parentWebView:(id)arg2;
- (void)_removeAllParentWebViewFromChild:(id)arg1 andGetRemovedWebView:(id *)arg2;
- (void)clearAndPopAllWebViewIgnoreTab;
- (void)checkBackgroundStatus;
- (void)leaveWebView:(id)arg1;
- (void)removeWebView:(id)arg1;
- (void)addWebView:(id)arg1;
- (void)closePresentedViewController;
- (void)dismissTaskPage:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeWebViewFromNavigationController:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendUIEventAfterShowFromBackground:(id)arg1;
- (void)showWebViewFromBackground:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned int)webViewDepth;
- (_Bool)loadPackageConfigWithContact:(id)arg1 getError:(id *)arg2;
- (_Bool)loadAppConfig:(id)arg1;
- (void)setupAppConfig;
- (id)getIgnoreOtherWebViewListOnReloadFirstPage;
- (void)removeAllParentWebViewFromChild:(id)arg1 andGetRemovedWebView:(id *)arg2;
- (void)removeParentWebView:(id)arg1;
- (void)removeChildWebView:(id)arg1 fromParentWebView:(id)arg2;
- (void)getChildWebView:(id *)arg1 withRelativeURL:(id)arg2 childExtraInfo:(id)arg3 fromParentWebView:(id)arg4;
- (void)setupAppServiceAndWebViewWithAppID:(id)arg1 contact:(id)arg2 packageConfig:(id)arg3 baseURL:(id)arg4 pageRelativeURL:(id)arg5 getWebView:(id *)arg6;
- (void)setupTaskForSpecificPageMode;
- (void)onDidPresentWithPresentingViewController:(id)arg1;
- (id)permissionLaunchParamenterFromTaskExtInfo:(id)arg1;
- (id)popAppLoader;
- (_Bool)isLoading;
- (void)notifyStickyChange:(_Bool)arg1;
- (id)getNavigationController;
- (id)getWebViewByID:(unsigned long long)arg1;
- (id)getCurrentWebView;
- (id)getFirstWebView;
- (id)getWebViewListInNavigation;
- (id)getAllWebViews;
- (void)sendJSEventToWebView:(id)arg1 param:(id)arg2 toWebviews:(id)arg3;
- (unsigned int)actualWebViewMaxDepth;
- (_Bool)isReachMaxWebViewDepth;
- (void)openChildWebViewWithRelativeURL:(id)arg1 childExtraInfo:(id)arg2 fromParent:(id)arg3 isPopParent:(_Bool)arg4 isPopAllParent:(_Bool)arg5 errorHandler:(CDUnknownBlockType)arg6;
- (void)openFirstWebViewWithRelativeURL:(id)arg1 childExtraInfo:(id)arg2 loaderContextData:(id)arg3 navigationController:(id)arg4 errorHandler:(CDUnknownBlockType)arg5 successHandler:(CDUnknownBlockType)arg6;
- (void)openChildWebViewWithRelativeURL:(id)arg1 childExtraInfo:(id)arg2 fromParent:(id)arg3 isPopAllParent:(_Bool)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (void)openChildWebViewWithRelativeURL:(id)arg1 childExtraInfo:(id)arg2 fromParent:(id)arg3 isPopParent:(_Bool)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (_Bool)checkSceneIsNeedRedirectPage:(unsigned int)arg1;
- (void)openWithContact:(id)arg1 openInfo:(id)arg2 taskExtInfo:(id)arg3 errorHandler:(CDUnknownBlockType)arg4 successHandler:(CDUnknownBlockType)arg5;
- (void)recoverTask;
- (_Bool)checkCurrentPageIdentical:(id)arg1 webView:(id)arg2;
- (id)currentExtInfo;
- (unsigned int)backgroundTaskMaxTimeout;
- (_Bool)isFirstWebViewInNavigator;
- (_Bool)isForeground;
- (_Bool)isShowOnForeground;
- (unsigned long long)webViewInNavigationCount;
- (id)getTaskExtInfo;
- (id)getTaskOpenInfo;
- (unsigned int)debugModeType;
- (id)currentAppInfo;
- (id)relativeURL;
- (id)contact;
- (id)appID;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 debugModeType:(unsigned int)arg2;
- (id)wifiPlugin;
- (void)handleWeAppHotspotCommand:(id)arg1;
- (_Bool)isRegisterForHandleWeAppHotspotCommand;
- (id)navigationControllerDismissingViewController:(id)arg1;
- (id)navigatoinControllerListWithViewController:(id)arg1;
- (id)previousNavigationControllerFromNavigationController:(id)arg1;
- (void)checkChangeNavigationControllerBeforeDismiss:(id *)arg1;
- (void)enterBackgroundWithDismissAppIDList:(id)arg1;
- (void)processSelfPresentedStateOnOpen:(id *)arg1;
- (void)dismissMyselfAndPresentedTasks;
- (void)setBackWeAppReferrerInfo:(id)arg1;
- (void)checkRemovedJumpInfoBackgroundStatus:(id)arg1;
- (void)removeJumpWeAppListAndCheckBackgroundStatus;
- (void)passJumpBackRefererInfoAndRemoveJumpRelation:(id)arg1 privateExtraData:(id)arg2;
- (void)passJumpBackRefererInfoAndRemoveJumpRelation:(id)arg1;
- (void)navigateBackWeApp:(id)arg1 privateExtraData:(id)arg2 fromWebView:(id)arg3;
- (void)consoleLog:(id)arg1 isSendout:(_Bool)arg2;
- (void)dismissMaskView;
- (void)showMaskView:(id)arg1 isButtonHidden:(_Bool)arg2;
@property(copy, nonatomic) NSString *serverString; // @dynamic serverString;
@property(copy, nonatomic) NSString *connectString; // @dynamic connectString;
@property(nonatomic) unsigned int recvCount; // @dynamic recvCount;
@property(copy, nonatomic) NSString *recvLength; // @dynamic recvLength;
@property(nonatomic) unsigned int sendCount; // @dynamic sendCount;
@property(copy, nonatomic) NSString *sendLength; // @dynamic sendLength;
@property(nonatomic) unsigned int noSendCount; // @dynamic noSendCount;
@property(nonatomic) unsigned int noConfirmedCount; // @dynamic noConfirmedCount;
@property(nonatomic) _Bool isDisplay; // @dynamic isDisplay;
- (void)doRelaunchAction;
- (void)forceRelaunchTaskWithFakeLoading;
- (void)setFakeWindowVC:(id)arg1;
- (id)fakeWindowVC;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

