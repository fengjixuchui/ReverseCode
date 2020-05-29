//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMUILabel, WXVideoSlider;

@interface WSVideoPregressBar : UIView
{
    _Bool _isPlaying;
    id <WSVideoPregressBarDelegate> _m_delegate;
    UIView *_containerView;
    MMUILabel *_currentTimeLabel;
    MMUILabel *_totalTimeLabel;
    WXVideoSlider *_videoSlider;
    double _currSeekedTime;
    double _lastSeekEndTime;
    double _totalTime;
}

@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) double lastSeekEndTime; // @synthesize lastSeekEndTime=_lastSeekEndTime;
@property(nonatomic) double currSeekedTime; // @synthesize currSeekedTime=_currSeekedTime;
@property(retain, nonatomic) WXVideoSlider *videoSlider; // @synthesize videoSlider=_videoSlider;
@property(retain, nonatomic) MMUILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) MMUILabel *currentTimeLabel; // @synthesize currentTimeLabel=_currentTimeLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <WSVideoPregressBarDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)onSliderScrubbEnd;
- (void)onSliderScrubbBegin;
- (void)onSliderChange;
- (void)resetCurrentTimeImmediately:(double)arg1;
- (void)updateWithCurrentTime:(double)arg1;
- (double)getSliderCurValue;
- (double)getSliderMinValue;
- (double)getSliderMaxValue;
- (void)changeSliderEnd;
- (void)changeSliderTo:(double)arg1;
- (void)changeSliderBegin;
- (void)updateTotalTime:(double)arg1;
- (void)setSliderValue:(double)arg1;
- (void)updateCurrentTimeLabel:(double)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1 totalTime:(double)arg2;

@end

