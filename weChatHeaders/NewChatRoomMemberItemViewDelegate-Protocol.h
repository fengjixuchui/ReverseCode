//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact, NSString, NewChatRoomMemberItemView;

@protocol NewChatRoomMemberItemViewDelegate <NSObject>

@optional
- (void)onLongPressEx:(NewChatRoomMemberItemView *)arg1;
- (void)setShowRemoveMember;
- (void)onShowMoreMember;
- (void)onDeleteMember:(NSString *)arg1;
- (void)onAddMember:(id)arg1;
- (void)openContactInfo:(CContact *)arg1;
@end

