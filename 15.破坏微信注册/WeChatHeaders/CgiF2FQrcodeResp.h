//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseResponse, MenuItem, MiniProgramInfo, NSMutableArray, NSString;

@interface CgiF2FQrcodeResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) MenuItem *bottomItem; // @dynamic bottomItem;
@property(retain, nonatomic) NSString *bottomLeftIconUrl; // @dynamic bottomLeftIconUrl;
@property(nonatomic) _Bool bottomRightArrowFlag; // @dynamic bottomRightArrowFlag;
@property(nonatomic) unsigned int busiType; // @dynamic busiType;
@property(retain, nonatomic) MiniProgramInfo *buyMaterialInfo; // @dynamic buyMaterialInfo;
@property(nonatomic) unsigned int guideMaterialFlag; // @dynamic guideMaterialFlag;
@property(retain, nonatomic) NSString *mchName; // @dynamic mchName;
@property(retain, nonatomic) NSString *mchPhoto; // @dynamic mchPhoto;
@property(retain, nonatomic) NSString *trueName; // @dynamic trueName;
@property(retain, nonatomic) NSMutableArray *upperRightItems; // @dynamic upperRightItems;
@property(retain, nonatomic) NSString *upperWording; // @dynamic upperWording;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

