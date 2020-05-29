//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CContact, NSArray, NSMutableArray, NSString;

@protocol MemberDataLogicProtocol

@optional
- (NSMutableArray *)filtContactsByName:(NSArray *)arg1;
- (NSMutableArray *)getFilteredContacts;
- (void)cancelSearch;
- (void)doSearch:(NSString *)arg1;
- (NSArray *)getAllContacts;
- (CContact *)getItemInSection:(unsigned long long)arg1 atRow:(unsigned long long)arg2;
- (unsigned long long)getSectionItemCount:(unsigned long long)arg1;
- (NSString *)getKeyAtSection:(unsigned long long)arg1;
- (NSArray *)getKeyArray;
- (unsigned long long)getSectionCount;
- (unsigned long long)getTotalCount;
- (_Bool)removeContact:(CContact *)arg1;
- (void)reloadMemberList:(NSArray *)arg1;
- (void)sortKeys;
- (void)addContact:(CContact *)arg1;
@end

