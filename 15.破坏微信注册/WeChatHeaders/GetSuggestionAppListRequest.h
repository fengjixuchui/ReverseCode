//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface GetSuggestionAppListRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int appType; // @dynamic appType;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int installedAppCount; // @dynamic installedAppCount;
@property(retain, nonatomic) NSMutableArray *installedAppList; // @dynamic installedAppList;
@property(retain, nonatomic) NSString *lang; // @dynamic lang;
@property(nonatomic) unsigned int limit; // @dynamic limit;
@property(nonatomic) unsigned int offSet; // @dynamic offSet;

@end

