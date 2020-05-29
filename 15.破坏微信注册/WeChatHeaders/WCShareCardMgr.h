//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "LocationRetrieveDelegate-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WCShareCardBatchGetMgrDelegate-Protocol.h"
#import "WCShareCardSyncMgrDelegate-Protocol.h"

@class CLLocation, LocationRetriever, NSArray, NSMutableDictionary, NSString, WCNewShareCardLayoutCache, WCShareCardBatchGetMgr, WCShareCardDB, WCShareCardSyncMgr;

@interface WCShareCardMgr : MMService <MMService, WCShareCardSyncMgrDelegate, WCShareCardBatchGetMgrDelegate, PBMessageObserverDelegate, LocationRetrieveDelegate, MMKernelExt>
{
    WCShareCardDB *_wcShareCardDB;
    WCShareCardSyncMgr *_wcShareCardSyncMgr;
    WCShareCardBatchGetMgr *_wcShareCardBatchGetMgr;
    LocationRetriever *_locationRetrieve;
    unsigned int _lastLocationTime;
    unsigned int uiLastMarkShareCardEventID;
    NSString *_curHomePageLayoutBuff;
    _Bool _bIsLocalCityLayoutEnd;
    _Bool _bIsOtherCityLayoutEnd;
    _Bool _bIsHomePageFirstPageData;
    NSMutableDictionary *_dicCardForMask;
    WCNewShareCardLayoutCache *_shareCardLayoutCache;
    NSArray *_arrNeedAnimtionCardData;
    CLLocation *_location;
}

@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSArray *arrNeedAnimtionCardData; // @synthesize arrNeedAnimtionCardData=_arrNeedAnimtionCardData;
- (void).cxx_destruct;
- (void)saveShareCardsToDB:(id)arg1;
- (_Bool)shouldResetLocation;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onBatchGetEnd:(unsigned int)arg1;
- (void)onBatchGetShareCardList:(id)arg1 ErrCode:(int)arg2;
- (void)onWCShareCardSyncEnd;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleOnGetHomePageLayoutResp:(id)arg1;
- (void)handleOnGetShareCardConsumedInfoResp:(id)arg1;
- (void)handleOnGetDelShareCardResp:(id)arg1;
- (void)handleOnGetShareCardItemResp:(id)arg1;
- (void)handleOnGetMarkShareCardResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleOnGetCommentShareCardResp:(id)arg1;
- (void)keepCachedDataFromOldCard:(id)arg1 toNewCard:(id)arg2;
- (void)handleOnGetShareCardResp:(id)arg1;
- (void)internalMarkShareCard:(id)arg1;
- (void)markShareCardByCardId:(id)arg1 mark:(_Bool)arg2 notify:(_Bool)arg3 scene:(int)arg4;
- (void)commentShareCard:(id)arg1 WithText:(id)arg2;
- (void)clearUselessShareCardFromDB;
- (void)deleteShareCardByCardIdFromDB:(id)arg1;
- (void)deleteShareCardByCardIdFromSvr:(id)arg1;
- (_Bool)getShareCardByCardTpIdFromDB:(id)arg1 andShareCardList:(id)arg2;
- (void)getShareCardFromSvr:(id)arg1;
- (id)getShareCardByCardIdFromDB:(id)arg1;
- (void)getFriendShareViewFirstPage:(id)arg1 CurMinUpdateTime:(unsigned int)arg2;
- (void)getFriendShareViewFirstPage:(id)arg1;
- (unsigned int)getShareCardCount:(id)arg1;
- (unsigned int)getValidShareCardCount:(id)arg1;
- (void)getShareCardNextPageByCurMinShareTime:(unsigned int)arg1;
- (void)getShareCardFirstPage;
- (void)shareCardConsumed:(id)arg1 fromScene:(unsigned int)arg2 withCode:(id)arg3;
- (void)doSync;
- (void)clearSyncKey;
- (unsigned int)getShareCardAvailableCount;
- (unsigned int)getShareCardCount;
- (void)tagCardHasBeenRed;
- (void)stopRetrieveLocation;
- (void)startRetrieveLocation;
- (void)searchShareCardByKey:(id)arg1;
- (void)getShareCardsHomePageLayoutInternal;
- (_Bool)getShareCardsHomePageLayoutMore;
- (void)getShareCardsHomePageLayout;
- (void)shareCardListToFriend:(id)arg1 consumedboxCardId:(id)arg2 visibleUserList:(id)arg3 invisibleUserList:(id)arg4 visibleTagIDList:(id)arg5 invisibleTagIDList:(id)arg6 staticScene:(int)arg7;
- (void)shareCardListToFriend:(id)arg1 staticScene:(int)arg2;
- (void)shareCardGetReward:(id)arg1 BrandUsername:(id)arg2 ConsumedBoxID:(id)arg3 visibleUserList:(id)arg4 invisibleUserList:(id)arg5 visibleTagIDList:(id)arg6 invisibleTagIDList:(id)arg7;
- (void)shareCardWithWhoCanSee:(id)arg1 visibleUserList:(id)arg2 invisibleUserList:(id)arg3 visibleTagIDList:(id)arg4 invisibleTagIDList:(id)arg5;
- (void)onAuthOK;
- (_Bool)needShowShareCardEntrance;
- (void)insertOrUpdateWCCard:(id)arg1;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (void)saveShareCardLayoutCacheWithLoacalList:(id)arg1 otherCityList:(id)arg2 cityName:(id)arg3 entryTip:(id)arg4 entryIcons:(id)arg5 entryShowRedDot:(_Bool)arg6 entryShowNew:(_Bool)arg7;
- (_Bool)hasShareCardLayoutCacheData;
- (_Bool)loadShareCardLayoutCache;
@property(readonly, nonatomic) WCNewShareCardLayoutCache *shareCardLayoutCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

