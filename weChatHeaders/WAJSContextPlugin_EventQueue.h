//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

@class NSMutableArray;

@interface WAJSContextPlugin_EventQueue : WAJSContextPluginBase
{
    NSMutableArray *_arrViewDidAppearEvent;
}

- (void).cxx_destruct;
- (id)anyThread_popAllEventInViewDidAppearQueue;
- (void)anyThread_addEventToViewDidAppearQueue:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (void)mainthread_handleEventInViewDidAppearQueue;
- (void)mainthread_addEventToViewDidAppearQueue:(CDUnknownBlockType)arg1;

@end

