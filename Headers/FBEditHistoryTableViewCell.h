//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FBEditActionLayout, FBRichTextView, UILabel, UIView;

@interface FBEditHistoryTableViewCell : UITableViewCell
{
    UILabel *_timestampLabel;
    FBRichTextView *_messageLabel;
    FBEditActionLayout *_layout;
    UIView *_divider;
}

+ (id)tableViewCellFooterImage;
+ (id)tableViewCellBackgroundImage;
+ (id)tableViewCellHeaderImage;
+ (id)reuseIdentifier;
@property(readonly, nonatomic) UIView *divider; // @synthesize divider=_divider;
@property(readonly, nonatomic) FBRichTextView *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) FBEditActionLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

