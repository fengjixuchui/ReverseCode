//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, RecommendedMusicInfo;

@protocol EditVideoBgmViewDelegate <NSObject>
- (void)EditVideoBGMViewDidSelectMusic:(RecommendedMusicInfo *)arg1;
- (void)EditVideoBGMViewDidClickTurnOffMusicButton:(_Bool)arg1;
- (void)EditVideoBGMViewDidClickDoneButtonWithRequestId:(unsigned long long)arg1 andMusicIndex:(long long)arg2 andMusic:(RecommendedMusicInfo *)arg3 andPath:(NSString *)arg4;
@end

