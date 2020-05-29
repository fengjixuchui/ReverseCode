//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "MMTableViewInfoDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "contactVerifyLogicDelegate-Protocol.h"

@class CContact, CContactVerifyLogic, CMessageWrap, MMTableViewInfo, NSString, SendVerifyMsgLogicController, UITextField;
@protocol SendVerifyMsgViewControllerDelegate;

@interface SendVerifyMsgViewController : MMUIViewController <MMTableViewInfoDelegate, ILinkEventExt, UITextFieldDelegate, contactVerifyLogicDelegate>
{
    CContact *m_oVerifyContact;
    UITextField *m_tfVerifyMsg;
    UITextField *m_tfRemark;
    MMTableViewInfo *m_tableViewInfo;
    _Bool m_bWCOutsider;
    CContactVerifyLogic *m_oContactVerifyLogic;
    NSString *m_recommandRemark;
    _Bool m_bSetRemark;
    _Bool m_bNeedReloadSubviews;
    _Bool m_bNotCancel;
    _Bool m_bHasRemark;
    _Bool m_bHasTag;
    unsigned int m_uiRecomandRemarkScene;
    NSString *m_placeholder;
    _Bool _m_bVerifyToMe;
    int _m_qrCodeAddFriendScene;
    CContact *m_oChatContact;
    CMessageWrap *m_oSourceMsg;
    NSString *recommandRemark;
    SendVerifyMsgLogicController *m_logicVC;
    id <SendVerifyMsgViewControllerDelegate> _m_delegate;
}

@property(nonatomic) _Bool m_bVerifyToMe; // @synthesize m_bVerifyToMe=_m_bVerifyToMe;
@property(nonatomic) int m_qrCodeAddFriendScene; // @synthesize m_qrCodeAddFriendScene=_m_qrCodeAddFriendScene;
@property(nonatomic) __weak id <SendVerifyMsgViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) __weak SendVerifyMsgLogicController *m_logicVC; // @synthesize m_logicVC;
@property(retain, nonatomic) NSString *recommandRemark; // @synthesize recommandRemark;
@property(retain, nonatomic) CMessageWrap *m_oSourceMsg; // @synthesize m_oSourceMsg;
@property(retain, nonatomic) CContact *m_oChatContact; // @synthesize m_oChatContact;
@property(retain, nonatomic) CContact *m_oVerifyContact; // @synthesize m_oVerifyContact;
- (void).cxx_destruct;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)updateWordCount:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)makeTagsCell:(id)arg1 CellInfo:(id)arg2;
- (id)makeRecommBtnView;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)needRecommBtn;
- (void)makeRemarkEdit:(id)arg1;
- (void)initRemarkEdit;
- (void)makeEdit:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)contactSendRequestOk:(id)arg1;
- (void)onContactVerifyFail;
- (void)showTagEdit;
- (void)onVerifyOK;
- (void)onSendVerifyMsg;
- (void)onRemarkShowKeyBoard;
- (void)onRemarkHideKeyBoard;
- (void)onHideKeyBoard;
- (void)onReturn;
- (void)onCancel;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)reloadTableViewInfo;
- (void)opWCOutsider:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

