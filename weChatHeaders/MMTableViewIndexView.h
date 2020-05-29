//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMUIViewControllerExt.h"

@class MMTableView, NSArray, NSMutableArray, NSString, UIImageView, UILabel;

@interface MMTableViewIndexView : MMUIView <MMUIViewControllerExt>
{
    MMTableView *_mmtableView;
    id <MMTableViewIndexViewDelegate> _delegate;
    NSArray *_indexTitles;
    NSMutableArray *_indexItems;
    _Bool _isTouching;
    struct CGRect _savedTableViewFrame;
    struct UIEdgeInsets _savedTableViewInsets;
    UIImageView *_indexShape;
    UILabel *_indexShapeLabel;
    long long _currentIndex;
}

- (void).cxx_destruct;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (void)hideContactIndexShape;
- (void)showContactIndexShape:(long long)arg1;
- (void)handleTouchToIndex:(long long)arg1;
- (void)endTouches;
- (void)handleTouches:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)scrollToSectionIndex:(long long)arg1;
- (void)totallyReloadView;
- (void)reloadIndexView;
- (struct UIEdgeInsets)getTableViewContentInset;
- (void)reloadView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithTableView:(id)arg1 withDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

