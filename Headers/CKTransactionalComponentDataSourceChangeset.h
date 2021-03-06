//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSIndexSet, NSSet;

@interface CKTransactionalComponentDataSourceChangeset : NSObject
{
    NSDictionary *_updatedItems;
    NSSet *_removedItems;
    NSIndexSet *_removedSections;
    NSDictionary *_movedItems;
    NSIndexSet *_insertedSections;
    NSDictionary *_insertedItems;
    NSDictionary *_userInfo;
}

@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSDictionary *insertedItems; // @synthesize insertedItems=_insertedItems;
@property(readonly, copy, nonatomic) NSIndexSet *insertedSections; // @synthesize insertedSections=_insertedSections;
@property(readonly, copy, nonatomic) NSDictionary *movedItems; // @synthesize movedItems=_movedItems;
@property(readonly, copy, nonatomic) NSIndexSet *removedSections; // @synthesize removedSections=_removedSections;
@property(readonly, copy, nonatomic) NSSet *removedItems; // @synthesize removedItems=_removedItems;
@property(readonly, copy, nonatomic) NSDictionary *updatedItems; // @synthesize updatedItems=_updatedItems;
- (void).cxx_destruct;
- (id)initWithUpdatedItems:(id)arg1 removedItems:(id)arg2 removedSections:(id)arg3 movedItems:(id)arg4 insertedSections:(id)arg5 insertedItems:(id)arg6;

@end

