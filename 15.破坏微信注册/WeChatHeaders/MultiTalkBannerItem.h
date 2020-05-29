//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface MultiTalkBannerItem : MMObject <WCTTableCoding>
{
    unsigned int roomid;
    unsigned int routeid;
    unsigned int createtime;
    unsigned int multiTalkStatus;
    NSString *wxGroupId;
    NSString *wxMultiTalkGroupId;
    unsigned long long roomkey;
    NSString *wxMultiTalkUserList;
    NSString *wxMultiTalkInviteNick;
}

+ (void)__wcdb_MultiTalkBannerItem_primary_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)multiTalkStatus;
+ (void)__wcdb_MultiTalkBannerItem_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)wxMultiTalkInviteNick;
+ (void)__wcdb_MultiTalkBannerItem_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)wxMultiTalkUserList;
+ (void)__wcdb_MultiTalkBannerItem_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createtime;
+ (void)__wcdb_MultiTalkBannerItem_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)routeid;
+ (void)__wcdb_MultiTalkBannerItem_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)roomkey;
+ (void)__wcdb_MultiTalkBannerItem_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)roomid;
+ (void)__wcdb_MultiTalkBannerItem_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)wxMultiTalkGroupId;
+ (void)__wcdb_MultiTalkBannerItem_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)wxGroupId;
+ (void)__wcdb_MultiTalkBannerItem_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) unsigned int multiTalkStatus; // @synthesize multiTalkStatus;
@property(retain, nonatomic) NSString *wxMultiTalkInviteNick; // @synthesize wxMultiTalkInviteNick;
@property(retain, nonatomic) NSString *wxMultiTalkUserList; // @synthesize wxMultiTalkUserList;
@property(nonatomic) unsigned int createtime; // @synthesize createtime;
@property(nonatomic) unsigned int routeid; // @synthesize routeid;
@property(nonatomic) unsigned long long roomkey; // @synthesize roomkey;
@property(nonatomic) unsigned int roomid; // @synthesize roomid;
@property(retain, nonatomic) NSString *wxMultiTalkGroupId; // @synthesize wxMultiTalkGroupId;
@property(retain, nonatomic) NSString *wxGroupId; // @synthesize wxGroupId;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isBannerItemValid;
- (void)dealloc;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

