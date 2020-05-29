//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIFont.h"

@interface UIFont (Extend)
+ (void)loadOldFontSet:(unsigned int)arg1;
+ (void)copyFontSetToLocalInfo;
+ (unsigned int)getWebviewFontScale;
+ (void)setAppFontSize:(unsigned int)arg1 andBackTab:(int)arg2;
+ (void)setAppFontSize:(unsigned int)arg1;
+ (double)getNormalFontSizeByLevel:(unsigned int)arg1;
+ (double)getNormalFontSizeByLevelForTimeline:(unsigned int)arg1;
+ (double)getNormalFontSizeByDefaultLevel;
+ (double)getNormalFontSize:(int)arg1;
+ (double)getNormalFontSize;
+ (_Bool)useDynamicSize;
+ (double)dynamicFontSize:(double)arg1;
+ (double)dynamicScaleWithModule:(int)arg1;
+ (double)dynamicScale;
+ (double)dynamicFontSize:(double)arg1 forModule:(int)arg2;
+ (double)dynamicCellHeight:(double)arg1;
+ (double)dynamicLength:(double)arg1;
+ (double)dynamicLength:(double)arg1 forModule:(int)arg2;
+ (id)dynamicMediumSystemFontOfSize:(double)arg1;
+ (id)dynamicBoldSystemFontOfSize:(double)arg1;
+ (id)dynamicSystemFontOfSize:(double)arg1;
+ (id)dynamicBoldSystemFontOfSize:(double)arg1 forModule:(int)arg2;
+ (id)dynamicSystemFontOfSize:(double)arg1 forModule:(int)arg2;
+ (id)dynamicSettingFont:(double)arg1;
+ (id)settingFont:(double)arg1;
+ (id)systemLittleFont;
+ (id)systemSmallFont;
+ (id)systemFont;
+ (id)systemBoldBigFont;
+ (void)loadFontWithFileName:(id)arg1;
+ (id)lemiaoFontOfSize:(double)arg1;
+ (id)xiariFontOfSize:(double)arg1;
+ (id)mediumWechatFont:(id)arg1 fontSize:(double)arg2;
+ (id)boldWechatFont:(id)arg1 fontSize:(double)arg2;
+ (id)regularWechatFont:(id)arg1 fontSize:(double)arg2;
+ (_Bool)isContentContainsLetter:(id)arg1;
+ (id)boldWechatStdFontOfSize:(double)arg1;
+ (id)regularWechatStdFontOfSize:(double)arg1;
+ (id)mediumWechatStdFontOfSize:(double)arg1;
+ (id)boldWechatSSFontOfSize:(double)arg1;
+ (id)regularWechatSSFontOfSize:(double)arg1;
+ (id)mediumWechatSSFontOfSize:(double)arg1;
+ (id)mediumSystemFontOfSize:(double)arg1;
+ (id)lightSystemFontOfSize:(double)arg1;
- (double)topMargin;
@end

