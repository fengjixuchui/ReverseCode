//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavoritesCDNInfo, FavoritesItem, FavoritesItemDataField, NSArray, NSMutableArray;

@protocol FavoritesUploadProccessorDelegate <NSObject>
- (void)updateFavoritesItemCDNInfo:(NSMutableArray *)arg1 withDataList:(NSArray *)arg2;
- (_Bool)updateCdnInfo:(FavoritesCDNInfo *)arg1;
- (void)reUploadFavItem:(FavoritesItem *)arg1;
- (void)updateCdnInfoInDataList:(NSArray *)arg1;
- (void)onUsedCapacityUpdate:(unsigned long long)arg1;
- (FavoritesCDNInfo *)getNextUploadCdnInfoByLocalItemId:(unsigned int)arg1;
- (void)saveCdnInfoInData:(FavoritesItemDataField *)arg1 forItem:(FavoritesItem *)arg2 isThumb:(_Bool)arg3 withState:(int)arg4;
- (void)onProccessItem:(FavoritesItem *)arg1 inType:(unsigned long long)arg2 ErrCode:(int)arg3;
@end

