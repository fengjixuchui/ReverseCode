//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseTenPayCgi.h"

@class NSString;

@interface WCPayOfflineCancelPayCgi : WCPayBaseTenPayCgi
{
    unsigned int _payChannel;
    id <WCPayOfflineCancelPayCgiDelegate> _cgiDelegate;
    NSString *_req_Key;
}

@property(nonatomic) unsigned int payChannel; // @synthesize payChannel=_payChannel;
@property(retain, nonatomic) NSString *req_Key; // @synthesize req_Key=_req_Key;
@property(nonatomic) __weak id <WCPayOfflineCancelPayCgiDelegate> cgiDelegate; // @synthesize cgiDelegate=_cgiDelegate;
- (void).cxx_destruct;
- (void)callErrorDelegate;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)startRequest;
- (id)init;

@end

