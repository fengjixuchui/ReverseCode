//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface SessionActionItem : MMObject <PBCoding>
{
    _Bool bNotifyOpen;
    unsigned int uiEnterTime;
    unsigned int uiStayTime;
    unsigned int uiSessionType;
    unsigned int uiMemberCount;
    unsigned int uiUnreadCount;
    unsigned int uiStayWebViewTime;
    NSString *nsUserName;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *nsUserName; // @synthesize nsUserName;
@property(nonatomic) unsigned int uiStayWebViewTime; // @synthesize uiStayWebViewTime;
@property(nonatomic) unsigned int uiUnreadCount; // @synthesize uiUnreadCount;
@property(nonatomic) _Bool bNotifyOpen; // @synthesize bNotifyOpen;
@property(nonatomic) unsigned int uiMemberCount; // @synthesize uiMemberCount;
@property(nonatomic) unsigned int uiSessionType; // @synthesize uiSessionType;
@property(nonatomic) unsigned int uiStayTime; // @synthesize uiStayTime;
@property(nonatomic) unsigned int uiEnterTime; // @synthesize uiEnterTime;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

