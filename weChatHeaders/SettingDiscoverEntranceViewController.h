//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingBaseViewController.h"

#import "MMWebViewDelegate.h"

@class DelaySwitchSettingLogic, NSString, UISwitch;

@interface SettingDiscoverEntranceViewController : SettingBaseViewController <MMWebViewDelegate>
{
    struct map<unsigned long, unsigned int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned int>>> m_mapRowToRowType;
    double settingDiscoverEntranceViewCellHeight;
    double settingDiscoverEntranceViewCellContentLeftMargin;
    double settingDiscoverEntranceViewCellIconSize;
    double settingDiscoverEntranceViewCellIconLabelInterval;
    double settingDiscoverEntranceViewCellLabelWidth;
    double settingDiscoverEntranceViewCellWidth;
    double settingDiscoverEntranceViewCellContentRightMargin;
    _Bool _hasChangedSwitch;
    DelaySwitchSettingLogic *_delaySwitchLogic;
    UISwitch *_searchSwitch;
}

@property(retain, nonatomic) UISwitch *searchSwitch; // @synthesize searchSwitch=_searchSwitch;
@property(nonatomic) _Bool hasChangedSwitch; // @synthesize hasChangedSwitch=_hasChangedSwitch;
@property(retain, nonatomic) DelaySwitchSettingLogic *delaySwitchLogic; // @synthesize delaySwitchLogic=_delaySwitchLogic;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)showSearchPrivacyWebviewForEU;
- (id)onWebViewPassParams:(id)arg1;
- (void)onSwitchChanged:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)makeSwitchCell:(id)arg1 row:(unsigned long long)arg2;
- (void)reloadData;
- (void)resetRowType;
- (id)tableView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
