//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

#import "WCPayJSOpenOfflinePayControlLogicDelegate.h"

@class NSMutableDictionary, NSString, WCPayJSOpenOfflinePayControlLogic;

@interface WAJSEventHandler_openOfflinePayView : WAJSEventHandler_BaseEvent <WCPayJSOpenOfflinePayControlLogicDelegate>
{
    NSMutableDictionary *_params;
    WCPayJSOpenOfflinePayControlLogic *_openOfflinePayLogic;
}

@property(retain, nonatomic) WCPayJSOpenOfflinePayControlLogic *openOfflinePayLogic; // @synthesize openOfflinePayLogic=_openOfflinePayLogic;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (void)returnToOfflinePayView;
- (void)failToStartOpenOfflinePayLogic;
- (void)succToOpenOfflinePayLogic;
- (void)handleJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

