//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IContactRelatedGroupDataExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "QZoneLoginStatusDelegate.h"
#import "WCActionSheetDelegate.h"

@class CContact, ContactRelatedGroupLogic, MMTableViewInfo, NSString, QZoneLoginStatus;

@interface SocialInfomationViewController : MMUIViewController <MMTipsViewControllerDelegate, WCActionSheetDelegate, QZoneLoginStatusDelegate, PBMessageObserverDelegate, IContactRelatedGroupDataExt>
{
    MMTableViewInfo *m_tableViewInfo;
    QZoneLoginStatus *m_qzone;
    NSString *m_cpKeyForSignature;
    _Bool m_isSignatureUnsafe;
    CContact *m_contact;
    ContactRelatedGroupLogic *m_relatedGroupLogic;
}

+ (id)getSourceForContact:(id)arg1 sourceMsg:(id)arg2;
+ (id)getRegionForContact:(id)arg1;
@property(retain, nonatomic) ContactRelatedGroupLogic *m_relatedGroupLogic; // @synthesize m_relatedGroupLogic;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
- (void).cxx_destruct;
- (void)onCRGDataUpdated;
- (void)updateCPState;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onQZoneUrl:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)Call;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onPushRelatedGroupViewController;
- (void)onShowWeiDain;
- (void)OnLinkedInAction;
- (void)OnQQAction;
- (void)reloadTableView;
- (void)addSourceCellAtSection:(struct WCTableViewSectionManager *)arg1;
- (void)addSignatureCellAtSection:(struct WCTableViewSectionManager *)arg1;
- (void)addRegionCellAtSection:(struct WCTableViewSectionManager *)arg1;
- (void)addFriendInfoSection;
- (void)relatedGroupSection;
- (void)addThridAccountSection;
- (id)relatedGroupTitle;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

