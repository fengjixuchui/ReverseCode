//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CContact, EnterpriseBrandAttr, NSDictionary, NSString;

@protocol IEnterpriseBrandContactMgrExt

@optional
- (void)onEnterpriseBrandSyncToSvrCompleted:(NSString *)arg1 extParams:(NSDictionary *)arg2;
- (void)onEnterpriseBrandContactDeleted:(CContact *)arg1;
- (void)onEnterpriseBrandAttrChanged:(EnterpriseBrandAttr *)arg1;
- (void)onEnterpriseBrandContactChanged:(CContact *)arg1;
@end

