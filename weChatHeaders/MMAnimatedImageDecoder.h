//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString, UIImage;

@interface MMAnimatedImageDecoder : MMObject
{
    _Bool _hasDecodeOneLoop;
    _Bool _isSingleFrame;
    int _currentFrameId;
    int _frameCount;
    NSString *_cpKey;
    UIImage *_currentFrameImage;
    double _currentFrameDuration;
    double _scale;
    struct CGSize _imageSize;
}

+ (void)updateMaxWidth:(unsigned int)arg1;
+ (id)animatedDecoderOfData:(id)arg1 cpKey:(id)arg2;
+ (id)animatedDecoderOfData:(id)arg1;
+ (id)framesOfData:(id)arg1 scale:(double)arg2;
+ (id)framesOfData:(id)arg1;
+ (id)animatedImageOfData:(id)arg1;
+ (int)frameCountForImageData:(id)arg1;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) _Bool isSingleFrame; // @synthesize isSingleFrame=_isSingleFrame;
@property(readonly, nonatomic) _Bool hasDecodeOneLoop; // @synthesize hasDecodeOneLoop=_hasDecodeOneLoop;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) int frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) int currentFrameId; // @synthesize currentFrameId=_currentFrameId;
@property(readonly, nonatomic) double currentFrameDuration; // @synthesize currentFrameDuration=_currentFrameDuration;
@property(readonly, nonatomic) UIImage *currentFrameImage; // @synthesize currentFrameImage=_currentFrameImage;
@property(readonly, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
- (void).cxx_destruct;
- (_Bool)seekToNextFrame;
- (_Bool)rewind;

@end

