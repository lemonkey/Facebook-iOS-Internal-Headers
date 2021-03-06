//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UISlider;

@interface FBSettingsSliderSpecifierTableViewCell : UITableViewCell
{
    UISlider *_slider;
    NSString *_title;
    UILabel *_minLabel;
    UILabel *_maxLabel;
}

@property(retain, nonatomic) UILabel *maxLabel; // @synthesize maxLabel=_maxLabel;
@property(retain, nonatomic) UILabel *minLabel; // @synthesize minLabel=_minLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UISlider *slider; // @synthesize slider=_slider;
- (void).cxx_destruct;
- (void)updateTitleValue;
- (void)setSliderValue:(int)arg1;
- (void)setMaxValue:(int)arg1;
- (void)setMinValue:(int)arg1;
- (void)setCellTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

