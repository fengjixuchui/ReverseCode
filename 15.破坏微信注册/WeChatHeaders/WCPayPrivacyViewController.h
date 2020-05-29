//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWebViewController.h"

#import "MMWebViewDelegate-Protocol.h"
#import "WCPayGetPayUserDutyCgiDelegate-Protocol.h"
#import "WCPayPrivacyToolViewDelegate-Protocol.h"
#import "WCPaySetPayUserDutyCgiDelegate-Protocol.h"

@class NSString, WCPayGetPayUserDutyCgi, WCPayPrivacyToolView, WCPaySetPayUserDutyCgi;
@protocol WCPayPrivacyViewControllerDelegate;

@interface WCPayPrivacyViewController : MMWebViewController <MMWebViewDelegate, WCPayPrivacyToolViewDelegate, WCPayGetPayUserDutyCgiDelegate, WCPaySetPayUserDutyCgiDelegate>
{
    id <WCPayPrivacyViewControllerDelegate> _m_privacyDelegate;
    WCPaySetPayUserDutyCgi *_m_setDutyCgi;
    WCPayGetPayUserDutyCgi *_m_getDutyCgi;
    WCPayPrivacyToolView *_m_toolView;
    NSString *_m_htmlString;
}

+ (id)instanceWithDelegate:(id)arg1 html:(id)arg2;
@property(retain, nonatomic) NSString *m_htmlString; // @synthesize m_htmlString=_m_htmlString;
@property(retain, nonatomic) WCPayPrivacyToolView *m_toolView; // @synthesize m_toolView=_m_toolView;
@property(retain, nonatomic) WCPayGetPayUserDutyCgi *m_getDutyCgi; // @synthesize m_getDutyCgi=_m_getDutyCgi;
@property(retain, nonatomic) WCPaySetPayUserDutyCgi *m_setDutyCgi; // @synthesize m_setDutyCgi=_m_setDutyCgi;
@property(nonatomic) __weak id <WCPayPrivacyViewControllerDelegate> m_privacyDelegate; // @synthesize m_privacyDelegate=_m_privacyDelegate;
- (void).cxx_destruct;
- (void)reportWithScene:(unsigned long long)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (void)onWCPayPrivacyToolViewClickAgree:(_Bool)arg1;
- (void)onWCPaySetPayUserDutyCgiError:(id)arg1;
- (void)onWCPaySetPayUserDutyCgiResp:(id)arg1;
- (void)onErrorClose;
- (void)onWCPayGetPayUserDutyCgiError:(id)arg1;
- (void)onWCPayGetPayUserDutyCgiResp:(id)arg1;
- (id)initWithDelegate:(id)arg1 html:(id)arg2 presetUI:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)updateFrame;
- (void)updateToolView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)updateHtmlString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

