//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FavMMUIViewController.h"

#import "FavForwardLogicDelegate.h"
#import "FavSearchControllerDelegate.h"
#import "IFavoritesExt.h"
#import "IFavoritesRepairSvrDataExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FavBaseSearchConfig, FavForwardLogicController, MMFavoritesSearchController, MMTableView, NSMutableArray, NSMutableDictionary, NSString, UIButton, UILabel, UIView;

@interface FavBaseSearchViewController : FavMMUIViewController <UITableViewDelegate, UITableViewDataSource, FavSearchControllerDelegate, IFavoritesExt, FavForwardLogicDelegate, IFavoritesRepairSvrDataExt>
{
    _Bool _bUseFilter;
    _Bool _bEditing;
    _Bool _bHasClickSearchResult;
    _Bool _bHasSearchResult;
    _Bool _bReceiveSearchResult;
    _Bool _bChangeToEditingStatusAnimating;
    unsigned int _searchType;
    unsigned int _entranceTime;
    id <FavBaseSearchViewControllerDelegate> _delegate;
    NSString *_searchTitle;
    NSMutableArray *_arrFilterItems;
    NSMutableArray *_arrFilterDatas;
    NSMutableArray *_arrSelectedItems;
    FavBaseSearchConfig *_searchConfig;
    MMTableView *_tableView;
    UIView *_headerView;
    UIView *_filterFooterView;
    UIButton *_editBtn;
    UIButton *_forwardBtn;
    FavForwardLogicController *_favForwardLogicController;
    UIView *_loadingView;
    UILabel *_loadingLabel;
    unsigned long long _beforeEntranceScene;
    MMFavoritesSearchController *_searchController;
    NSMutableDictionary *_dicCellComponentCache;
}

@property(nonatomic) _Bool bChangeToEditingStatusAnimating; // @synthesize bChangeToEditingStatusAnimating=_bChangeToEditingStatusAnimating;
@property(retain, nonatomic) NSMutableDictionary *dicCellComponentCache; // @synthesize dicCellComponentCache=_dicCellComponentCache;
@property(nonatomic) _Bool bReceiveSearchResult; // @synthesize bReceiveSearchResult=_bReceiveSearchResult;
@property(retain, nonatomic) MMFavoritesSearchController *searchController; // @synthesize searchController=_searchController;
@property(nonatomic) _Bool bHasSearchResult; // @synthesize bHasSearchResult=_bHasSearchResult;
@property(nonatomic) _Bool bHasClickSearchResult; // @synthesize bHasClickSearchResult=_bHasClickSearchResult;
@property(nonatomic) unsigned int entranceTime; // @synthesize entranceTime=_entranceTime;
@property(nonatomic) unsigned long long beforeEntranceScene; // @synthesize beforeEntranceScene=_beforeEntranceScene;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) FavForwardLogicController *favForwardLogicController; // @synthesize favForwardLogicController=_favForwardLogicController;
@property(retain, nonatomic) UIButton *forwardBtn; // @synthesize forwardBtn=_forwardBtn;
@property(retain, nonatomic) UIButton *editBtn; // @synthesize editBtn=_editBtn;
@property(retain, nonatomic) UIView *filterFooterView; // @synthesize filterFooterView=_filterFooterView;
@property(nonatomic) _Bool bEditing; // @synthesize bEditing=_bEditing;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool bUseFilter; // @synthesize bUseFilter=_bUseFilter;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) FavBaseSearchConfig *searchConfig; // @synthesize searchConfig=_searchConfig;
@property(retain, nonatomic) NSMutableArray *arrSelectedItems; // @synthesize arrSelectedItems=_arrSelectedItems;
@property(retain, nonatomic) NSMutableArray *arrFilterDatas; // @synthesize arrFilterDatas=_arrFilterDatas;
@property(retain, nonatomic) NSMutableArray *arrFilterItems; // @synthesize arrFilterItems=_arrFilterItems;
@property(nonatomic) unsigned int searchType; // @synthesize searchType=_searchType;
@property(retain, nonatomic) NSString *searchTitle; // @synthesize searchTitle=_searchTitle;
@property(nonatomic) __weak id <FavBaseSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onRepairCheckFavItemAvailable:(unsigned int)arg1 occupied:(_Bool *)arg2;
- (void)reloadViewAfterDataChanged;
- (void)processSearchResultDone;
- (void)processSearchResult;
- (id)getFavForawrdViewController;
- (void)OnDelFavoritesItem:(unsigned int)arg1;
- (void)OnSearch:(id)arg1;
- (void)onDidEndSearch;
- (void)onWillBeginSearch;
- (void)onShowFavContext:(id)arg1 DataItem:(id)arg2 NeedReport:(_Bool)arg3 FromScene:(unsigned int)arg4 FavIndex:(unsigned int)arg5 SearchText:(id)arg6;
- (void)onSelectFavItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3 fromScene:(unsigned int)arg4 favIndex:(unsigned int)arg5 searchText:(id)arg6 withCell:(id)arg7;
- (void)onSelectFavDataItem:(id)arg1 tableView:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)onSearchCellViewCanShowMenuItems;
- (_Bool)shouldShowSearchResult:(id)arg1;
- (void)resetHeaderView:(id)arg1;
- (id)getCurrentViewController;
- (void)moreAction:(id)arg1;
- (void)showContentAction:(id)arg1;
- (void)forwardAction:(id)arg1;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (unsigned int)entranceScene;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)genFilterCellView:(id)arg1 indexPath:(id)arg2;
- (id)genFilterCellComponent:(long long)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)autoScrollForSearchBar:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)reportSearchData:(unsigned int)arg1 index:(unsigned int)arg2 actionType:(unsigned long long)arg3;
- (void)reportClickFavItemId:(unsigned int)arg1 index:(unsigned int)arg2;
- (void)updateForwardBtnWithCount:(unsigned int)arg1;
- (void)hideSearchBar;
- (void)showSearchBar;
- (void)onMultiSelectEdit;
- (void)OnForwardDone;
- (void)onForward;
- (void)onEdit;
- (void)initFilterFooterView;
- (void)addFilterFooterView;
- (void)forwardFavItemList:(id)arg1;
- (void)forwardDataAndItems:(id)arg1;
- (void)onReturn;
- (void)dealloc;
- (void)initData;
- (void)initLoadingView;
- (void)initHeaderView;
- (id)getReturnBarButton;
- (void)initNavigationBar;
- (void)initTableView;
- (void)initConfig;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

