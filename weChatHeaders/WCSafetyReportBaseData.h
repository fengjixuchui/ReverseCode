//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface WCSafetyReportBaseData : MMObject
{
    unsigned int _scanResultCodeType;
}

@property(nonatomic) unsigned int scanResultCodeType; // @synthesize scanResultCodeType=_scanResultCodeType;
@property(readonly, nonatomic) _Bool hasQRUrl;
- (id)reportStr;

@end

