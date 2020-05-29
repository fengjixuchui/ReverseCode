//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSString;

@interface WCWidgetEventItem : MMObject
{
    unsigned int touchInterval;
    long long eventType;
    long long eventSubType;
    NSString *widgetName;
    NSString *widgetIdentify;
    NSString *action;
    struct CGPoint touchBeginPoint;
    struct CGPoint touchEndPoint;
}

+ (void)initialize;
@property(nonatomic) unsigned int touchInterval; // @synthesize touchInterval;
@property(nonatomic) struct CGPoint touchEndPoint; // @synthesize touchEndPoint;
@property(nonatomic) struct CGPoint touchBeginPoint; // @synthesize touchBeginPoint;
@property(retain, nonatomic) NSString *action; // @synthesize action;
@property(retain, nonatomic) NSString *widgetIdentify; // @synthesize widgetIdentify;
@property(retain, nonatomic) NSString *widgetName; // @synthesize widgetName;
@property(nonatomic) long long eventSubType; // @synthesize eventSubType;
@property(nonatomic) long long eventType; // @synthesize eventType;
- (void).cxx_destruct;
- (id)formatPointToIntString:(struct CGPoint)arg1;
- (id)getTouchEndPoint;
- (id)getTouchBeginPoint;
- (id)getWidgeName;
- (id)description;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end

