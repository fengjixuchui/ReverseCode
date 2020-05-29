//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMessageViewModel.h"

#import "IMsgExt-Protocol.h"

@interface CommonMessageViewModel : BaseMessageViewModel <IMsgExt>
{
    unsigned long long m_bgBubbleType;
    unsigned long long m_maskBubbleType;
    _Bool m_isShowChatRoomDisplayName;
}

- (id)accessibilityDescription;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (struct CGSize)measure:(struct CGSize)arg1;
- (id)maskBubbleInfo;
- (id)bgBubbleInfo;
- (_Bool)isShowSendFailView;
- (_Bool)isShowSendingView;
- (_Bool)isShowAppMessageBlockButton;
- (id)sourceTag;
- (id)sourceIcon;
- (id)sourceTitle;
- (_Bool)shouldShowSourceViewInContent;
- (_Bool)isShowSourceView;
- (_Bool)calIsShowChatRoomDisplayName;
- (_Bool)isShowChatRoomDisplayName;
- (_Bool)isShowHeadImage;
- (void)updateChatContact:(id)arg1;
- (void)dealloc;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

@end

