//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageWrap, MMTableView;

@protocol ChatViewModelDelegate <NSObject>
- (MMTableView *)getTableView;
- (void)updateTableContentOffsetAnimated:(_Bool)arg1 OffsetDelta:(double)arg2;
- (struct CGRect)getInputToolViewFrame;
- (struct CGRect)getNodeRectInScreen:(unsigned int)arg1;
- (void)reloadNodeWithMessageWrap:(CMessageWrap *)arg1;
@end

