//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSTouchEventTracker.h"

@class NSMutableArray, NSString, TSTouchTrackRecognizer, UIView;

@interface TSTouchTapTracker : NSObject <TSTouchEventTracker>
{
    UIView *_attachedView;
    TSTouchTrackRecognizer *_trackRecognizer;
    NSMutableArray *_touches;
}

@property(retain, nonatomic) NSMutableArray *touches; // @synthesize touches=_touches;
@property(retain, nonatomic) TSTouchTrackRecognizer *trackRecognizer; // @synthesize trackRecognizer=_trackRecognizer;
@property(nonatomic) __weak UIView *attachedView; // @synthesize attachedView=_attachedView;
- (void).cxx_destruct;
- (void)attachedControlOnClick:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 trackEventHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

