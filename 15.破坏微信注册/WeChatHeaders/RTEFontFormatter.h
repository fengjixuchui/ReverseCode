//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RTEBaseFormatter.h"

@interface RTEFontFormatter : RTEBaseFormatter
{
    unsigned int _traits;
}

@property(nonatomic) unsigned int traits; // @synthesize traits=_traits;
- (_Bool)presentInAttributes:(id)arg1;
- (id)removeFromAttributes:(id)arg1;
- (id)applyToAttributes:(id)arg1;
- (struct _NSRange)applicationRangeForRange:(struct _NSRange)arg1 inAttributedString:(id)arg2;
- (id)initWithTraits:(unsigned int)arg1;

@end

