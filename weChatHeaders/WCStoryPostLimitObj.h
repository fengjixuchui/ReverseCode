//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface WCStoryPostLimitObj : NSObject <PBCoding>
{
    unsigned int hadPostedCount;
    unsigned int nextPostPeriod;
    unsigned int lastPostSuccTime;
}

+ (void)initialize;
@property(nonatomic) unsigned int lastPostSuccTime; // @synthesize lastPostSuccTime;
@property(nonatomic) unsigned int nextPostPeriod; // @synthesize nextPostPeriod;
@property(nonatomic) unsigned int hadPostedCount; // @synthesize hadPostedCount;
@property(readonly, copy) NSString *description;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

