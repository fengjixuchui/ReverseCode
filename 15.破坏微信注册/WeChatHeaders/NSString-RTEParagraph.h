//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (RTEParagraph)
- (_Bool)isEndOfParagraphAtIndex:(unsigned long long)arg1;
- (_Bool)isEndOfParagraphBeforeIndex:(unsigned long long)arg1;
- (_Bool)isStartOfParagraphAtIndex:(unsigned long long)arg1;
- (_Bool)isEmptyParagraphAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfParagraphs;
- (struct _NSRange)rangeOfParagraphAtIndex:(unsigned long long)arg1;
- (_Bool)indexIsAtBeginningOfParagraph:(unsigned long long)arg1;
- (struct _NSRange)rangeOfParagraphsContainingRange:(struct _NSRange)arg1 parBegIndex:(unsigned long long *)arg2 parEndIndex:(unsigned long long *)arg3;
@end

