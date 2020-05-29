//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MVideoPlayerViewDelegate-Protocol.h"

@class MMUILabel, MVideoPlayerView, UIButton;
@protocol FaceRecogGuideViewDelegate;

@interface FaceRecogReflectGuideView : MMUIView <MVideoPlayerViewDelegate>
{
    MVideoPlayerView *m_view;
    MMUILabel *m_bigTitle;
    MMUILabel *m_detail;
    UIButton *m_btn;
    id <FaceRecogGuideViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FaceRecogGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onPlayEnd;
- (void)playGuide;
- (void)onFaceRecogGuideFinished;
- (void)initView;
- (id)initWithDelegate:(id)arg1;

@end

