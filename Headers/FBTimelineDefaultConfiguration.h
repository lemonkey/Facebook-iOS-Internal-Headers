//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBTimelineConfiguration-Protocol.h"

@class NSString;

@interface FBTimelineDefaultConfiguration : NSObject <FBTimelineConfiguration>
{
    BOOL _hasPullToRefreshView;
    BOOL _beginSyncingDataInInit;
    unsigned int _initialDisplayOptions;
    NSString *_topItemType;
    NSString *_analyticsUUID;
    NSString *_analyticsEventSource;
    NSString *_actionType;
}

+ (id)configurationWithDisplayOptions:(unsigned int)arg1 analyticsUUID:(id)arg2 topItemType:(id)arg3 hasPullToRefreshView:(BOOL)arg4;
@property(copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(nonatomic) BOOL beginSyncingDataInInit; // @synthesize beginSyncingDataInInit=_beginSyncingDataInInit;
@property(nonatomic) BOOL hasPullToRefreshView; // @synthesize hasPullToRefreshView=_hasPullToRefreshView;
@property(copy, nonatomic) NSString *analyticsEventSource; // @synthesize analyticsEventSource=_analyticsEventSource;
@property(copy, nonatomic) NSString *analyticsUUID; // @synthesize analyticsUUID=_analyticsUUID;
@property(copy, nonatomic) NSString *topItemType; // @synthesize topItemType=_topItemType;
@property(nonatomic) unsigned int initialDisplayOptions; // @synthesize initialDisplayOptions=_initialDisplayOptions;
- (void).cxx_destruct;
- (BOOL)isEntityCard;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

