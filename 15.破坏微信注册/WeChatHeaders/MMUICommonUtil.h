//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMUICommonUtil : NSObject
{
}

+ (id)getBottomBarButtonWithTitle:(id)arg1 backgroundImageName:(id)arg2 widthMargin:(double)arg3 target:(id)arg4 action:(SEL)arg5;
+ (id)getBottomBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(int)arg4;
+ (id)getBarButtonWithImage:(id)arg1 withHighlightedImage:(id)arg2 withDisabledImage:(id)arg3 withBackGroundImage:(id)arg4 withBackGroundImageHL:(id)arg5 withBackGroundImageDisable:(id)arg6 target:(id)arg7 action:(SEL)arg8 style:(int)arg9 accessibilityStr:(id)arg10;
+ (id)getBarButtonWithImage:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(int)arg4 accessibility:(id)arg5 color:(id)arg6;
+ (id)getBarButtonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(int)arg4 accessibility:(id)arg5 useTemplateMode:(_Bool)arg6;
+ (id)getBarButtonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(int)arg4 accessibility:(id)arg5 color:(id)arg6;
+ (id)getBarButtonWithImageName:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(int)arg4 accessibility:(id)arg5;
+ (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(int)arg4 maxWidth:(double)arg5 color:(id)arg6;
+ (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(int)arg4 color:(id)arg5;
+ (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(int)arg4;
+ (void)setBottomBarButtonTitleColor:(id)arg1 withStyle:(int)arg2;

@end

