//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class NSMutableArray;

@interface MMActionSheetScrollView : UIScrollView
{
    NSMutableArray *_iconViewArray;
}

@property(retain, nonatomic) NSMutableArray *iconViewArray; // @synthesize iconViewArray=_iconViewArray;
- (void).cxx_destruct;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (void)reloadItems:(id)arg1 itemDelegate:(id)arg2;

@end

