//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@interface WCPayVerifyTouchLockViewController : WCPayBaseViewController
{
    id <WCPayVerifyTouchLockViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WCPayVerifyTouchLockViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onBackButtonClick;
- (void)clickPassword;
- (void)clickTouchID;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)setupNavigationBar;
- (void)setupView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;

@end

