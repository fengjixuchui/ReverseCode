//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class ActionSheetInfo, BaseResponse, CheckJsApiInfo, LaunchAction, OperationInfo, PublicLibUpdateInfo, WxaAppHostInfo;

@interface LaunchWxaAppResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) ActionSheetInfo *actionSheet; // @dynamic actionSheet;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(retain, nonatomic) CheckJsApiInfo *checkJsApi; // @dynamic checkJsApi;
@property(retain, nonatomic) WxaAppHostInfo *hostInfo; // @dynamic hostInfo;
@property(retain, nonatomic) LaunchAction *launch; // @dynamic launch;
@property(retain, nonatomic) OperationInfo *operation; // @dynamic operation;
@property(retain, nonatomic) PublicLibUpdateInfo *publicLibUpdate; // @dynamic publicLibUpdate;

@end

