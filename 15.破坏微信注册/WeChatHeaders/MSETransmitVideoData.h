//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSETransmitData.h"

@class NSString;

@interface MSETransmitVideoData : MSETransmitData
{
    NSString *videoUrl;
    NSString *filePath;
    NSString *thumbPath;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *thumbPath; // @synthesize thumbPath;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl;
- (void).cxx_destruct;
- (const map_f8690629 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end

