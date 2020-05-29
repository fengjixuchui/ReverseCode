//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, OnClickPurchaseRes, OnClickRedeemRes, QryPurchaseResultRes, QryUsrFundDetailRes, RedeemFundRes;

@interface WCPayLQTControlData : NSObject
{
    unsigned int _lqtCurrentTransMoney;
    unsigned long long _lqtMoneyScene;
    QryUsrFundDetailRes *_userDetailFundResp;
    QryPurchaseResultRes *_qrypurchaseResultResp;
    OnClickRedeemRes *_clickRedeemResp;
    OnClickPurchaseRes *_clickPurchaseResp;
    RedeemFundRes *_redeemFundResp;
    NSString *_ecardtype;
    NSString *_extraData;
    long long _needOpenLqb;
}

@property(nonatomic) long long needOpenLqb; // @synthesize needOpenLqb=_needOpenLqb;
@property(retain, nonatomic) NSString *extraData; // @synthesize extraData=_extraData;
@property(retain, nonatomic) NSString *ecardtype; // @synthesize ecardtype=_ecardtype;
@property(retain, nonatomic) RedeemFundRes *redeemFundResp; // @synthesize redeemFundResp=_redeemFundResp;
@property(retain, nonatomic) OnClickPurchaseRes *clickPurchaseResp; // @synthesize clickPurchaseResp=_clickPurchaseResp;
@property(retain, nonatomic) OnClickRedeemRes *clickRedeemResp; // @synthesize clickRedeemResp=_clickRedeemResp;
@property(retain, nonatomic) QryPurchaseResultRes *qrypurchaseResultResp; // @synthesize qrypurchaseResultResp=_qrypurchaseResultResp;
@property(retain, nonatomic) QryUsrFundDetailRes *userDetailFundResp; // @synthesize userDetailFundResp=_userDetailFundResp;
@property(nonatomic) unsigned int lqtCurrentTransMoney; // @synthesize lqtCurrentTransMoney=_lqtCurrentTransMoney;
@property(nonatomic) unsigned long long lqtMoneyScene; // @synthesize lqtMoneyScene=_lqtMoneyScene;
- (void).cxx_destruct;
- (id)getCurrentAccountTypeName;

@end

