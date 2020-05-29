//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "WCBaseInfoItemDelegate.h"

@class NSString, WCPayTenpayPasswordCtrlItem;

@interface WCPayLQTOrderConfirmView : MMUIView <WCBaseInfoItemDelegate>
{
    unsigned int _money;
    id <WCPayLQTOrderConfirmViewDelegate> _delegate;
    MMUIView *_contentView;
    WCPayTenpayPasswordCtrlItem *_pwdTextFieldItem;
}

@property(retain, nonatomic) WCPayTenpayPasswordCtrlItem *pwdTextFieldItem; // @synthesize pwdTextFieldItem=_pwdTextFieldItem;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned int money; // @synthesize money=_money;
@property(nonatomic) __weak id <WCPayLQTOrderConfirmViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onPayBtnClick;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)cancelBtnClick;
- (void)hideView;
- (void)showView;
- (void)setupContentView;
- (void)setupSubView;
- (id)initLQTConfirmViewWithFrame:(struct CGRect)arg1 money:(unsigned int)arg2 delegate:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

