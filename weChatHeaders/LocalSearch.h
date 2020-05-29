//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LocalSearch : NSObject
{
}

+ (void)SortContacts:(id)arg1 dicMatchTip:(id)arg2 dicSessionTime:(id)arg3;
+ (id)searchGroupMembers:(id)arg1 sourceMembers:(id)arg2 groupContact:(id)arg3 dicCheckList:(id)arg4 dicMatchTip:(id)arg5 helpDataItem:(id)arg6;
+ (id)searchFromMiniGameItem:(id)arg1 withSearchText:(id)arg2 dicMatchTip:(id)arg3 helpDataItem:(id)arg4;
+ (id)ftsMsgSearchMemberTalkerInGroupContact:(id)arg1 groupContact:(id)arg2 dicMatchTip:(id)arg3 helpDataItem:(id)arg4;
+ (_Bool)ftsMsgSearchHasTalkerContact:(id)arg1 arrContact:(id)arg2;
+ (id)ftsMsgSearchTalkerContact:(id)arg1 arrContact:(id)arg2 dicMatchTip:(id)arg3 helpDataItem:(id)arg4;
+ (void)multiKeywordFastSearch:(id)arg1 allContact:(id)arg2 helpDataItem:(id)arg3;
+ (id)searchGroupContacts:(id)arg1 strictByGroupMember:(id)arg2;
+ (id)getMatchWordTip:(id)arg1 withContact:(id)arg2;
+ (id)searchContactsByName:(id)arg1 allContact:(id)arg2 limit:(int)arg3;
+ (id)searchFromWCGameItem:(id)arg1 withSearchText:(id)arg2 dicMatchTip:(id)arg3 helpDataItem:(id)arg4;
+ (id)searchFromWCGameItem:(id)arg1 withSearchText:(id)arg2;
+ (id)searchFromFeatureItem:(id)arg1 allFeatureItem:(id)arg2 dicMatchTip:(id)arg3;
+ (id)searchFromContacts:(id)arg1 allContact:(id)arg2;
+ (_Bool)isMatchChatRoom:(id)arg1 usrName:(id)arg2 MemberCount:(unsigned int *)arg3 CheckList:(id)arg4;
+ (_Bool)isMatchObject:(id)arg1 object:(id)arg2;
+ (id)searchFromContacts:(id)arg1 allContact:(id)arg2 dicAddressBook:(id)arg3 dicCheckList:(id)arg4 dicMatchTip:(id)arg5 helpDataItem:(id)arg6;
+ (id)searchFromGroupContacts:(id)arg1 allContact:(id)arg2 dicAddressBook:(id)arg3 dicCheckList:(id)arg4 dicMatchTip:(id)arg5 helpDataItem:(id)arg6;
+ (_Bool)isMatchChatRoomWithoutMySelf:(id)arg1 groupContact:(id)arg2 MemberCount:(unsigned int *)arg3 targetInfo:(id)arg4 dicAddressBook:(id)arg5 CheckList:(id)arg6 matchTips:(id)arg7 helpDataItem:(id)arg8;
+ (_Bool)isMultiMatchChatRoomWithoutMySelf:(id)arg1 groupContact:(id)arg2 MemberCount:(unsigned int *)arg3 dicAddressBook:(id)arg4 CheckList:(id)arg5 matchTips:(id)arg6 helpDataItem:(id)arg7;
+ (id)getChatRoomMember:(id)arg1 helpDataItem:(id)arg2 ignoreSelf:(_Bool)arg3;
+ (id)getChatRoomMemberWithoutMyself:(id)arg1 helpDataItem:(id)arg2;
+ (id)tryMatchFullPinYin:(id)arg1 fullPinYin:(id)arg2 targetText:(id)arg3 searchText:(id)arg4 matchTypeConfig:(id)arg5 matchKey:(id)arg6 dicPinYin:(id)arg7;
+ (id)tryMatchShortPinYin:(id)arg1 shortPinYin:(id)arg2 targetText:(id)arg3 searchText:(id)arg4 matchTypeConfig:(id)arg5 matchKey:(id)arg6 dicPinYin:(id)arg7;
+ (id)tryMatchObject:(id)arg1 targetText:(id)arg2 searchItem:(id)arg3 matchTypeConfig:(id)arg4 matchKey:(id)arg5;
+ (id)tryMatchObject:(id)arg1 targetText:(id)arg2 searchText:(id)arg3 matchTypeConfig:(id)arg4 matchKey:(id)arg5;
+ (_Bool)isMatchObject:(id)arg1 object:(id)arg2 dicAddressBook:(id)arg3 matchTips:(id)arg4 helpDataItem:(id)arg5;
+ (_Bool)isMultiMatchObject:(id)arg1 object:(id)arg2 dicAddressBook:(id)arg3 matchTips:(id)arg4 helpDataItem:(id)arg5 extRule:(int)arg6 classInfo:(id)arg7;
+ (_Bool)isMultiMatchObject:(id)arg1 object:(id)arg2 dicAddressBook:(id)arg3 matchTips:(id)arg4 helpDataItem:(id)arg5 extRule:(int)arg6;
+ (_Bool)isMultiMatchObject:(id)arg1 object:(id)arg2 dicAddressBook:(id)arg3 matchTips:(id)arg4 helpDataItem:(id)arg5;
+ (_Bool)isMultiMatchText:(id)arg1 searchItem:(id)arg2 matchInfo:(id)arg3;
+ (_Bool)isMatchText:(id)arg1 searchText:(id)arg2 regexMode:(_Bool)arg3 matchInfo:(id)arg4;
+ (id)makeSearchItemFromQuery:(id)arg1;
+ (id)getValidKeywords:(id)arg1;
+ (void)initialize;

@end

