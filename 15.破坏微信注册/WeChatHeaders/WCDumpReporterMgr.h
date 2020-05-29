//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface WCDumpReporterMgr : NSObject
{
    NSObject<OS_dispatch_queue> *_dumpReporterQueue;
    NSMutableArray *_uploadedIssueArray;
    NSMutableArray *_uploadingIssueArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *uploadingIssueArray; // @synthesize uploadingIssueArray=_uploadingIssueArray;
@property(retain, nonatomic) NSMutableArray *uploadedIssueArray; // @synthesize uploadedIssueArray=_uploadedIssueArray;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dumpReporterQueue; // @synthesize dumpReporterQueue=_dumpReporterQueue;
- (void).cxx_destruct;
- (void)handleReportLagIssue:(id)arg1 success:(_Bool)arg2;
- (void)uploadLaunchBlockWhenSafeMode;
- (void)uploadDumpOnIPXX:(id)arg1;
- (void)uploadDumpWithDate:(id)arg1 withReprotCntOneTime:(unsigned long long)arg2;
- (void)uploadDumpWithDate:(id)arg1;
- (void)uploadAllDump;
- (void)p_updateUploadCountWithIssueArray:(id)arg1;
- (void)autoUploadSpecificDump;
- (void)autoUploadDump;
- (_Bool)currentNetworkCanUpload;
- (_Bool)shouldAutoUpload;
- (void)onEnterBackGround;
- (void)onEnterForgeGround;
- (void)dealloc;
- (void)p_handleOOMDumpFile;
- (id)init;

@end

