//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class HPCardOperItem, NSString;

@interface CheckHoneyPayerResp_HPCardTypeInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int cardType; // @dynamic cardType;
@property(retain, nonatomic) NSString *cardTypeName; // @dynamic cardTypeName;
@property(retain, nonatomic) NSString *icon; // @dynamic icon;
@property(nonatomic) _Bool isGray; // @dynamic isGray;
@property(retain, nonatomic) HPCardOperItem *operItem; // @dynamic operItem;
@property(retain, nonatomic) NSString *tips; // @dynamic tips;

@end

