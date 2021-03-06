//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMapTable, NSMutableArray;

@interface FBRsvpSegmentedControl : UIControl
{
    NSMutableArray *_segments;
    NSMutableArray *_separators;
    NSMapTable *_titleTextAttributes;
}

+ (id)defaultTitleTextAttributes;
- (void).cxx_destruct;
- (int)indexOfSegment:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)titleForSegmentAtIndex:(unsigned int)arg1;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (id)titleTextAttributesForState:(unsigned int)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned int numberOfSegments;
- (void)addTarget:(id)arg1 actions:(id)arg2 forControlEvents:(unsigned int)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)_configureSegmentTitlesTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)_appendSegmentWithTitle:(id)arg1 forState:(unsigned int)arg2;
- (void)_appendSegments:(id)arg1 forState:(unsigned int)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithItems:(id)arg1;

@end

