//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "VerifyPhoneDelegate-Protocol.h"

@class WCAccountBindPhoneControlLogic;

@protocol WCAccountBindPhoneControlLogicDelegate <NSObject, VerifyPhoneDelegate>

@optional
- (void)onWCAccountBindPhoneControlLogicCheckOK:(WCAccountBindPhoneControlLogic *)arg1;
- (void)onWCAccountBindPhoneControlLogicStop:(WCAccountBindPhoneControlLogic *)arg1;
@end

