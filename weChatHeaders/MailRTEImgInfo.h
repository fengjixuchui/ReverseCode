//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SimpleImgInfo.h"

@class MailRTEAttachment;

@interface MailRTEImgInfo : SimpleImgInfo
{
    MailRTEAttachment *_attachment;
}

@property(retain, nonatomic) MailRTEAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (id)getImgPath;
- (_Bool)isGifMsg;
- (_Bool)isImgMsg;

@end

