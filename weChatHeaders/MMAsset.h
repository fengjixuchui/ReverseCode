//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface MMAsset : MMObject <NSCopying, NSCoding>
{
    _Bool _m_isNeedOriginImage;
    _Bool _m_isFailedFromIcloud;
    _Bool _m_isLoadingFromIcloud;
}

+ (_Bool)isAsset:(id)arg1 CreateWithInSecond:(double)arg2;
+ (struct CGSize)LongImageSizeWithOriginSize:(struct CGSize)arg1;
+ (id)decodeXmlString:(id)arg1;
@property(nonatomic) _Bool m_isLoadingFromIcloud; // @synthesize m_isLoadingFromIcloud=_m_isLoadingFromIcloud;
@property(nonatomic) _Bool m_isFailedFromIcloud; // @synthesize m_isFailedFromIcloud=_m_isFailedFromIcloud;
@property(nonatomic) _Bool m_isNeedOriginImage; // @synthesize m_isNeedOriginImage=_m_isNeedOriginImage;
- (id)imageExifLogInfo;
- (id)getOriginalAssetLocalIdentifier;
- (id)getEditVideoAttr;
- (_Bool)getIsEditedVideo;
- (id)getEditImageAttr;
- (_Bool)getIsEdited;
- (id)getDrawLayerArray;
- (void)setEditedImage:(id)arg1 withDrawLayer:(id)arg2 withEdited:(_Bool)arg3;
- (void)asyncGetMetadata:(CDUnknownBlockType)arg1;
- (void)stopGetBigImageICloudActivity;
- (void)stopICloudActivity;
- (struct CGSize)getImageRatioSize;
- (id)getCreatedDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)asyncGetVideoFileSizeWithBlock:(CDUnknownBlockType)arg1;
- (void)asyncGetVideoAsset:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)asyncGetVideoAssetWithBlock:(CDUnknownBlockType)arg1;
- (id)getVideoUrl;
- (void)getVideoDurationForDisplayWithCompletion:(CDUnknownBlockType)arg1;
- (id)videoDuration;
- (_Bool)isTimeLapseVideo;
- (_Bool)isSlowMotionVideo;
- (_Bool)isVideo;
- (id)getOriginImageDataSize;
- (_Bool)isPictureForIncludeGif:(_Bool)arg1;
- (_Bool)isGif;
- (_Bool)isPicture;
- (id)encodeXmlString;
- (double)longitude;
- (double)latitude;
- (_Bool)hasLocation;
- (id)alAssetReferenceUrl;
- (id)assetUrl;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize)arg1 andResult:(CDUnknownBlockType)arg2;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (id)getThumbnail;
- (id)getThumbImage;
- (void)getHighResolutionImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4 FaceCountBlock:(CDUnknownBlockType)arg5;
- (void)getDisplayImageWithCompressConfig:(id)arg1 ResultBlock:(CDUnknownBlockType)arg2 ErrorBlock:(CDUnknownBlockType)arg3;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4;
- (id)initWithUrl:(id)arg1 IsNeedOrigin:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

