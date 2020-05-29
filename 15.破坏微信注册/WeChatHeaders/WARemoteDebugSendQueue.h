//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray;
@protocol WARemoteDebugSendQueueDelegate;

@interface WARemoteDebugSendQueue : NSObject
{
    double _sendTimestamp;
    CADisplayLink *_sendTimer;
    unsigned int _sendSeq;
    unsigned int _prevSendSeq;
    NSMutableArray *_msgQueue;
    NSMutableArray *_pkgQueue;
    unsigned int _resendCountForSvrBlock;
    unsigned int _resendCountForSvrError;
    _Bool _sendoutImmediately;
    id <WARemoteDebugSendQueueDelegate> _delegate;
}

+ (id)generateUUID;
@property(nonatomic) _Bool sendoutImmediately; // @synthesize sendoutImmediately=_sendoutImmediately;
@property(nonatomic) __weak id <WARemoteDebugSendQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)destorySendTimer;
- (void)initSendTimer;
- (unsigned int)getIntervalSendCount;
- (void)updatePrintInfo;
- (void)sendOrResendPkg;
- (void)resendTryAgain;
- (void)handleSendDebugMsgResp:(id)arg1 uuid:(id)arg2;
- (void)msgQueue2PkgQueue;
- (void)handleQueue;
- (void)sendDebugMsgList:(id)arg1;
- (id)init;
- (void)dealloc;

@end

