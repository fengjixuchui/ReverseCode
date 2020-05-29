//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBaseContact.h"

#import "WCTTableCoding.h"

@class EnterpriseRoomData, NSString;

@interface CEnterpriseContact : CBaseContact <WCTTableCoding>
{
    _Bool m_bHeadImageUpdateFlag;
    _Bool m_bUpdateFlag;
    unsigned int m_uiUserFlag;
    unsigned int m_uiContactType;
    NSString *m_nsContactDisplayName;
    unsigned long long m_uiContactVer;
    NSString *m_nsProfileJumpUrl;
    NSString *m_nsAddMemberUrl;
    EnterpriseRoomData *m_oRoomData;
    NSString *m_nsBrandUserName;
}

+ (id)contactFromBizChatUser:(id)arg1 brandUserName:(id)arg2;
+ (void)__wcdb_CEnterpriseContact_primary_15:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_bUpdateFlag;
+ (void)__wcdb_CEnterpriseContact_synthesize_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_uiDraftTime;
+ (void)__wcdb_CEnterpriseContact_synthesize_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_nsDraft;
+ (void)__wcdb_CEnterpriseContact_synthesize_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_nsAtUserList;
+ (void)__wcdb_CEnterpriseContact_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_nsBrandUserName;
+ (void)__wcdb_CEnterpriseContact_synthesize_10:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_bHeadImageUpdateFlag;
+ (void)__wcdb_CEnterpriseContact_synthesize_9:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_oRoomData;
+ (void)__wcdb_CEnterpriseContact_synthesize_8:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_uiContactType;
+ (void)__wcdb_CEnterpriseContact_synthesize_7:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_uiUserFlag;
+ (void)__wcdb_CEnterpriseContact_synthesize_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_nsAddMemberUrl;
+ (void)__wcdb_CEnterpriseContact_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_nsHeadHDImgUrl;
+ (void)__wcdb_CEnterpriseContact_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_nsProfileJumpUrl;
+ (void)__wcdb_CEnterpriseContact_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_uiContactVer;
+ (void)__wcdb_CEnterpriseContact_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_nsContactDisplayName;
+ (void)__wcdb_CEnterpriseContact_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)m_nsUsrName;
+ (void)__wcdb_CEnterpriseContact_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) _Bool m_bUpdateFlag; // @synthesize m_bUpdateFlag;
@property(retain, nonatomic) NSString *m_nsBrandUserName; // @synthesize m_nsBrandUserName;
@property(nonatomic) _Bool m_bHeadImageUpdateFlag; // @synthesize m_bHeadImageUpdateFlag;
@property(retain, nonatomic) EnterpriseRoomData *m_oRoomData; // @synthesize m_oRoomData;
@property(nonatomic) unsigned int m_uiContactType; // @synthesize m_uiContactType;
@property(nonatomic) unsigned int m_uiUserFlag; // @synthesize m_uiUserFlag;
@property(retain, nonatomic) NSString *m_nsAddMemberUrl; // @synthesize m_nsAddMemberUrl;
@property(retain, nonatomic) NSString *m_nsProfileJumpUrl; // @synthesize m_nsProfileJumpUrl;
@property(nonatomic) unsigned long long m_uiContactVer; // @synthesize m_uiContactVer;
@property(retain, nonatomic) NSString *m_nsContactDisplayName; // @synthesize m_nsContactDisplayName;
- (void).cxx_destruct;
- (_Bool)isContactTop;
- (_Bool)isFavorite;
- (_Bool)isSelf;
- (_Bool)isChatStatusNotifyOpen;
- (_Bool)isChatroom;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;
@property(retain, nonatomic) NSString *m_nsAtUserList;
@property(retain, nonatomic) NSString *m_nsDraft;
@property(retain, nonatomic) NSString *m_nsHeadHDImgUrl;
@property(retain, nonatomic) NSString *m_nsUsrName;
@property(nonatomic) unsigned int m_uiDraftTime;

@end

