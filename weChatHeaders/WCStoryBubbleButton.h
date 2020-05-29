//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class MMTimer, NSString, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface WCStoryBubbleButton : UIView <UIGestureRecognizerDelegate>
{
    MMTimer *m_smallBubbleTimer;
    UIView *m_backgroundView;
    unsigned int m_bubbleGroupId;
    _Bool _showSmallBubble;
    UIImageView *_bubbleImageView;
    id <WCStoryBubbleButtonDelegate> _delegate;
    UITapGestureRecognizer *_singleTapGesture;
    UILongPressGestureRecognizer *_longPressGesture;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGesture; // @synthesize singleTapGesture=_singleTapGesture;
@property(nonatomic) __weak id <WCStoryBubbleButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(nonatomic) _Bool showSmallBubble; // @synthesize showSmallBubble=_showSmallBubble;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onLongPress:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (void)addLongPress;
- (void)addSingleTap;
- (void)clearTouchBeginState;
- (void)setTouchBeginState;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)showNoCommentsSmallBubbleAnimation;
- (void)showAnimationLayerWithStartRect:(struct CGRect)arg1 endRect:(struct CGRect)arg2 startOpacity:(double)arg3 endOpacity:(double)arg4 duration:(double)arg5 image:(id)arg6;
- (void)showSmallBubbleWithImage:(id)arg1;
- (void)showSmallBubbleAnimation;
- (void)showOneBubbleWithImage:(id)arg1;
- (void)showOneBubbleAnimation:(id)arg1;
- (void)showAnimation;
- (void)stopAnimation;
- (void)addBubbleImageView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

