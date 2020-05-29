//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

#import "ISysCallCheckExt-Protocol.h"
#import "IWAAudioPlayerDelegate-Protocol.h"
#import "MonoServiceLogicExt-Protocol.h"

@class NSMutableDictionary, NSObject, NSString, WAAppTask;
@protocol IJSContextPluginDelegate, OS_dispatch_queue;

@interface WAJSContextPlugin_AudioPlayer : WAJSContextPluginBase <IWAAudioPlayerDelegate, ISysCallCheckExt, MonoServiceLogicExt>
{
    struct ALCcontext_struct *_alcContext;
    _Bool _bResumeContextOnWXBecomingActive;
    _Bool _isNeedResumeWXMusic;
    _Bool _obeyMuteSwitch;
    _Bool _mixWithOthers;
    id <IJSContextPluginDelegate> _resultDelegate;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_fileQueue;
    NSMutableDictionary *_playerDic;
}

@property(nonatomic) _Bool mixWithOthers; // @synthesize mixWithOthers=_mixWithOthers;
@property(nonatomic) _Bool obeyMuteSwitch; // @synthesize obeyMuteSwitch=_obeyMuteSwitch;
@property(nonatomic) _Bool isNeedResumeWXMusic; // @synthesize isNeedResumeWXMusic=_isNeedResumeWXMusic;
@property(retain, nonatomic) NSMutableDictionary *playerDic; // @synthesize playerDic=_playerDic;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue; // @synthesize fileQueue=_fileQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(nonatomic) __weak id <IJSContextPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void).cxx_destruct;
- (void)onMonoServiceDidEnd;
- (void)onMonoServiceWalkieTalkieWillStart;
- (void)onMonoServiceMultitalkWillStart;
- (void)onMonoServiceVoipWillStart;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)EndInterruption;
- (void)BeginInterruption;
- (void)resumeMusicIfNeed:(_Bool)arg1;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)asyncClearAudioCache;
- (void)resumeAudioContext;
- (void)interruptAllPlayer;
- (_Bool)hasPlayerPlayingOrWaiting;
- (void)forcePauseAllPlayer;
- (void)stopAllPlayer;
- (void)activeAudioSession;
- (void)removeObserver;
- (void)addObserver;
@property(readonly, nonatomic) WAAppTask *task;
@property(readonly, nonatomic) _Bool isGameApp;
- (void)onDownloadAudioData:(id)arg1 src:(id)arg2;
- (void)setCurrentContext;
- (void)onPlayerStateChange:(long long)arg1 audioId:(id)arg2 errCode:(long long)arg3 errMsg:(id)arg4;
- (_Bool)isPlayingAudio;
- (id)getPlayerWithAudioId:(id)arg1;
- (double)getPlayerVolume:(id)arg1;
- (double)getPlayerBufferTime:(id)arg1;
- (double)getPlayerStartTime:(id)arg1;
- (id)getPlayerSrc:(id)arg1;
- (double)getPlayerCurtime:(id)arg1;
- (double)getPlayerDuration:(id)arg1;
- (_Bool)isPlayerIdle:(id)arg1;
- (_Bool)isPlayerWaiting:(id)arg1;
- (_Bool)isPlayerPlaying:(id)arg1;
- (_Bool)isPlayerPaused:(id)arg1;
- (_Bool)isPlayerSet:(id)arg1;
- (void)destoryPlayer:(id)arg1;
- (void)stopPlayer:(id)arg1;
- (void)seekPlayer:(id)arg1 seekTime:(float)arg2;
- (void)pausePlayer:(id)arg1;
- (void)playPlayer:(id)arg1;
- (id)generateUrlFromSrc:(id)arg1 fileData:(id *)arg2;
- (void)setPlayerState:(id)arg1 src:(id)arg2 startTime:(double)arg3 autoPlay:(_Bool)arg4 loop:(_Bool)arg5 obeyMuteSwitch:(_Bool)arg6 volume:(double)arg7;
- (_Bool)isAudioPlayerExist:(id)arg1;
- (id)createAudioInstance;
- (void)setInnerAudioSession:(_Bool)arg1 mixWithOthers:(_Bool)arg2;
- (id)localPathByAudioData:(id)arg1 pathExtension:(id)arg2;
- (id)audioCacheDataPathForSrc:(id)arg1;
- (id)audioTmpPathByfileName:(id)arg1;
- (id)audioTmpRootPath;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

