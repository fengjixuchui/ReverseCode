//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class CContact;
@protocol BrandServiceEnterConversationLogicDelegate;

@interface BrandServiceEnterConversationLogic : MMObject <PBMessageObserverDelegate>
{
    CContact *m_contact;
    id <BrandServiceEnterConversationLogicDelegate> _delegate;
    long long _subscene;
}

@property(nonatomic) long long subscene; // @synthesize subscene=_subscene;
@property(nonatomic) __weak id <BrandServiceEnterConversationLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void).cxx_destruct;
- (void)startReportExitConversationForContact;
- (id)getClickCommandMsgReportFromLastMsg:(id)arg1;
- (void)startReportEnterConversationForContact:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)init;
- (void)dealloc;

@end

