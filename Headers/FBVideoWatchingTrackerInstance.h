//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface FBVideoWatchingTrackerInstance : NSObject <NSCoding>
{
    NSString *_videoID;
    unsigned int _currentStartTime;
    unsigned int _currentDuration;
    NSMutableArray *_timeranges;
    unsigned int _totalTimePrefetched;
    unsigned int _totalTime;
    BOOL _firstView;
    unsigned long long _timestamp;
}

@property(nonatomic) BOOL firstView; // @synthesize firstView=_firstView;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (CDStruct_c3b9c2ee)_updateTotalLengthWithPrefetchEndTimeStamp:(unsigned int)arg1;
- (void)_prepareForCalculatingPrefetchingDataWithPrefetchEndTimeStamp:(unsigned int)arg1;
- (void)_mergeWithRange:(struct _NSRange)arg1;
- (CDStruct_c3b9c2ee)pausedAndMergeWithPrefetchEndTimeStamp:(double)arg1;
- (void)updateDuration:(double)arg1;
- (void)updateStartingTime:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVideoID:(id)arg1;
- (id)init;

@end

