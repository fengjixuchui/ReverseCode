//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController<MMUIViewControllerDelegate>;

@interface WAOpenSDKJSEventHandlerContext : NSObject
{
    NSString *_sourceUserName;
    NSString *_appId;
    NSString *_sourcePagePath;
    unsigned long long _sourceScene;
    UIViewController<MMUIViewControllerDelegate> *_sourceViewController;
    NSString *_sourceOpenSDKAppId;
    CDUnknownBlockType _eventCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType eventCompletionBlock; // @synthesize eventCompletionBlock=_eventCompletionBlock;
@property(copy, nonatomic) NSString *sourceOpenSDKAppId; // @synthesize sourceOpenSDKAppId=_sourceOpenSDKAppId;
@property(nonatomic) __weak UIViewController<MMUIViewControllerDelegate> *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(nonatomic) unsigned long long sourceScene; // @synthesize sourceScene=_sourceScene;
@property(copy, nonatomic) NSString *sourcePagePath; // @synthesize sourcePagePath=_sourcePagePath;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *sourceUserName; // @synthesize sourceUserName=_sourceUserName;
- (void).cxx_destruct;
- (id)init;

@end

