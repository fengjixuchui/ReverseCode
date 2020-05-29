//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMWebGesBlurCircleView, UIImageView, UILabel;

@interface MMWebGestureCircleView : UIView
{
    _Bool _selected;
    UILabel *_minimizeLabel;
    UIImageView *_minimizeIconView;
    UIView *_maskView;
    MMWebGesBlurCircleView *_blurEffectView;
}

@property(retain, nonatomic) MMWebGesBlurCircleView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *minimizeIconView; // @synthesize minimizeIconView=_minimizeIconView;
@property(retain, nonatomic) UILabel *minimizeLabel; // @synthesize minimizeLabel=_minimizeLabel;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (double)canTouchRadius;
- (id)circleMaskColor;
- (id)selectedCircleIconImage;
- (id)normalCircleIconImage;
- (id)circleTitle;
- (double)circleContentRightMargin;
- (double)circleContentBottomMargin;
- (double)circleHightlightedRadius;
- (double)circleRadius;
- (double)circleIconSize;
- (void)resertNormalState;
- (void)changeToSelectedState;
- (void)layoutSubviews;
- (void)initSelectedMaskView;
- (void)initMinimizeIconView;
- (void)initMinimizeLabel;
- (void)initBlurEffectView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

