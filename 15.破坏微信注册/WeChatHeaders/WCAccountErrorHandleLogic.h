//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "MMWebViewDelegate-Protocol.h"
#import "VoicePrintHandlerDelegate-Protocol.h"

@class MMUIViewController, NSDictionary, NSString, VoicePrintHandler;
@protocol WCAccountErrorHandleLogicDelegate;

@interface WCAccountErrorHandleLogic : MMObject <MMWebViewDelegate, VoicePrintHandlerDelegate>
{
    MMUIViewController *_currentViewController;
    _Bool _bFromReg;
    _Bool _bNeedGoNext;
    NSDictionary *_extParams;
    VoicePrintHandler *m_VPHandler;
    id <WCAccountErrorHandleLogicDelegate> _delegate;
}

@property(nonatomic) __weak id <WCAccountErrorHandleLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)OnClickCanNotUnLockBtn;
- (void)OnVerifySuccessful;
- (void)OnVerifyCancel;
- (void)webViewDidReturn:(id)arg1;
- (void)onWebViewCloseAndGoNext:(id)arg1;
- (void)onHandleErrorDone;
- (void)onHandleErrorCancel;
- (void)onErrorAction:(id)arg1;
- (void)openUrl:(id)arg1;
- (void)onVoicePrintAction:(id)arg1;
- (_Bool)onHandleError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

