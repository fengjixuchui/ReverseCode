//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "WCTTableCoding-Protocol.h"

@class MultiTalkMemberList, NSString;

@interface MultiTalkContactItem : MMObject <WCTTableCoding>
{
    _Bool isAutoIncrement;
    unsigned int localID;
    int routID;
    unsigned int memberListCount;
    NSString *groupID;
    NSString *clientGroupID;
    NSString *wxGroupID;
    MultiTalkMemberList *contactMemberList;
    NSString *createUserName;
    NSString *nickName;
    long long lastInsertedRowID;
}

+ (void)__wcdb_MultiTalkContactItem_primary_19:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)memberListCount;
+ (void)__wcdb_MultiTalkContactItem_synthesize_18:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)nickName;
+ (void)__wcdb_MultiTalkContactItem_synthesize_17:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)createUserName;
+ (void)__wcdb_MultiTalkContactItem_synthesize_16:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)contactMemberList;
+ (void)__wcdb_MultiTalkContactItem_synthesize_15:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)routID;
+ (void)__wcdb_MultiTalkContactItem_synthesize_14:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)wxGroupID;
+ (void)__wcdb_MultiTalkContactItem_synthesize_13:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)clientGroupID;
+ (void)__wcdb_MultiTalkContactItem_synthesize_12:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)groupID;
+ (void)__wcdb_MultiTalkContactItem_synthesize_11:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)localID;
+ (void)__wcdb_MultiTalkContactItem_synthesize_10:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
@property(nonatomic) unsigned int memberListCount; // @synthesize memberListCount;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(retain, nonatomic) NSString *createUserName; // @synthesize createUserName;
@property(retain, nonatomic) MultiTalkMemberList *contactMemberList; // @synthesize contactMemberList;
@property(nonatomic) int routID; // @synthesize routID;
@property(retain, nonatomic) NSString *wxGroupID; // @synthesize wxGroupID;
@property(retain, nonatomic) NSString *clientGroupID; // @synthesize clientGroupID;
@property(retain, nonatomic) NSString *groupID; // @synthesize groupID;
@property(nonatomic) unsigned int localID; // @synthesize localID;
- (void).cxx_destruct;
- (id)description;
- (_Bool)checkHasActiveMember;
- (_Bool)isContactItemValid;
- (id)getContactDisplayName;
- (void)dealloc;

@end

