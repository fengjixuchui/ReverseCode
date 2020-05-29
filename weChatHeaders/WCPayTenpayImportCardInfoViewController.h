//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"
#import "WCActionSheetDelegate.h"

@class NSMutableArray, NSString, UIButton;

@interface WCPayTenpayImportCardInfoViewController : WCPayBaseViewController <ILinkEventExt, WCActionSheetDelegate>
{
    _Bool m_bReadAgreement;
    _Bool m_bSubscribeApp;
    UIButton *m_footerButton;
    NSMutableArray *m_arrayInfoGroup;
    id <WCPayTenpayImportCardInfoViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)makeInfoCell:(id)arg1 cellInfo:(struct WCTableViewNormalCellManager *)arg2;
- (void)setDelegate:(id)arg1;
- (void)onNext;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)initFooterView;
- (void)onReadAgreement:(id)arg1;
- (void)onSubscribeAppBtn:(id)arg1;
- (void)reloadTableView;
- (void)viewDidLoad;
- (void)initInfoTemplate;
- (id)getHeaderView;
- (void)initNavigationBar;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

