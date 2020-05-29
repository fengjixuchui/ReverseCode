//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString, WCPayTradeFavInfo;

@interface WCPayCouponsLogicMgr : MMService <MMService>
{
    _Bool _bIsUserClickConfirmInCouponList;
    WCPayTradeFavInfo *_wcPayTradeFavInfo;
    NSMutableDictionary *_dicFavorItemInComponseInfo;
}

@property(nonatomic) _Bool bIsUserClickConfirmInCouponList; // @synthesize bIsUserClickConfirmInCouponList=_bIsUserClickConfirmInCouponList;
@property(retain, nonatomic) NSMutableDictionary *dicFavorItemInComponseInfo; // @synthesize dicFavorItemInComponseInfo=_dicFavorItemInComponseInfo;
@property(retain, nonatomic) WCPayTradeFavInfo *wcPayTradeFavInfo; // @synthesize wcPayTradeFavInfo=_wcPayTradeFavInfo;
- (void).cxx_destruct;
- (id)getOrderConfirmViewShowBindSerialBankFavDescListWithBindSerial:(id)arg1;
- (void)setBankFavReddotHasShow;
- (_Bool)hasShowBankFavRedDotInOrderConfirmView;
- (_Bool)shouldShowBankFavorRedDotWithCardList:(id)arg1 currentBindSerial:(id)arg2;
- (id)getNewBindCardFavorDescList;
- (id)getBindSerialBankFavorDescListWithBindSerial:(id)arg1;
- (id)getFilterTradeFavListWithBindCardArray:(id)arg1;
- (id)deselectTradeFavItem:(id)arg1;
- (id)selectTradeFavItem:(id)arg1;
- (_Bool)shouldShowMoreFavEnteranceWithBindCardArray:(id)arg1;
- (_Bool)shouldShowFavEnteranceWithBindCardArray:(id)arg1;
- (unsigned long long)getSelectedFavComposeInfoShowFavAmount;
- (unsigned long long)getSelectedFavComposeInfoInvariableFavAmount;
- (void)setCouponsListViewUserHasClickConfirm:(_Bool)arg1;
- (void)calcDefaultComposeInfoForSelectCardIfNeed:(id)arg1;
- (_Bool)isFreePaymentTradeFavInfo;
- (id)getBankFavorItemAndCouponsInfo;
- (id)getWCPayTradeFavInfo;
- (void)clearSelectedBankFavAndReCalculateBankFavorInfo;
- (id)autoAdjustCouponsInfoForSelectedCard:(id)arg1;
- (id)resetComposeInfo:(id)arg1;
- (void)resetTradeFavInfo:(id)arg1;
- (void)autoChangeTradeFavorItemStatusToAdjustConpons;
- (void)onServiceClearData;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

