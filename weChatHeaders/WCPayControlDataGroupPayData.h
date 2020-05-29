//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AALaunchByPersonRes, AAOperationRes, AAPayRes, AAQueryDetailRes, CContact, NSArray, NSString;

@interface WCPayControlDataGroupPayData : NSObject
{
    int _moneyConfirmMsgSeq;
    CContact *_chatroomContact;
    NSArray *_launchSelectedContacts;
    NSArray *_launchIgnoreContacts;
    unsigned long long _selectMemberSource;
    NSString *_orderBillNum;
    unsigned long long _fromScene;
    unsigned long long _launchScene;
    NSString *_outTradeNum;
    NSString *_launcherUsername;
    NSString *_payerUsername;
    long long _presetAmount;
    NSString *_presetTheme;
    AAOperationRes *_groupPaySvrConfigData;
    AALaunchByPersonRes *_activityAAResponse;
    AAQueryDetailRes *_aaOrderDetailResponse;
    AAPayRes *_orderPrepayResponse;
}

@property(retain, nonatomic) AAPayRes *orderPrepayResponse; // @synthesize orderPrepayResponse=_orderPrepayResponse;
@property(retain, nonatomic) AAQueryDetailRes *aaOrderDetailResponse; // @synthesize aaOrderDetailResponse=_aaOrderDetailResponse;
@property(retain, nonatomic) AALaunchByPersonRes *activityAAResponse; // @synthesize activityAAResponse=_activityAAResponse;
@property(retain, nonatomic) AAOperationRes *groupPaySvrConfigData; // @synthesize groupPaySvrConfigData=_groupPaySvrConfigData;
@property(retain, nonatomic) NSString *presetTheme; // @synthesize presetTheme=_presetTheme;
@property(nonatomic) long long presetAmount; // @synthesize presetAmount=_presetAmount;
@property(nonatomic) int moneyConfirmMsgSeq; // @synthesize moneyConfirmMsgSeq=_moneyConfirmMsgSeq;
@property(retain, nonatomic) NSString *payerUsername; // @synthesize payerUsername=_payerUsername;
@property(retain, nonatomic) NSString *launcherUsername; // @synthesize launcherUsername=_launcherUsername;
@property(retain, nonatomic) NSString *outTradeNum; // @synthesize outTradeNum=_outTradeNum;
@property(nonatomic) unsigned long long launchScene; // @synthesize launchScene=_launchScene;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSString *orderBillNum; // @synthesize orderBillNum=_orderBillNum;
@property(nonatomic) unsigned long long selectMemberSource; // @synthesize selectMemberSource=_selectMemberSource;
@property(retain, nonatomic) NSArray *launchIgnoreContacts; // @synthesize launchIgnoreContacts=_launchIgnoreContacts;
@property(retain, nonatomic) NSArray *launchSelectedContacts; // @synthesize launchSelectedContacts=_launchSelectedContacts;
@property(retain, nonatomic) CContact *chatroomContact; // @synthesize chatroomContact=_chatroomContact;
- (void).cxx_destruct;

@end

