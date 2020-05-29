//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSMutableDictionary;

@interface BrandTimelineReportLogic : MMObject <PBMessageObserverDelegate>
{
    unsigned int m_stayTimeStart;
    unsigned int m_listStayTimeStart;
    unsigned int m_listStayTime;
    NSMutableDictionary *m_dicExposeInfo;
    unsigned int m_enterPos;
    unsigned int m_exitPos;
    unsigned long long m_source;
    NSMutableDictionary *m_dicOftenReadExposeInfo;
    NSMutableDictionary *m_dicOftenReadClickInfo;
    _Bool _jump2OldBizList;
    id <BrandTimelineReportLogicDelegate> _delegate;
}

+ (unsigned int)sessionId;
@property(nonatomic) _Bool jump2OldBizList; // @synthesize jump2OldBizList=_jump2OldBizList;
@property(nonatomic) __weak id <BrandTimelineReportLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportClickOftenReadItemView:(id)arg1;
- (void)reportExposeOftenReadItemViewArr:(id)arg1;
- (void)reportClickItem:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)reportExposeItem:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)reportExposeItemArr:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)sendOftenReadReportReq;
- (void)sendListExposeInfoReportReq;
- (void)reportExitPosWithVisibleItemVewModelArr:(id)arg1;
- (void)reportEnterPosWithVisibleItemVewModelArr:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)endRecordTimelineStayTime;
- (void)abortRecordTimelineStayTime;
- (void)resumeRecordTimelineStayTime;
- (void)pauseRecordTimelineStayTime;
- (void)startRecordTimelineStayTime;
- (void)reportOptype:(unsigned int)arg1 sectionData:(id)arg2 msgIdx:(unsigned int)arg3;
- (void)reportOptype:(unsigned int)arg1 sectionData:(id)arg2;
- (void)reportEnterTimeline:(unsigned int)arg1 notificationCount:(unsigned int)arg2 source:(unsigned long long)arg3;
- (id)init;

@end

