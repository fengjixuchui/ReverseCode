//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

#import "WCCanvasImageLoaderObserver-Protocol.h"

@class MMProgressViewEx, NSString, WCPanoramaImageView;

@interface WCCanvasPanoramaImageComponent : WCCanvasComponent <WCCanvasImageLoaderObserver>
{
    WCPanoramaImageView *_panoramaImageView;
    MMProgressViewEx *_loadingView;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
@property(retain, nonatomic) MMProgressViewEx *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCPanoramaImageView *panoramaImageView; // @synthesize panoramaImageView=_panoramaImageView;
- (void).cxx_destruct;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (_Bool)shouldForbidDelegateShowArrowDown;
- (void)willRotateToOrientation:(long long)arg1 duration:(double)arg2;
- (void)componentWillDisappearInMainScreen:(_Bool)arg1;
- (void)componentDidFullyApperaInMainScreen:(_Bool)arg1;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

