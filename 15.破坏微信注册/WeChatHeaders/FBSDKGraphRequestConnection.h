//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKURLConnectionDelegate-Protocol.h"

@class FBSDKGraphRequestMetadata, FBSDKURLConnection, NSHTTPURLResponse, NSMutableArray, NSOperationQueue, NSString;
@protocol FBSDKGraphRequestConnectionDelegate;

@interface FBSDKGraphRequestConnection : NSObject <FBSDKURLConnectionDelegate>
{
    NSString *_overrideVersionPart;
    FBSDKGraphRequestMetadata *_recoveringRequestMetadata;
    unsigned long long _expectingResults;
    NSOperationQueue *_delegateQueue;
    id <FBSDKGraphRequestConnectionDelegate> _delegate;
    double _timeout;
    NSHTTPURLResponse *_URLResponse;
    FBSDKURLConnection *_connection;
    NSMutableArray *_requests;
    unsigned long long _state;
    unsigned long long _requestStartTime;
}

+ (id)userAgent;
@property(nonatomic) unsigned long long requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) FBSDKURLConnection *connection; // @synthesize connection=_connection;
@property(readonly, retain, nonatomic) NSHTTPURLResponse *URLResponse; // @synthesize URLResponse=_URLResponse;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) id <FBSDKGraphRequestConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)facebookURLConnection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)accessTokenWithRequest:(id)arg1;
- (id)errorWithCode:(long long)arg1 statusCode:(long long)arg2 parsedJSONResponse:(id)arg3 innerError:(id)arg4 message:(id)arg5;
- (id)errorFromResult:(id)arg1;
- (void)processResultBody:(id)arg1 error:(id)arg2 metadata:(id)arg3;
- (void)completeWithResults:(id)arg1 networkError:(id)arg2;
- (id)parseJSONOrOtherwise:(id)arg1 error:(id *)arg2;
- (id)parseJSONResponse:(id)arg1 error:(id *)arg2 statusCode:(long long)arg3;
- (void)completeFBSDKURLConnectionWithResponse:(id)arg1 data:(id)arg2 networkError:(id)arg3;
- (id)urlStringForSingleRequest:(id)arg1 forBatch:(_Bool)arg2;
- (id)requestWithBatch:(id)arg1 timeout:(double)arg2;
- (void)appendJSONRequests:(id)arg1 toBody:(id)arg2 andNameAttachments:(id)arg3;
- (void)appendAttachments:(id)arg1 toBody:(id)arg2 addFormData:(_Bool)arg3;
- (void)addRequest:(id)arg1 toBatch:(id)arg2 attachments:(id)arg3 batchToken:(id)arg4;
- (void)setDelegateQueue:(id)arg1;
- (void)start;
- (void)cancel;
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 batchParameters:(id)arg3;
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 batchEntryName:(id)arg3;
- (void)addRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

