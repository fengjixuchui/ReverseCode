//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface UserIdAuthorizeSmsPhoneItem : MMObject
{
    NSString *_phoneId;
    NSString *_showPhone;
    NSString *_bankType;
}

@property(copy, nonatomic) NSString *bankType; // @synthesize bankType=_bankType;
@property(copy, nonatomic) NSString *showPhone; // @synthesize showPhone=_showPhone;
@property(copy, nonatomic) NSString *phoneId; // @synthesize phoneId=_phoneId;
- (void).cxx_destruct;

@end

