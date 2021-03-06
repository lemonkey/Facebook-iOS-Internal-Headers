//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol NSCopying;

@interface FBPrivacyPickerOption : NSObject
{
    unsigned short _optionType;
    id <NSCopying> _identifier;
    NSString *_title;
}

+ (id)privacyPickerOptionWithTitle:(id)arg1 optionType:(unsigned short)arg2;
+ (void)initialize;
+ (unsigned int)_glyphNameForPrivacyPickerOptionType:(unsigned short)arg1;
@property(nonatomic) unsigned short optionType; // @synthesize optionType=_optionType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) id <NSCopying> identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)glyph;

@end

