//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RecordNodeDataSource-Protocol.h"

@class CMessageWrap, FavoritesItemDataField, NSArray, NSString;

@interface MsgRecordDataWrap : NSObject <RecordNodeDataSource>
{
    CMessageWrap *m_parent;
    FavoritesItemDataField *m_dataItem;
    unsigned int m_index;
    NSArray *m_dataList;
    NSString *m_desc;
}

@property(nonatomic) unsigned int m_index; // @synthesize m_index;
@property(retain, nonatomic) FavoritesItemDataField *m_dataItem; // @synthesize m_dataItem;
@property(retain, nonatomic) CMessageWrap *m_parent; // @synthesize m_parent;
- (void).cxx_destruct;
- (void)IsUrlWeAppThumbPath:(id *)arg1 ThumbUrl:(id *)arg2;
- (_Bool)StartDownload;
- (id)GetSightPath;
- (id)GetFilePath;
- (id)GetFileName;
- (id)GetFileExt;
- (id)GetMusicInfo;
- (_Bool)IsUrlMusicThumbPath:(id *)arg1;
- (id)GetWebPageDomin;
- (_Bool)IsUrlWebPageThumbPath:(id *)arg1;
- (unsigned int)GetVideoDuration;
- (id)GetVideoTitle;
- (_Bool)IsUrlVideoThumbPath:(id *)arg1;
- (unsigned int)GetVoiceFormat;
- (id)GetAudioInfo;
- (id)GetImgArray;
- (unsigned int)GetImgCount;
- (int)GetParentDownloadStatus;
- (int)GetImageDataDownloadStatus;
- (unsigned int)GetImageIndex;
- (id)GetImageSourcePath;
- (id)GetImagePath;
- (id)GetImageLocalID;
- (unsigned int)GetParentLocalID;
- (_Bool)CanbeForwardToWC;
- (_Bool)CanbeForwardToChat;
- (unsigned int)GetDataIndex;
- (id)GetDataItem;
- (id)GetThumbPath;
- (id)GetDataPath;
- (id)GetParent;
- (id)GetDataSrcName;
- (double)GetRecordNodeContentHeight;
- (id)Convert2VideoInfo;
- (id)Convert2AppFileMsg;
- (id)initWithParent:(id)arg1 DataItem:(id)arg2 dataList:(id)arg3 desc:(id)arg4 Index:(unsigned int)arg5;
- (id)initWithParent:(id)arg1 DataItem:(id)arg2 Index:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

