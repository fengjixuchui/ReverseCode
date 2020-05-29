//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "WCAccountLogoutLogicDelegate.h"
#import "WCAccountNoPwdAuthLogicDelegate.h"

@class NSString, WCAccountLogoutLogic;

@interface WCAccountSwitchLogic : WCAccountBaseControlLogic <WCAccountLogoutLogicDelegate, WCAccountNoPwdAuthLogicDelegate>
{
    WCAccountLogoutLogic *m_logoutLogic;
    id <WCAccountSwitchLogicDelegate> _delegate;
}

@property(nonatomic) __weak id <WCAccountSwitchLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onAccountLogoutLogicDidQuit;
- (void)onAccountLogoutLogicCheckOK;
- (void)onAccountLogoutLogicCancel;
- (void)onNoPwdAuthControlLogicDidCancel;
- (void)logoutCurrentAccount;
- (void)startLogic;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

