//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface EnterpriseMemberViewItem : MMObject
{
    unsigned int m_uiViewType;
    NSString *m_nsUsrName;
    NSString *m_nsAddUrl;
    NSString *m_nsBrandName;
}

@property(retain, nonatomic) NSString *m_nsBrandName; // @synthesize m_nsBrandName;
@property(retain, nonatomic) NSString *m_nsAddUrl; // @synthesize m_nsAddUrl;
@property(nonatomic) unsigned int m_uiViewType; // @synthesize m_uiViewType;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
- (void).cxx_destruct;

@end

