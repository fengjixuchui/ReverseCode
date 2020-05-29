//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSString;

@protocol SearchVoiceInputViewControllerDelegate <NSObject>

@optional
- (void)onTextViewAttributeTextChange:(NSAttributedString *)arg1;
- (void)showStreamVoiceInputMaskView:(_Bool)arg1;
- (void)streamVoiceInputViewHeightChanged;
- (void)onVoiceInputEndWithText:(NSString *)arg1;
- (void)onSendTextMsg:(NSString *)arg1;
- (void)streamVoiceInputFullScreenExit;
- (void)streamVoiceInputFullScreenEnter;
- (void)streamVoiceInputFullScreenWillEnter;
- (void)streamVoiceInputBoardWillHideWithText:(NSString *)arg1;
- (void)streamVoiceInputBoardDidHide;
- (void)streamVoiceInputBoardDidShow;
@end

