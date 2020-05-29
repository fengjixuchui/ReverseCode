//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKProductsRequestDelegate.h"

@class MidasIapMonitorPersistance, MidasIapOrderInfo, NSMutableArray, NSString;

@interface MidasIapCurrencyMonitor : NSObject <SKProductsRequestDelegate>
{
    NSMutableArray *_reqs;
    _Bool _foreground;
    MidasIapMonitorPersistance *_persistance;
    MidasIapOrderInfo *_orderInfo;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) MidasIapOrderInfo *orderInfo; // @synthesize orderInfo=_orderInfo;
@property(readonly, nonatomic) MidasIapMonitorPersistance *persistance; // @synthesize persistance=_persistance;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)checkNotify;
- (void)addCurrency:(id)arg1;
- (void)startReq;
- (void)onWillResignActive:(id)arg1;
- (void)onForceTerminate:(id)arg1;
- (void)onEnterForground:(id)arg1;
- (void)onEnterBackground:(id)arg1;
- (void)addOrderProduct:(id)arg1;
- (void)addOneRequest:(CDUnknownBlockType)arg1 selector:(SEL)arg2;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

