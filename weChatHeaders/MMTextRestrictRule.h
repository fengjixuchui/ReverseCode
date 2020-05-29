//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "UITextFieldDelegate.h"

@class NSString;

@interface MMTextRestrictRule : MMObject <UITextFieldDelegate>
{
    unsigned long long _maxLength;
    long long _restricyType;
    id <UITextFieldDelegate> _m_delegate;
    long long _restrictType;
}

+ (id)textRestrictRuleWithType:(long long)arg1;
+ (struct _NSRange)markedTextRangeToNSRange:(id)arg1;
@property(nonatomic) long long restrictType; // @synthesize restrictType=_restrictType;
@property(nonatomic) __weak id <UITextFieldDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(readonly, nonatomic) long long restricyType; // @synthesize restricyType=_restricyType;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)restrictMaxLength:(id)arg1;
- (void)textDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

