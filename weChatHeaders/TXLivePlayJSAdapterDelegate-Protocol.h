//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol TXLivePlayJSAdapterDelegate <NSObject>

@optional
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 playerId:(unsigned int)arg3;
- (void)onInsertLogView:(unsigned int)arg1;
- (void)onPlayNetStatus:(NSDictionary *)arg1 playerId:(unsigned int)arg2;
- (void)onPlayEvent:(int)arg1 evtMsg:(NSString *)arg2 playerId:(unsigned int)arg3 param:(NSDictionary *)arg4;
@end

