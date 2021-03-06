//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBAccessToken, NSArray, NSString;

@interface FBAuthenticationHandlerResponse : NSObject
{
    FBAccessToken *_accessToken;
    NSString *_loggedInUserFBID;
    NSString *_machineID;
    NSArray *_httpCookies;
    NSString *_actingFBID;
    FBAccessToken *_actingAccessToken;
}

+ (id)authenticationHandlerForResponse:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) FBAccessToken *actingAccessToken; // @synthesize actingAccessToken=_actingAccessToken;
@property(copy, nonatomic) NSString *actingFBID; // @synthesize actingFBID=_actingFBID;
@property(copy, nonatomic) NSArray *httpCookies; // @synthesize httpCookies=_httpCookies;
@property(copy, nonatomic) NSString *machineID; // @synthesize machineID=_machineID;
@property(copy, nonatomic) NSString *loggedInUserFBID; // @synthesize loggedInUserFBID=_loggedInUserFBID;
@property(retain, nonatomic) FBAccessToken *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (void)addRecursiveDescriptionToString:(id)arg1 indentLevel:(int)arg2;
- (id)description;

@end

