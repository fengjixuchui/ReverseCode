//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QBDNSRecord : NSObject
{
    _Bool _expired;
    int _ttl;
    long long _timeStamp;
    NSString *_value;
}

@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)expired;
- (id)init:(id)arg1 ttl:(int)arg2;

@end

