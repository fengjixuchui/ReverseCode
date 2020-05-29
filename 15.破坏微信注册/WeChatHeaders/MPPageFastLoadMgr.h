//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class MPPageResourceDownloader, MPPageTemplateInfoContainer, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MPPageFastLoadMgr : MMService <PBMessageObserverDelegate, MMService>
{
    MPPageTemplateInfoContainer *_templateInfoContainer;
    unsigned int _lastCheckTemplateVersionTime;
    MPPageResourceDownloader *_templateDownloader;
    _Bool _isBatchReporting;
    _Bool _isClosePreloadWebViewBool;
    NSMutableDictionary *_preloadWebViewDic;
    NSMutableDictionary *_pageDataCacheItemDic;
    NSMutableArray *_pageDataWaitQueue;
    NSMutableDictionary *_pageDataRequestDic;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableDictionary *pageDataRequestDic; // @synthesize pageDataRequestDic=_pageDataRequestDic;
@property(retain, nonatomic) NSMutableArray *pageDataWaitQueue; // @synthesize pageDataWaitQueue=_pageDataWaitQueue;
@property(retain, nonatomic) NSMutableDictionary *pageDataCacheItemDic; // @synthesize pageDataCacheItemDic=_pageDataCacheItemDic;
@property(nonatomic) _Bool isClosePreloadWebViewBool; // @synthesize isClosePreloadWebViewBool=_isClosePreloadWebViewBool;
@property(retain, nonatomic) NSMutableDictionary *preloadWebViewDic; // @synthesize preloadWebViewDic=_preloadWebViewDic;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)pathOfLibraryDir;
- (id)pathOfCacheDir;
- (void)clearPreloadWebViewWithScene:(unsigned long long)arg1;
- (id)generatePreloadWebViewWithType:(unsigned int)arg1;
- (id)popPreloadWebViewWithType:(unsigned int)arg1;
- (void)preparePreloadWebViewWithType:(unsigned int)arg1;
- (void)setSwitchValue:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)loadSwitchValueWithKey:(id)arg1;
- (id)userDefaultKeyWithName:(id)arg1;
- (id)changeUrlSchemeToHttps:(id)arg1;
- (id)webViewControllerWithType:(unsigned int)arg1 url:(id)arg2 visibleViewController:(id)arg3 addExtraInfo:(id)arg4;
- (void)asyncPreparePreloadWebViewWithType:(unsigned int)arg1 afterDelay:(double)arg2;
- (unsigned int)templateTypeFromShowType:(unsigned int)arg1;
- (id)brandTimelineCheckTemplateTypeList;
- (unsigned int)templateTypeArticle;
- (void)reportWithId:(unsigned int)arg1 key:(unsigned long long)arg2 value:(unsigned int)arg3;
- (void)reportWithId:(unsigned int)arg1 key:(unsigned long long)arg2;
- (_Bool)isLowQualityNetworkCondition;
- (_Bool)isOpenMPPageFastLoad;
- (void)loadIsClosePreloadWebView;
- (void)setIsClosePreloadWebView:(_Bool)arg1;
- (_Bool)getIsClosePreloadWebView;
- (id)userDefaultKeyOfClosePreloadWebView;
- (void)onServiceClearData;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (_Bool)isPageDataFileExistWithUrl:(id)arg1;
- (id)pageDataFilePathWithUrl:(id)arg1;
- (id)pageDataFileDir;
- (void)addMPPageCacheItemList:(id)arg1;
- (id)getPageDataCacheItem:(id)arg1;
- (void)reportRequestPageDataWithContext:(id)arg1;
- (_Bool)saveResponsePageDataContentToDisk:(id)arg1 url:(id)arg2;
- (void)workQueue_processPageDataResponse:(id)arg1 withUrlToContentInfoDic:(id)arg2 context:(id)arg3;
- (void)workQueue_onResponsePageData:(id)arg1 userData:(id)arg2;
- (void)onResponsePageData:(id)arg1 userData:(id)arg2;
- (void)requestPageData:(id)arg1 scene:(unsigned long long)arg2;
- (void)checkPageDataWaitQueue;
- (void)addHeadOfPageDataWaitQueue:(id)arg1;
- (void)removeFromPageDataWaitQueueWithUrlList:(id)arg1;
- (id)urlListFromPageDataUrlInfoList:(id)arg1;
- (id)filterPageDataRequestUrlInfoList:(id)arg1;
- (void)changeToHttpsUrlInfoList:(id)arg1;
- (void)mainThread_updatePageDataWaitUrlInfoList:(id)arg1 forceUpdate:(_Bool)arg2;
- (id)workQueue_filterAndFillPageDataRequestUrlInfoList:(id)arg1 withTemplateTypeToVersionDictionary:(id)arg2;
- (id)getPageDataWithUrl:(id)arg1 templateVersion:(unsigned int)arg2;
- (unsigned int)getPageDataRequiredTemplateVersionWithUrl:(id)arg1;
- (id)getPageForceUrlWithUrl:(id)arg1;
- (void)directUpdatePageData:(id)arg1 withTemplateVersion:(unsigned int)arg2;
- (void)priorityUpdatePageData:(id)arg1;
- (void)onServiceReloadDataWithCategoryPageData;
- (void)onServiceInitWithCategoryPageData;
- (void)onResponseAppMsgReport:(id)arg1 context:(id)arg2;
- (_Bool)requestReportItemWithContext:(id)arg1;
- (_Bool)batchReportItemList:(id)arg1;
- (void)tryBatchReportItems;
- (void)reportLoadPageWithUrl:(id)arg1 a8keyScene:(unsigned int)arg2 enterScene:(unsigned int)arg3 enterSubscene:(unsigned int)arg4 sessionId:(id)arg5;
- (void)reportTemplateDownloadWithType:(unsigned int)arg1 record:(id)arg2;
- (void)onResponseTemplateFile:(id)arg1 error:(id)arg2 templateInfo:(id)arg3 record:(id)arg4;
- (void)requestTemplateFileWithTemplateInfo:(id)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3 url:(id)arg4 md5:(id)arg5 header:(id)arg6;
- (void)setupTemplateDownloader;
- (id)dirPathOfTemplateDownload;
- (void)clearInvalidTemplateDonwloadedFile;
- (_Bool)isTemplateFileValidWithType:(unsigned int)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3;
- (id)pathOfTemplateFileWithType:(unsigned int)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3;
- (id)pathOfTemplateDirWithType:(unsigned int)arg1;
- (id)pathOfTemplateStoreDir;
- (_Bool)isResponseTemplateInfoValid:(id)arg1;
- (void)onResponseCheckTemplateVersion:(id)arg1;
- (void)requestCheckTemplateVersionWityTypeList:(id)arg1;
- (id)templateTypeToVersionDictionary;
- (unsigned int)tempalteVersionForInitWebViewWithType:(unsigned int)arg1 andGetFullVersion:(id *)arg2;
- (unsigned int)minValidTemplateVersionWithType:(unsigned int)arg1;
- (void)clearInvalidTemplateDownloadedRecord;
- (void)saveTemplateInfo;
- (void)loadTemplateInfo;
- (id)pathOfTemplateInfo;
- (void)setupTemplateInfo;
- (id)pageFrameContentWithType:(unsigned int)arg1 version:(unsigned int)arg2 fullVersion:(id)arg3;
- (void)updateTemplateFromServerWityTypeList:(id)arg1;
- (unsigned int)templateReportIdWithType:(unsigned int)arg1;
- (void)onServiceReloadDataWithCategoryTemplateDownoad;
- (void)onServiceInitWithCategoryTemplateDownload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

