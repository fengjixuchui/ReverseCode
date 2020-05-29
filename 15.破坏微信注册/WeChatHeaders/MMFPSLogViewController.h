//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UISwitch, UITextView;

@interface MMFPSLogViewController : MMUIViewController <UITextViewDelegate, UIAlertViewDelegate>
{
    UILabel *m_switchLabel;
    UISwitch *m_checkSwitchView;
    UIButton *m_clearButton;
    UIButton *m_sendButton;
    UITextView *m_logTextView;
}

- (void).cxx_destruct;
- (void)sendDataToFileHelper;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showclearFPSLogAlert;
- (void)onSwitchValueChange:(id)arg1;
- (void)clearFPSLog;
- (void)setupBaseView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

