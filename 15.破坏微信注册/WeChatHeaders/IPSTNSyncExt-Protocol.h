//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol IPSTNSyncExt

@optional
- (void)OnGotDTMFPayloadType:(unsigned int)arg1;
- (void)OnGotRemoteStatus:(unsigned int)arg1 ErrNo:(int)arg2 ErrLevel:(int)arg3 ErrMsg:(NSString *)arg4 ErrTitle:(NSString *)arg5 DataFlag:(unsigned int)arg6;
- (void)OnSyncError:(int)arg1;
@end

