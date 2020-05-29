//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCPlayerMediaExt.h"

@class NSString;

@interface WCPlayerHttpMediaWrap : NSObject <WCPlayerMediaExt>
{
    unsigned int _preloadPercent;
    unsigned long long _enQueueTime;
    unsigned long long _playerScene;
    double _startDownloadTime;
    double _getMoovTime;
}

@property(nonatomic) double getMoovTime; // @synthesize getMoovTime=_getMoovTime;
@property(nonatomic) double startDownloadTime; // @synthesize startDownloadTime=_startDownloadTime;
@property(nonatomic) unsigned long long playerScene; // @synthesize playerScene=_playerScene;
@property(nonatomic) unsigned long long enQueueTime; // @synthesize enQueueTime=_enQueueTime;
@property(nonatomic) unsigned int preloadPercent; // @synthesize preloadPercent=_preloadPercent;
@property(readonly, copy) NSString *description;
- (unsigned int)getPreloadPercent;
- (id)getTempDirectory;
- (id)getThumbImagePath;
- (id)getFormatVideoPath;
- (id)getTempVideoPath;
- (id)getMediaWrapIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

