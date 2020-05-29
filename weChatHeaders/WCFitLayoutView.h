//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMWebImageView, UILabel;

@interface WCFitLayoutView : UIView
{
    MMWebImageView *_leftImageView;
    UILabel *_rightLabel;
    double _maxWidth;
    long long _layoutType;
}

@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(readonly, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(readonly, nonatomic) MMWebImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initLeftImageRightTitle;

@end

