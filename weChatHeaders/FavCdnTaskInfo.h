//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavoritesDownloadCDNInfo;

@interface FavCdnTaskInfo : NSObject
{
    int _retryCount;
    int _remainSize;
    FavoritesDownloadCDNInfo *_downloadInfo;
}

@property(retain, nonatomic) FavoritesDownloadCDNInfo *downloadInfo; // @synthesize downloadInfo=_downloadInfo;
@property(nonatomic) int remainSize; // @synthesize remainSize=_remainSize;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
- (void).cxx_destruct;

@end

