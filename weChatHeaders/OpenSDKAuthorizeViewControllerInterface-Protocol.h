//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, OauthScopeInfo;

@protocol OpenSDKAuthorizeViewControllerInterface <NSObject>

@optional
@property(nonatomic) __weak id <OpenSDKAuthorizeViewControllerDelegate> delegate;
@property(retain, nonatomic) NSString *iconUrl;
@property(retain, nonatomic) NSString *appName;
@property(retain, nonatomic) OauthScopeInfo *scopeInfo;
@end

