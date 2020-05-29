//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString;

@interface MPPageDataCacheItem : NSObject <WCTTableCoding>
{
    unsigned int _expireTime;
    unsigned int _lastModifyTime;
    unsigned int _updateTime;
    unsigned int _templateVersion;
    NSString *_url;
    NSString *_forceUrl;
}

+ (void)__wcdb_MPPageDataCacheItem_index_7:(struct WCTBinding *)arg1;
+ (void)__wcdb_MPPageDataCacheItem_primary_6:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)templateVersion;
+ (void)__wcdb_MPPageDataCacheItem_synthesize_5:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)updateTime;
+ (void)__wcdb_MPPageDataCacheItem_synthesize_4:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)lastModifyTime;
+ (void)__wcdb_MPPageDataCacheItem_synthesize_3:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)expireTime;
+ (void)__wcdb_MPPageDataCacheItem_synthesize_2:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)forceUrl;
+ (void)__wcdb_MPPageDataCacheItem_synthesize_1:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)url;
+ (void)__wcdb_MPPageDataCacheItem_synthesize_0:(struct WCTBinding *)arg1;
+ (CDUnknownBlockType)columnNamed;
+ (const struct All *)allResults;
+ (const struct WCTPropertyList *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
@property(nonatomic) unsigned int templateVersion; // @synthesize templateVersion=_templateVersion;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) unsigned int lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
@property(nonatomic) unsigned int expireTime; // @synthesize expireTime=_expireTime;
@property(copy, nonatomic) NSString *forceUrl; // @synthesize forceUrl=_forceUrl;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)isDataValidWithTemplateVersion:(unsigned int)arg1;
- (id)description;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

