//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class FBCommentStreamCellStyle, FBMemComment, NSString, NSURL;

@interface FBCommentReplyManagerConfiguration : FBValueObject <NSCopying>
{
    FBMemComment *_comment;
    NSString *_commentGraphQLID;
    NSURL *_fallbackURL;
    NSURL *_storyURLForHeaderExplanation;
    FBCommentStreamCellStyle *_cellStyle;
    FBCommentStreamCellStyle *_darkCellStyle;
}

@property(readonly, copy, nonatomic) FBCommentStreamCellStyle *darkCellStyle; // @synthesize darkCellStyle=_darkCellStyle;
@property(readonly, copy, nonatomic) FBCommentStreamCellStyle *cellStyle; // @synthesize cellStyle=_cellStyle;
@property(readonly, copy, nonatomic) NSURL *storyURLForHeaderExplanation; // @synthesize storyURLForHeaderExplanation=_storyURLForHeaderExplanation;
@property(readonly, copy, nonatomic) NSURL *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
@property(readonly, copy, nonatomic) NSString *commentGraphQLID; // @synthesize commentGraphQLID=_commentGraphQLID;
@property(readonly, copy, nonatomic) FBMemComment *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (id)initWithComment:(id)arg1 commentGraphQLID:(id)arg2 fallbackURL:(id)arg3 storyURLForHeaderExplanation:(id)arg4 cellStyle:(id)arg5 darkCellStyle:(id)arg6;

@end

