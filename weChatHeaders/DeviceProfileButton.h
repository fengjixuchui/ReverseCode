//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface DeviceProfileButton : MMObject <PBCoding>
{
    NSString *uiIcon;
    NSString *uiTitle;
    NSString *nsUrl;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *nsUrl; // @synthesize nsUrl;
@property(copy, nonatomic) NSString *uiTitle; // @synthesize uiTitle;
@property(copy, nonatomic) NSString *uiIcon; // @synthesize uiIcon;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

