//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface BrandProfileFuwu : NSObject <PBCoding>
{
    long long type;
    NSString *title;
    NSString *action;
    NSMutableArray *subFuwuList;
    NSString *_menuVersion;
    NSString *_menuIdxStr;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *menuIdxStr; // @synthesize menuIdxStr=_menuIdxStr;
@property(retain, nonatomic) NSString *menuVersion; // @synthesize menuVersion=_menuVersion;
@property(retain, nonatomic) NSMutableArray *subFuwuList; // @synthesize subFuwuList;
@property(retain, nonatomic) NSString *action; // @synthesize action;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) long long type; // @synthesize type;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

