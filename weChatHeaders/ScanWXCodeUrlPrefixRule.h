//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface ScanWXCodeUrlPrefixRule : NSObject
{
    NSMutableArray *_handlerArray;
}

@property(retain, nonatomic) NSMutableArray *handlerArray; // @synthesize handlerArray=_handlerArray;
- (void).cxx_destruct;
- (void)reportHandleCount;
- (_Bool)shouldHandleUrl:(id)arg1;
- (id)initWithDelegate:(id)arg1 scene:(int)arg2 sourceType:(unsigned int)arg3 sourceInfo:(id)arg4;

@end

