//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUITextView.h"

#import "MMInputAccessoryViewDelegate-Protocol.h"

@class MMInputAccessoryView, NSString, UIColor, UIResponder;
@protocol textViewDelegate;

@interface MMTextView : MMUITextView <MMInputAccessoryViewDelegate>
{
    NSString *placeholder;
    _Bool _shouldDrawPlaceholder;
    id <textViewDelegate> m_delegate;
    double _fForceY;
    UIResponder *_overrideNextResponder;
    _Bool _externalKeyboardAttatched;
    MMInputAccessoryView *_accessoryView;
    int _menuButtonType;
    _Bool _hasShowMenu;
    _Bool _hideCursor;
    int _inputScene;
    UIColor *_placeHolderColor;
    double _textViewOriginHeight;
    NSString *_chatUserName;
}

@property(retain, nonatomic) NSString *chatUserName; // @synthesize chatUserName=_chatUserName;
@property(nonatomic) int inputScene; // @synthesize inputScene=_inputScene;
@property(nonatomic) _Bool hideCursor; // @synthesize hideCursor=_hideCursor;
@property(nonatomic) double textViewOriginHeight; // @synthesize textViewOriginHeight=_textViewOriginHeight;
@property(retain, nonatomic) UIColor *placeHolderColor; // @synthesize placeHolderColor=_placeHolderColor;
@property(nonatomic) __weak UIResponder *overrideNextResponder; // @synthesize overrideNextResponder=_overrideNextResponder;
@property(nonatomic) double fForceY; // @synthesize fForceY=_fForceY;
@property(nonatomic) __weak id <textViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder;
- (void).cxx_destruct;
- (void)onAccessoryViewFrameChanged:(struct CGRect)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)changeLine;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)paste:(id)arg1;
- (void)onMenuDidShow:(id)arg1;
- (void)onMenuWillHide:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)nextResponder;
- (_Bool)isExtenalKeyboardAttatched;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)setText:(id)arg1;
- (id)stringByFixEditCrash:(id)arg1;
- (void)_textChanged:(id)arg1;
- (void)_updateShouldDrawPlaceholder;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

