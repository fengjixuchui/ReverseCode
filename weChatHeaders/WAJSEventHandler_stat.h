//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSEventHandler_BaseEvent.h"

@class NSMutableDictionary;

@interface WAJSEventHandler_stat : WAJSEventHandler_BaseEvent
{
    NSMutableDictionary *_recursiveDic;
}

@property(retain, nonatomic) NSMutableDictionary *recursiveDic; // @synthesize recursiveDic=_recursiveDic;
- (void).cxx_destruct;
- (void)traversePath:(id)arg1 relativePath:(id)arg2;
- (void)innerHandleJSEven:(id)arg1;
- (void)handleJSEvent:(id)arg1;

@end

