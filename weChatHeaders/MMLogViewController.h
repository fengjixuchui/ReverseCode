//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILogReportExt.h"
#import "MMPickerViewDelegate.h"

@class MMPickerView, MMProgressView, MMTableViewInfo, NSMutableArray, NSString, UILabel;

@interface MMLogViewController : MMUIViewController <MMPickerViewDelegate, ILogReportExt>
{
    MMProgressView *m_progressView;
    UILabel *m_labelProgress;
    MMTableViewInfo *m_tableViewInfo;
    long long m_curDateIndex;
    unsigned long long m_uploadStatus;
    _Bool _bUseAirDrop;
    _Bool _isFromCustomer;
    NSString *_dateStr;
    MMPickerView *_pickView;
    NSMutableArray *_dateList;
}

@property(nonatomic) _Bool isFromCustomer; // @synthesize isFromCustomer=_isFromCustomer;
@property(retain, nonatomic) NSMutableArray *dateList; // @synthesize dateList=_dateList;
@property(retain, nonatomic) MMPickerView *pickView; // @synthesize pickView=_pickView;
@property(copy, nonatomic) NSString *dateStr; // @synthesize dateStr=_dateStr;
@property(nonatomic) _Bool bUseAirDrop; // @synthesize bUseAirDrop=_bUseAirDrop;
- (void).cxx_destruct;
- (void)UploadSuccess;
- (void)UploadFail;
- (void)OnResponse:(id)arg1;
- (void)viewDidLoad;
- (void)onBack;
- (void)onDatePicker;
- (void)initDates;
- (void)MMPickerViewDidCancel;
- (void)MMPickerViewDidChooseRow:(long long)arg1 atSession:(long long)arg2;
- (void)onSwitchValueChange:(id)arg1;
- (void)dealloc;
- (id)getFooterView;
- (void)reloadTableViewData;
- (id)getHeaderView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)onShowLog;
- (void)onFinish;
- (void)onReportLog;
- (void)setUploadSuc;
- (void)setUploadFail;
- (void)setProgress:(id)arg1;
- (id)initWithDateString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

