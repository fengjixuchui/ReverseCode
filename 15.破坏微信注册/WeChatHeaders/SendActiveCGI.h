//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@interface SendActiveCGI : NSObject <PBMessageObserverDelegate>
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)sendRequestWithActive:(_Bool)arg1;
- (void)sendUnActiveRequest;
- (void)sendActiveRequest;
- (void)dealloc;
- (id)init;

@end

