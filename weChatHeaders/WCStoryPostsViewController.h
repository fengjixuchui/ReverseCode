//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCActionSheetDelegate.h"

@class NSString, UISegmentedControl, WCStoryAlbumViewController, WCStoryHistoryViewController;

@interface WCStoryPostsViewController : MMUIViewController <WCActionSheetDelegate>
{
    unsigned int _scene;
    UISegmentedControl *_segmentedControl;
    WCStoryHistoryViewController *_storyHistoryViewController;
    WCStoryAlbumViewController *_albumViewController;
    unsigned long long _defaultSelectedTag;
}

@property(nonatomic) unsigned long long defaultSelectedTag; // @synthesize defaultSelectedTag=_defaultSelectedTag;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) WCStoryAlbumViewController *albumViewController; // @synthesize albumViewController=_albumViewController;
@property(retain, nonatomic) WCStoryHistoryViewController *storyHistoryViewController; // @synthesize storyHistoryViewController=_storyHistoryViewController;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void).cxx_destruct;
- (void)replaceFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)clickStoryTab;
- (void)clickTimelineTab;
- (void)configViewControllers;
- (void)clickSegmentedControl;
- (void)setupViews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPostsScene:(unsigned int)arg1 AndDefaultTag:(unsigned long long)arg2;
- (id)initWithPostsScene:(unsigned int)arg1 withRequestType:(unsigned int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

