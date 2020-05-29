//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "IRsaCertMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class MMTimer, NSMutableArray, NSString;
@protocol UploadVoicePrintMgrDelegate;

@interface UploadVoicePrintMgr : MMObject <PBMessageObserverDelegate, IRsaCertMgrExt>
{
    unsigned int _uploadType;
    unsigned int _curVoiceId;
    unsigned int _curResId;
    unsigned int _curScene;
    _Bool _isUploading;
    _Bool _isEnd;
    NSMutableArray *_uploadQueue;
    unsigned int _voiceTicket;
    unsigned int _cacheLastOffset;
    unsigned int _cacheLastlength;
    unsigned int _sameLoopCount;
    float _upload_per_time;
    id <UploadVoicePrintMgrDelegate> delegate;
    MMTimer *checkUploadQueueTimer;
    NSString *RsaVerifyTicket;
    NSString *RsaCreateTicket;
    NSString *_RsaVoiceKey;
}

@property(retain, nonatomic) NSString *RsaVoiceKey; // @synthesize RsaVoiceKey=_RsaVoiceKey;
@property(retain, nonatomic) NSString *RsaCreateTicket; // @synthesize RsaCreateTicket;
@property(retain, nonatomic) NSString *RsaVerifyTicket; // @synthesize RsaVerifyTicket;
@property(retain, nonatomic) MMTimer *checkUploadQueueTimer; // @synthesize checkUploadQueueTimer;
@property(nonatomic) id <UploadVoicePrintMgrDelegate> delegate; // @synthesize delegate;
@property(nonatomic) unsigned int curResId; // @synthesize curResId=_curResId;
- (void).cxx_destruct;
- (void)AddNewPart:(unsigned int)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4;
- (void)MainUpdateQueue:(id)arg1;
- (void)Stop;
- (void)Start:(unsigned int)arg1 UploadType:(unsigned int)arg2 withScene:(unsigned int)arg3 andResID:(unsigned int)arg4;
- (void)ResetVoiceTicket;
- (void)dealloc;
- (id)init;
- (void)doUpload:(unsigned int)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4;
- (void)checkUploadQueue;
- (void)stopUploadTaskWithErr:(int)arg1;
- (void)stopUploadTask;
- (void)clearTempFile;
- (void)RSAProtobufMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)cleanItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

