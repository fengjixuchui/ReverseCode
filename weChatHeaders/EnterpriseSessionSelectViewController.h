//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IEnterpriseGroupMgrExt.h"
#import "IEnterpriseSessionMgrExt.h"
#import "MMWebViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CContact, CEnterpriseContact, MMScrollView, MMTableView, MMUIAlertView, NSString, UIAlertController;

@interface EnterpriseSessionSelectViewController : MMUIViewController <MMWebViewDelegate, UITableViewDataSource, UITableViewDelegate, IEnterpriseGroupMgrExt, IEnterpriseSessionMgrExt>
{
    unsigned int _scene;
    CContact *_brandContact;
    CEnterpriseContact *_selectedContact;
    MMTableView *_tableView;
    MMScrollView *_emptyView;
    MMUIAlertView *_selectAlertView;
    UIAlertController *_selectAlertController;
    id <EnterpriseSessionSelectViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <EnterpriseSessionSelectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)confirmSelect;
- (void)cancelSelect:(id)arg1;
- (void)createChatroom:(id)arg1;
- (void)createSingleChat:(id)arg1;
- (void)openCreateChat;
- (void)selectContact:(id)arg1;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)makeNewSessionCell:(id)arg1;
- (void)onCreateEnterpriseGroup:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)onEnterpriseSessionChanged;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onWebViewWillClose:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initTableView;
- (void)initView;
- (void)dealloc;
- (id)initWithChatSubBrandContact:(id)arg1 scene:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

