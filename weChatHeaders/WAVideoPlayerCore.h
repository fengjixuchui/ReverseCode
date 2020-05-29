//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WAVideoURLConnectionDelegate.h"

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerLayer, AVURLAsset, NSObject, NSString, NSURL, WAVideoURLConnection;

@interface WAVideoPlayerCore : MMObject <WAVideoURLConnectionDelegate>
{
    _Bool _customCache;
    _Bool _isPauseByUser;
    _Bool _isLocalVideo;
    _Bool _isFinishLoad;
    long long _state;
    double _loadedProgress;
    double _duration;
    double _current;
    double _playRate;
    AVPlayerLayer *_currentPlayerLayer;
    id <WAVideoPlayerCoreDelegate> _delegate;
    NSURL *_url;
    AVURLAsset *_videoURLAsset;
    AVAsset *_videoAsset;
    WAVideoURLConnection *_resouerLoader;
    AVPlayer *_player;
    AVPlayerItem *_currentPlayerItem;
    NSObject *_playbackTimeObserver;
    double _seekTime;
}

@property(nonatomic) double seekTime; // @synthesize seekTime=_seekTime;
@property(nonatomic) _Bool isFinishLoad; // @synthesize isFinishLoad=_isFinishLoad;
@property(nonatomic) _Bool isLocalVideo; // @synthesize isLocalVideo=_isLocalVideo;
@property(nonatomic) _Bool isPauseByUser; // @synthesize isPauseByUser=_isPauseByUser;
@property(retain, nonatomic) NSObject *playbackTimeObserver; // @synthesize playbackTimeObserver=_playbackTimeObserver;
@property(retain, nonatomic) AVPlayerItem *currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) WAVideoURLConnection *resouerLoader; // @synthesize resouerLoader=_resouerLoader;
@property(retain, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(retain, nonatomic) AVURLAsset *videoURLAsset; // @synthesize videoURLAsset=_videoURLAsset;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) __weak id <WAVideoPlayerCoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVPlayerLayer *currentPlayerLayer; // @synthesize currentPlayerLayer=_currentPlayerLayer;
@property(nonatomic) double playRate; // @synthesize playRate=_playRate;
@property(nonatomic) double current; // @synthesize current=_current;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double loadedProgress; // @synthesize loadedProgress=_loadedProgress;
@property(nonatomic) _Bool customCache; // @synthesize customCache=_customCache;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)setPreferredForwardBufferDuration:(double)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)didFailLoadingWithTask:(id)arg1 WithError:(long long)arg2;
- (void)didFinishLoadingWithTask:(id)arg1;
- (void)bufferingSomeSecond;
- (void)calculateDownloadProgress:(id)arg1;
- (void)monitoringPlayback:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playerItemPlaybackStalled:(id)arg1;
- (void)playerItemDidPlayToEnd:(id)arg1;
@property(readonly, nonatomic) double progress;
- (void)stop;
- (void)pause:(_Bool)arg1;
- (void)resume;
- (void)seekToTime:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)getVideoThumbImage:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)play;
- (void)playWithUrl:(id)arg1;
- (void)releasePlayer;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

