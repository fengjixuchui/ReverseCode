//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayOverseaGetTransferNameResponse : NSObject
{
    unsigned int _uiSetAmount;
    int _iCurrencyType;
    NSString *_nsReceiveUsrName;
    NSString *_nsReceiveNickName;
    NSString *_nsReceiveTruthName;
    NSString *_nsFixAmountReceiveDesc;
    unsigned long long _uiFixedAmountReceiveTotalMoney;
    NSString *_nsCurrencyUnit;
    NSString *_nsQRCodeId;
    NSString *_nsNotice;
    NSString *_nsNoticeUrl;
}

+ (id)GenFromDictionary:(id)arg1;
@property(retain, nonatomic) NSString *nsNoticeUrl; // @synthesize nsNoticeUrl=_nsNoticeUrl;
@property(retain, nonatomic) NSString *nsNotice; // @synthesize nsNotice=_nsNotice;
@property(retain, nonatomic) NSString *nsQRCodeId; // @synthesize nsQRCodeId=_nsQRCodeId;
@property(retain, nonatomic) NSString *nsCurrencyUnit; // @synthesize nsCurrencyUnit=_nsCurrencyUnit;
@property(nonatomic) int iCurrencyType; // @synthesize iCurrencyType=_iCurrencyType;
@property(nonatomic) unsigned long long uiFixedAmountReceiveTotalMoney; // @synthesize uiFixedAmountReceiveTotalMoney=_uiFixedAmountReceiveTotalMoney;
@property(nonatomic) unsigned int uiSetAmount; // @synthesize uiSetAmount=_uiSetAmount;
@property(retain, nonatomic) NSString *nsFixAmountReceiveDesc; // @synthesize nsFixAmountReceiveDesc=_nsFixAmountReceiveDesc;
@property(retain, nonatomic) NSString *nsReceiveTruthName; // @synthesize nsReceiveTruthName=_nsReceiveTruthName;
@property(retain, nonatomic) NSString *nsReceiveNickName; // @synthesize nsReceiveNickName=_nsReceiveNickName;
@property(retain, nonatomic) NSString *nsReceiveUsrName; // @synthesize nsReceiveUsrName=_nsReceiveUsrName;
- (void).cxx_destruct;

@end

