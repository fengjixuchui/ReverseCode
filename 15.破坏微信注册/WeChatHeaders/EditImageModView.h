//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "NSCopying-Protocol.h"

@class EditImageUIView, NSString, UIColor;

@interface EditImageModView : MMObject <NSCopying>
{
    _Bool _hide;
    unsigned int _modProperty;
    unsigned int _pViewIndex;
    EditImageUIView *_czUIView;
    double _pViewScale;
    NSString *_pText;
    double _pScale;
    unsigned long long _pOrientation;
    UIColor *_pTextColor;
    struct CGPoint _pCenter;
    struct CGPoint _pAnchorPoint;
    struct CGPoint _pOffset;
    struct CGRect _pFrame;
    struct CGRect _pGridFrame;
    struct CGRect _pCropFrame;
    struct CGAffineTransform _pTransform;
}

@property(retain, nonatomic) UIColor *_pTextColor; // @synthesize _pTextColor;
@property(nonatomic) unsigned long long _pOrientation; // @synthesize _pOrientation;
@property(nonatomic) unsigned int _pViewIndex; // @synthesize _pViewIndex;
@property(nonatomic) struct CGRect _pCropFrame; // @synthesize _pCropFrame;
@property(nonatomic) struct CGPoint _pOffset; // @synthesize _pOffset;
@property(nonatomic) double _pScale; // @synthesize _pScale;
@property(nonatomic) struct CGRect _pGridFrame; // @synthesize _pGridFrame;
@property(nonatomic) _Bool _hide; // @synthesize _hide;
@property(copy, nonatomic) NSString *_pText; // @synthesize _pText;
@property(nonatomic) double _pViewScale; // @synthesize _pViewScale;
@property(nonatomic) struct CGPoint _pAnchorPoint; // @synthesize _pAnchorPoint;
@property(nonatomic) struct CGPoint _pCenter; // @synthesize _pCenter;
@property(nonatomic) struct CGAffineTransform _pTransform; // @synthesize _pTransform;
@property(nonatomic) struct CGRect _pFrame; // @synthesize _pFrame;
@property(nonatomic) unsigned int _modProperty; // @synthesize _modProperty;
@property(retain, nonatomic) EditImageUIView *_czUIView; // @synthesize _czUIView;
- (void).cxx_destruct;
- (_Bool)isChanged;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCropGridFrame:(struct CGRect)arg1 withScale:(double)arg2 withOffset:(struct CGPoint)arg3 withCropFrame:(struct CGRect)arg4 withImageFrame:(struct CGRect)arg5 withOrientation:(unsigned long long)arg6;
- (id)initWithCurrentView:(id)arg1;
- (id)initWithNewView:(id)arg1;
- (id)init;

@end

