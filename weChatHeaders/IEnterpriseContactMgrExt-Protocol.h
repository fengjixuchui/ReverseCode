//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CEnterpriseContact, NSArray, NSString;

@protocol IEnterpriseContactMgrExt <NSObject>

@optional
- (void)onUpdateMyEnterpriseContact:(NSString *)arg1 errCode:(int)arg2;
- (void)onUpdateMyContactUserFlag:(NSString *)arg1 bitMask:(unsigned int)arg2 errCode:(int)arg3;
- (void)onModifyEnterpriseContactDraft:(CEnterpriseContact *)arg1;
- (void)onBatchModifyEnterpriseContact:(NSArray *)arg1;
- (void)onModifyEnterpriseContact:(CEnterpriseContact *)arg1;
@end

