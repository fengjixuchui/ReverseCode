//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class NSMutableArray, NSString;

@interface ApproveAddChatRoomMemberReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long approvenewmsgid; // @dynamic approvenewmsgid;
@property(retain, nonatomic) NSString *inviterusername; // @dynamic inviterusername;
@property(retain, nonatomic) NSString *roomname; // @dynamic roomname;
@property(retain, nonatomic) NSString *ticket; // @dynamic ticket;
@property(retain, nonatomic) NSMutableArray *username; // @dynamic username;

@end

