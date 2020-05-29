//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, ScanItemBase, ScanProductItem;

@protocol IScanBookMgrExt <NSObject>

@optional
- (void)OnGetRemoteProductItem:(ScanProductItem *)arg1 QRCodeUrl:(NSString *)arg2 Error:(int)arg3;
- (void)OnSendSBImageError:(int)arg1;
- (void)OnSendSBImage:(unsigned int)arg1 ScanItem:(ScanItemBase *)arg2 ImageType:(int)arg3;
@end

