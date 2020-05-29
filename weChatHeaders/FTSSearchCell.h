//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AttributeLabel, NSString, UIImageView;

@interface FTSSearchCell : MMTableViewCell
{
    UIImageView *_searchIcon;
    AttributeLabel *_searchLabel;
    NSString *_showPrefix;
    NSString *_showSuffix;
}

- (void).cxx_destruct;
- (void)updateSearchTip:(id)arg1 suffix:(id)arg2;
- (void)updateStatus:(_Bool)arg1;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

