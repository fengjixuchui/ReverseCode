//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SecurityDialogButtonInfo;

@interface PaySecurityDialogInfo : NSObject
{
    NSString *_title;
    NSString *_logo;
    NSString *_wording;
    SecurityDialogButtonInfo *_left_btn;
    SecurityDialogButtonInfo *_right_btn;
}

+ (id)GenFromDictionary:(id)arg1;
@property(retain) SecurityDialogButtonInfo *right_btn; // @synthesize right_btn=_right_btn;
@property(retain) SecurityDialogButtonInfo *left_btn; // @synthesize left_btn=_left_btn;
@property(retain) NSString *wording; // @synthesize wording=_wording;
@property(retain) NSString *logo; // @synthesize logo=_logo;
@property(retain) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

