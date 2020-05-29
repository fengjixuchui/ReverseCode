//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RTEBaseFormatterProtocol.h"

@class NSString;

@interface RTEBaseFormatter : NSObject <RTEBaseFormatterProtocol>
{
}

- (_Bool)shouldApplyAttributesToAttributedString:(id)arg1 atRange:(struct _NSRange)arg2;
- (_Bool)presentInAttributedString:(id)arg1 atRange:(struct _NSRange)arg2;
- (id)toggleInAttributes:(id)arg1;
- (struct _NSRange)toggleInAttributedString:(id)arg1 atRange:(struct _NSRange)arg2;
- (struct _NSRange)removeAttributesFromAttributedString:(id)arg1 atRange:(struct _NSRange)arg2;
- (struct _NSRange)applyAttributesToAttributedString:(id)arg1 atRange:(struct _NSRange)arg2;
- (_Bool)presentInAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

