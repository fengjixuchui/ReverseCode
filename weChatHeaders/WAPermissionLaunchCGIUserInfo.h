//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WAAppItemData;

@interface WAPermissionLaunchCGIUserInfo : NSObject
{
    _Bool _isFromBackground;
    unsigned int _enterScene;
    WAAppItemData *_appItem;
    NSString *_sessionId;
}

@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool isFromBackground; // @synthesize isFromBackground=_isFromBackground;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) WAAppItemData *appItem; // @synthesize appItem=_appItem;
- (void).cxx_destruct;

@end

