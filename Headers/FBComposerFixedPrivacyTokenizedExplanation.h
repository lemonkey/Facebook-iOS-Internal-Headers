//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBComposerPrivacySetting, FBTypedNSArrayOfFBComposerPerson, NSString;

@interface FBComposerFixedPrivacyTokenizedExplanation : FBValueObject <NSCopying>
{
    FBComposerPrivacySetting *_fixedPrivacySetting;
    FBTypedNSArrayOfFBComposerPerson *_taggedUsers;
    NSString *_fullDescriptionOfFixedPrivacy;
}

@property(readonly, copy, nonatomic) NSString *fullDescriptionOfFixedPrivacy; // @synthesize fullDescriptionOfFixedPrivacy=_fullDescriptionOfFixedPrivacy;
@property(readonly, copy, nonatomic) FBTypedNSArrayOfFBComposerPerson *taggedUsers; // @synthesize taggedUsers=_taggedUsers;
@property(readonly, copy, nonatomic) FBComposerPrivacySetting *fixedPrivacySetting; // @synthesize fixedPrivacySetting=_fixedPrivacySetting;
- (void).cxx_destruct;
- (id)initWithFixedPrivacySetting:(id)arg1 taggedUsers:(id)arg2 fullDescriptionOfFixedPrivacy:(id)arg3;

@end

