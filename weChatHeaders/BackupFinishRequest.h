//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BackupReportList, NSString;

@interface BackupFinishRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int calculateSize; // @dynamic calculateSize;
@property(retain, nonatomic) BackupReportList *data; // @dynamic data;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(nonatomic) unsigned int serverCostTotalTime; // @dynamic serverCostTotalTime;
@property(nonatomic) unsigned int serverDataPushSize; // @dynamic serverDataPushSize;
@property(nonatomic) unsigned int serverFileCount; // @dynamic serverFileCount;
@property(nonatomic) unsigned int serverMessageCount; // @dynamic serverMessageCount;
@property(nonatomic) unsigned int serverReadDbtotalTime; // @dynamic serverReadDbtotalTime;
@property(nonatomic) unsigned int serverReadFileTotalTime; // @dynamic serverReadFileTotalTime;
@property(nonatomic) unsigned int serverSessionCount; // @dynamic serverSessionCount;
@property(nonatomic) unsigned int serverVersion; // @dynamic serverVersion;

@end

