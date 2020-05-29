//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseTenPayCgi.h"

@class NSString, TokeMess;

@interface WCPayGetZeroPayTokenCgi : WCPayBaseTenPayCgi
{
    unsigned int _use_touch;
    NSString *_password;
    TokeMess *_tokenMess;
    NSString *_fingerdata;
    id <WCPayGetZeroPayTokenCgiDelegate> _m_cgiDelegate;
}

@property(nonatomic) __weak id <WCPayGetZeroPayTokenCgiDelegate> m_cgiDelegate; // @synthesize m_cgiDelegate=_m_cgiDelegate;
@property(nonatomic) NSString *fingerdata; // @synthesize fingerdata=_fingerdata;
@property(nonatomic) unsigned int use_touch; // @synthesize use_touch=_use_touch;
@property(retain, nonatomic) TokeMess *tokenMess; // @synthesize tokenMess=_tokenMess;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)startRequest;
- (id)init;

@end

