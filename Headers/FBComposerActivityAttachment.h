//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBItemView_DEPRECATED, NSAttributedString, UIAccessibilityElement, UIImageView, UITapGestureRecognizer;
@protocol FBComposerActivityAttachmentViewListener;

@interface FBComposerActivityAttachment : UIView
{
    FBItemView_DEPRECATED *_contentView;
    UIImageView *_backgroundImageView;
    UIImageView *_removeButtonView;
    id <FBComposerActivityAttachmentViewListener> _viewListener;
    UITapGestureRecognizer *_removeButtonTapRecognizer;
    UIAccessibilityElement *_accessibilityContentView;
    UIAccessibilityElement *_accessibilityRemoveButtonView;
    NSAttributedString *_title;
    NSAttributedString *_subtitle;
    NSAttributedString *_secondarySubtitle;
    UIView *_thumbnailView;
}

@property(copy, nonatomic) UIView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(copy, nonatomic) NSAttributedString *secondarySubtitle; // @synthesize secondarySubtitle=_secondarySubtitle;
@property(copy, nonatomic) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (void)updateAccessibilityElementsLayout;
- (void)layoutSubviews;
- (void)didTapRemoveButton;
- (void)dealloc;
- (id)initWithViewListener:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

