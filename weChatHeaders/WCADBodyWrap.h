//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCADVideoPlayInfo;

@interface WCADBodyWrap : NSObject
{
    unsigned int _startPositionType;
    unsigned int _endPositionType;
    unsigned int _turnSideExposureCnt;
    unsigned int _turnSideClickCnt;
    unsigned int _source;
    NSString *_adID;
    NSString *_publishID;
    NSString *_uxInfo;
    unsigned long long _startTime;
    unsigned long long _endTime;
    unsigned long long _halfStartTime;
    unsigned long long _halfEndTime;
    unsigned long long _allStartTime;
    unsigned long long _allEndTime;
    double _readHeight;
    double _unReadTopHeight;
    double _unReadBottomHeight;
    double _tableContentY;
    WCADVideoPlayInfo *_playInfo;
    WCADVideoPlayInfo *_turnPlayInfo;
    NSString *_snsStatExt;
    unsigned long long _adDisappearTime;
    unsigned long long _adDisappearDuration;
    unsigned long long _adFullExposeDisappearTime;
    unsigned long long _adFullExposeDisappearDuration;
}

@property(nonatomic) unsigned long long adFullExposeDisappearDuration; // @synthesize adFullExposeDisappearDuration=_adFullExposeDisappearDuration;
@property(nonatomic) unsigned long long adFullExposeDisappearTime; // @synthesize adFullExposeDisappearTime=_adFullExposeDisappearTime;
@property(nonatomic) unsigned long long adDisappearDuration; // @synthesize adDisappearDuration=_adDisappearDuration;
@property(nonatomic) unsigned long long adDisappearTime; // @synthesize adDisappearTime=_adDisappearTime;
@property(retain, nonatomic) NSString *snsStatExt; // @synthesize snsStatExt=_snsStatExt;
@property(nonatomic) unsigned int source; // @synthesize source=_source;
@property(nonatomic) unsigned int turnSideClickCnt; // @synthesize turnSideClickCnt=_turnSideClickCnt;
@property(nonatomic) unsigned int turnSideExposureCnt; // @synthesize turnSideExposureCnt=_turnSideExposureCnt;
@property(retain, nonatomic) WCADVideoPlayInfo *turnPlayInfo; // @synthesize turnPlayInfo=_turnPlayInfo;
@property(retain, nonatomic) WCADVideoPlayInfo *playInfo; // @synthesize playInfo=_playInfo;
@property(nonatomic) double tableContentY; // @synthesize tableContentY=_tableContentY;
@property(nonatomic) double unReadBottomHeight; // @synthesize unReadBottomHeight=_unReadBottomHeight;
@property(nonatomic) double unReadTopHeight; // @synthesize unReadTopHeight=_unReadTopHeight;
@property(nonatomic) double readHeight; // @synthesize readHeight=_readHeight;
@property(nonatomic) unsigned long long allEndTime; // @synthesize allEndTime=_allEndTime;
@property(nonatomic) unsigned long long allStartTime; // @synthesize allStartTime=_allStartTime;
@property(nonatomic) unsigned long long halfEndTime; // @synthesize halfEndTime=_halfEndTime;
@property(nonatomic) unsigned long long halfStartTime; // @synthesize halfStartTime=_halfStartTime;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int endPositionType; // @synthesize endPositionType=_endPositionType;
@property(nonatomic) unsigned int startPositionType; // @synthesize startPositionType=_startPositionType;
@property(retain, nonatomic) NSString *uxInfo; // @synthesize uxInfo=_uxInfo;
@property(retain, nonatomic) NSString *publishID; // @synthesize publishID=_publishID;
@property(retain, nonatomic) NSString *adID; // @synthesize adID=_adID;
- (void).cxx_destruct;

@end

