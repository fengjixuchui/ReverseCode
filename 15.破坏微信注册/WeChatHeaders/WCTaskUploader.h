//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "IFavoritesExt-Protocol.h"
#import "WCDataUploaderDelegate-Protocol.h"
#import "WCMediaUploaderDelegate-Protocol.h"

@class NSMutableSet, NSString, WCUploadTask, WCUploader;
@protocol WCTaskUploaderDelegate;

@interface WCTaskUploader : MMObject <WCMediaUploaderDelegate, WCDataUploaderDelegate, IFavoritesExt>
{
    WCUploadTask *_uploadTask;
    WCUploader *_uploader;
    NSMutableSet *_runnedSubTask;
    int _runningState;
    id <WCTaskUploaderDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)OnAddFavoritesItem:(id)arg1 ErrCode:(int)arg2;
- (void)onDataUploadFinished:(id)arg1 uploadResult:(int)arg2 uploadErrType:(int)arg3 uploadErrMsg:(id)arg4;
- (void)onMediaUploadFinished:(id)arg1 uploadResult:(int)arg2 uploadErrType:(int)arg3;
- (void)dealloc;
- (void)setStop;
- (void)run;
- (id)initWithTask:(id)arg1 withDelegate:(id)arg2;
- (void)tryStartNextTask;
- (void)handleError;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

