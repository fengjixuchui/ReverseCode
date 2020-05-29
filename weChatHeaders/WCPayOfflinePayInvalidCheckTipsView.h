//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "ILinkEventExt.h"

@class MMUILabel, NSString, RichTextView, UIButton, UIImageView;

@interface WCPayOfflinePayInvalidCheckTipsView : MMUIView <ILinkEventExt>
{
    id <WCPayOfflinePayInvalidCheckTipsViewDelegate> _delegate;
    UIImageView *_iconImgView;
    MMUILabel *_tipsLabel;
    RichTextView *_richTextView;
    UIButton *_confirmBtn;
}

@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(nonatomic) __weak id <WCPayOfflinePayInvalidCheckTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)confirmBtnPress:(id)arg1;
- (void)setupContentView;
- (id)initInvalidTipsViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

