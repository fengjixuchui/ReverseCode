//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCTTableCoding.h"

@class NSData, NSString;

@interface WCCardOfflineCodeInfoData : MMObject <WCTTableCoding>
{
    unsigned int status;
    NSString *cardId;
    NSString *qrCodeId;
    NSData *code;
}

+ (const struct WCTProperty *)status;
+ (void)__wcdb_WCCardOfflineCodeInfoData_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)code;
+ (void)__wcdb_WCCardOfflineCodeInfoData_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)qrCodeId;
+ (void)__wcdb_WCCardOfflineCodeInfoData_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)cardId;
+ (void)__wcdb_WCCardOfflineCodeInfoData_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(retain, nonatomic) NSData *code; // @synthesize code;
@property(retain, nonatomic) NSString *qrCodeId; // @synthesize qrCodeId;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
- (void).cxx_destruct;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

