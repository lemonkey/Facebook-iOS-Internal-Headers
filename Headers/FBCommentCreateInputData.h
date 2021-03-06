//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBCommentCreateInputDataMessage, NSArray, NSString;

@interface FBCommentCreateInputData : FBGraphQLInput
{
    NSString *_clientMutationId;
    NSString *_actorId;
    NSString *_feedbackId;
    FBCommentCreateInputDataMessage *_message;
    NSArray *_attachments;
    NSArray *_tracking;
}

@property(copy, nonatomic) NSArray *tracking; // @synthesize tracking=_tracking;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(copy, nonatomic) FBCommentCreateInputDataMessage *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *feedbackId; // @synthesize feedbackId=_feedbackId;
@property(copy, nonatomic) NSString *actorId; // @synthesize actorId=_actorId;
@property(copy, nonatomic) NSString *clientMutationId; // @synthesize clientMutationId=_clientMutationId;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

