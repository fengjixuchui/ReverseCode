//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ChatRoomUtils : NSObject
{
}

+ (void)onAddChatroomMemberTooMuch:(id)arg1 delegate:(id)arg2;
+ (void)onNeedUpgradeChatRoom:(id)arg1 delegate:(id)arg2 tag:(int)arg3;
+ (void)openVerifyContactProfile:(id)arg1 forChatRoom:(id)arg2 inViewController:(id)arg3 delegate:(id)arg4;
+ (void)genFildsOfContact:(id)arg1 toContact:(id)arg2;
+ (void)openContactProfile:(id)arg1 ofChatRoomContact:(id)arg2 inViewController:(id)arg3 delegate:(id)arg4 searchScene:(int)arg5;
+ (void)openContactProfile:(id)arg1 ofChatRoomContact:(id)arg2 inViewController:(id)arg3 delegate:(id)arg4;
+ (void)openAddContactWithMemberList:(id)arg1 inViewController:(id)arg2 contactsDataScene:(int)arg3 delegate:(id)arg4;

@end

