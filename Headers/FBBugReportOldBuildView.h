//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBBugReportCoordinator, UIButton, UIImageView, UILabel;

@interface FBBugReportOldBuildView : UIView
{
    UILabel *_messageLabel;
    UIImageView *_imageView;
    UIView *_horizontalDivider;
    UIView *_verticalDivider;
    FBBugReportCoordinator *_coordinator;
    UIButton *_updateBuildButton;
    UIButton *_reportAnywayButton;
}

@property(retain, nonatomic) UIButton *reportAnywayButton; // @synthesize reportAnywayButton=_reportAnywayButton;
@property(retain, nonatomic) UIButton *updateBuildButton; // @synthesize updateBuildButton=_updateBuildButton;
- (void).cxx_destruct;
- (float)heightForLabelText:(float)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 coordinator:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

