//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;

@protocol MoveWithTouchAlgorithmDelegate <NSObject>

@optional
- (UIView *)onMoveWithTouchAlgorithmRequestView;
- (void)onMoveWithTouchAlgorithnMoveEnd:(struct CGPoint)arg1;
- (void)onMoveWithTouchAlgorithmMoveLong;
- (void)onMoveWithTouchAlgorithmTaped;
- (void)onMoveWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(struct CGPoint)arg1;
- (void)onMoveBeginWithTouchAlgorithmBegin:(struct CGPoint)arg1;
@end

