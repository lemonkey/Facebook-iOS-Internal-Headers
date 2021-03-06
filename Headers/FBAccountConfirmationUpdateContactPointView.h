//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class FBPhoneInputView, UIButton, UITextField;

@interface FBAccountConfirmationUpdateContactPointView : UIScrollView
{
    UIButton *_submitButton;
    UITextField *_textFieldEmail;
    FBPhoneInputView *_phoneInputView;
    int _updateMode;
}

@property(nonatomic) int updateMode; // @synthesize updateMode=_updateMode;
@property(retain, nonatomic) FBPhoneInputView *phoneInputView; // @synthesize phoneInputView=_phoneInputView;
@property(retain, nonatomic) UITextField *textFieldEmail; // @synthesize textFieldEmail=_textFieldEmail;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (id)init;
- (id)initWithUpdateMode:(int)arg1;

@end

