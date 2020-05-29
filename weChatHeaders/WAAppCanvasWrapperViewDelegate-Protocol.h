//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, WAAppCanvasWrapperView;

@protocol WAAppCanvasWrapperViewDelegate <NSObject>

@optional
- (void)onWrapperView:(WAAppCanvasWrapperView *)arg1 showDatePickerView:(NSDictionary *)arg2;
- (void)onWrapperView:(WAAppCanvasWrapperView *)arg1 showPickerView:(NSDictionary *)arg2;
- (void)onWrapperView:(WAAppCanvasWrapperView *)arg1 dataUpdated:(NSString *)arg2;
- (void)onWrapperView:(WAAppCanvasWrapperView *)arg1 viewStateChanged:(unsigned long long)arg2;
- (void)onWrapperView:(WAAppCanvasWrapperView *)arg1 authorizeSuccess:(NSArray *)arg2;
- (void)onWrapperView:(WAAppCanvasWrapperView *)arg1 openApp:(NSString *)arg2;
- (void)onWrapperView:(WAAppCanvasWrapperView *)arg1 updateHeight:(double)arg2;
@end

