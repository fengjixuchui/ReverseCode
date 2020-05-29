//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EditImageWidgetTool.h"

#import "EditImageTextInputDelegate.h"

@class CATextLayer, EditImageTextView, NSString, UIColor, UIView;

@interface EditImageTextTool : EditImageWidgetTool <EditImageTextInputDelegate>
{
    CATextLayer *_tlayer;
    double _strWidth;
    double _maxWidth;
    double _strHeight;
    unsigned long long _textStyle;
    NSString *_displayStr;
    struct CGRect _imageFrame;
    struct CGPoint _screenCenter;
    double _zoomScaleWhenInit;
    UIView *_superView;
    struct CGRect _editViewFrame;
    double _lineWidth;
    UIColor *_lineColor;
    EditImageTextView *_textView;
}

@property(retain, nonatomic) EditImageTextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *_displayStr; // @synthesize _displayStr;
@property(nonatomic) UIColor *_lineColor; // @synthesize _lineColor;
@property(nonatomic) double _lineWidth; // @synthesize _lineWidth;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelEditText:(id)arg1;
- (void)confirmEditText:(id)arg1 withColor:(id)arg2 style:(unsigned long long)arg3;
- (_Bool)startEditingText;
- (id)exportAnimatedLayer;
- (void)setScreenCenter:(struct CGPoint)arg1;
- (_Bool)needHighQuality;
- (void)subclassReloadFrame;
- (void)subclassLargeTouchFrame;
- (double)widgetViewBorder;
- (double)widgetHeight;
- (double)widgetWidth;
- (double)maxFrameScaleWhileSelect;
- (double)maxScaleFactor;
- (double)originalScaleFactor;
- (void)reloadTextColor;
- (void)createTrueTextLayer;
- (void)createTextLayer:(struct CGRect)arg1 withCenterPoint:(struct CGPoint)arg2 withSuperView:(id)arg3;
- (id)mutableCopy;
- (id)initWithEditViewFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

