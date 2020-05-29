//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WAMsgNodeRequestMgr : MMService <PBMessageObserverDelegate, MMService>
{
    NSMutableDictionary *_appIdToReqDataList;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onAuthorizeConfirmResponse:(id)arg1 forRequest:(id)arg2 userInfo:(id)arg3;
- (void)onAuthorizeResponse:(id)arg1 forRequest:(id)arg2 userInfo:(id)arg3;
- (void)confirmAuthRequestWithAppID:(id)arg1 debugMode:(unsigned long long)arg2 scope:(id)arg3 userInfo:(id)arg4;
- (void)authorizeRequestWithAppID:(id)arg1 debugMode:(unsigned long long)arg2 scope:(id)arg3 userInfo:(id)arg4;
- (void)callExtByAppId:(id)arg1 md5:(id)arg2 respData:(id)arg3 nextReqTime:(unsigned int)arg4;
- (void)performCallExt:(id)arg1;
- (void)delayCallExt:(id)arg1 md5:(id)arg2;
- (void)doReportWithBeginTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 respLength:(unsigned long long)arg3;
- (void)internalSenddRequest:(id)arg1 md5:(id)arg2 data:(id)arg3 scene:(unsigned int)arg4 coreId:(unsigned int)arg5 debugMode:(unsigned long long)arg6 userInfo:(id)arg7;
- (void)sendRequest:(id)arg1 data:(id)arg2 scene:(unsigned int)arg3 shouldUseCache:(_Bool)arg4 coreId:(unsigned int)arg5 debugMode:(unsigned long long)arg6 userInfo:(id)arg7;
- (id)getCallbackIdWithAppId:(id)arg1 data:(id)arg2;
- (void)saveLocalCache:(id)arg1 scene:(unsigned int)arg2;
- (void)loadLocalCache:(id)arg1 scene:(unsigned int)arg2;
- (void)onServiceReloadData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

