//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBComposerFlowDelegate-Protocol.h"
#import "FBKeyboardObserverDelegate-Protocol.h"
#import "FBNearbyPlacesNearbyLocationCollectionViewCellDelegate-Protocol.h"
#import "FBPlacesCategoryMenuViewDelegate-Protocol.h"
#import "FBPlacesSearchViewDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class CLLocation, FBComposerTapHandler, FBGraphSearchStructuredText, FBGraphSearchSuggestionsDataSource, FBKeyboardFocusedViewDisplayer, FBKeyboardObserver, FBNearbyPlacesHereCardDataSource, FBNearbyPlacesLoggerHelper, FBNearbyPlacesTypeaheadCache, FBPlacesMapTableLocationController, FBPlacesNearbySearchDataSource, FBPlacesNearbySearchDownloadRequest, FBPlacesSearchHistoryDataSource, FBPlacesSearchSuggestionData, FBPlacesSearchView, FBTransientViewStateManager, FBUserSession, NSNumber, NSString, NSTimer, UITextField;
@protocol FBPlacesSearchControllerDelegate;

@interface FBPlacesSearchController : NSObject <FBPlacesCategoryMenuViewDelegate, FBKeyboardObserverDelegate, UITextFieldDelegate, UITableViewDelegate, UIScrollViewDelegate, UICollectionViewDelegate, FBPlacesSearchViewDelegate, FBNearbyPlacesNearbyLocationCollectionViewCellDelegate, FBComposerFlowDelegate>
{
    FBKeyboardFocusedViewDisplayer *_keyboardFocusedViewDisplayer;
    FBKeyboardObserver *_keyboardObserver;
    BOOL _hasMobileGraphSearch;
    FBGraphSearchSuggestionsDataSource *_graphSearchSuggestionsDataSource;
    UITextField *_activeField;
    NSString *_lastSearchQuery;
    FBTransientViewStateManager *_viewStateManager;
    FBGraphSearchStructuredText *_structuredText;
    id _checkinSuggestionToken;
    FBNearbyPlacesHereCardDataSource *_nearbyPlacesDataSource;
    FBComposerTapHandler *_composerTapHandler;
    unsigned int _composerState;
    FBNearbyPlacesTypeaheadCache *_typeaheadCache;
    FBPlacesMapTableLocationController *_locationController;
    FBPlacesSearchSuggestionData *_searchData;
    FBNearbyPlacesLoggerHelper *_nearbyPlacesLoggerHelper;
    BOOL _didFetchHereCard;
    BOOL _isInitialView;
    BOOL _mapTTILogPending;
    id <FBPlacesSearchControllerDelegate> _delegate;
    CLLocation *_userLocation;
    CLLocation *_location;
    FBPlacesSearchView *_placesSearchView;
    int _mode;
    FBPlacesSearchHistoryDataSource *_historyDataSource;
    FBPlacesNearbySearchDataSource *_typeaheadDataSource;
    FBPlacesNearbySearchDownloadRequest *_typeaheadRequest;
    NSTimer *_typeaheadTimer;
    FBUserSession *_session;
    NSString *_queryString;
    NSNumber *_searchRadius;
    double _lastInitiatedSearchTime;
}

@property(nonatomic) BOOL mapTTILogPending; // @synthesize mapTTILogPending=_mapTTILogPending;
@property(nonatomic) double lastInitiatedSearchTime; // @synthesize lastInitiatedSearchTime=_lastInitiatedSearchTime;
@property(copy, nonatomic) NSNumber *searchRadius; // @synthesize searchRadius=_searchRadius;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSTimer *typeaheadTimer; // @synthesize typeaheadTimer=_typeaheadTimer;
@property(retain, nonatomic) FBPlacesNearbySearchDownloadRequest *typeaheadRequest; // @synthesize typeaheadRequest=_typeaheadRequest;
@property(retain, nonatomic) FBPlacesNearbySearchDataSource *typeaheadDataSource; // @synthesize typeaheadDataSource=_typeaheadDataSource;
@property(retain, nonatomic) FBPlacesSearchHistoryDataSource *historyDataSource; // @synthesize historyDataSource=_historyDataSource;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) BOOL isInitialView; // @synthesize isInitialView=_isInitialView;
@property(readonly, nonatomic) FBPlacesSearchView *placesSearchView; // @synthesize placesSearchView=_placesSearchView;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) CLLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(nonatomic) __weak id <FBPlacesSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)composerCompletedWithResult:(id)arg1;
- (void)nearbyPlacesNearbyLocationCollectionViewCellDidTapOnShareButton:(id)arg1;
- (void)nearbyPlacesNearbyLocationCollectionViewCellDidTapOnCheckinButton:(id)arg1;
- (void)nearbyPlacesNearbyLocationCollectionViewCellDidTapOnLikeButton:(id)arg1;
- (void)nearbyPlacesNearbyLocationCollectionViewCellDidTapOnPageView:(id)arg1;
- (void)placesSearchViewDidTapOnTurnOnLocationServicesButton;
- (void)placesSearchViewDidTapOnNearbyCardLikeButton;
- (void)placesSearchViewDidTapOnNearbyCardShareButton;
- (void)placesSearchViewDidTapOnNearbyCardCheckinButton;
- (void)placesSearchViewDidTapOnNearbyCardPageView;
- (BOOL)accessibilityPerformEscape;
- (BOOL)_toggleLikeForPlaceIndex:(int)arg1;
- (void)_nearbyPlaceDidTapOnShareButton:(unsigned int)arg1;
- (void)_nearbyPlaceDidTapOnCheckinButton:(unsigned int)arg1;
- (void)_nearbyPlaceDidTapOnNearbyCardPageView:(unsigned int)arg1;
- (void)_logHereCardEvent:(id)arg1 placeIndex:(int)arg2;
- (CDUnknownBlockType)_hereCardQueryFailureBlock;
- (CDUnknownBlockType)_hereCardQuerySuccessBlock;
- (void)_cancelHereCardPerfEvent;
- (void)_cancelGraphQLQueryToken:(id)arg1;
- (void)_queryNearbyPlaceWithUserLocation;
- (void)_updateWithSelectLocation:(id)arg1;
- (void)_updateSearchResultsView;
- (void)_sendSearchNetworkRequest:(id)arg1 isCitySearch:(BOOL)arg2;
- (void)_fetchFailWithError:(id)arg1 isCitySearch:(BOOL)arg2;
- (void)_handleDetailResponse:(id)arg1 query:(id)arg2 searchLocation:(id)arg3 isCitySearch:(BOOL)arg4;
- (void)_performSearch:(BOOL)arg1;
- (void)_performTypeaheadSearch;
- (BOOL)updateResultFromCacheWithQuery:(id)arg1 searchLocation:(id)arg2;
- (void)_scheduleSearchTimeoutTimer;
- (void)_dismissKeyboard;
- (void)_finishWithPageFBID:(id)arg1 indexRow:(int)arg2 pageSessionId:(id)arg3;
- (void)_finishWithSearchData:(id)arg1 addToHistory:(BOOL)arg2;
- (void)_updateTableViewHiddenStatesForMode;
- (void)_updateDistanceForVisibleLabels:(id)arg1;
- (id)_typeaheadPerfEventNameForIsCitySearch:(BOOL)arg1;
- (void)_markTypeaheadPerfStopEventWithIsCitySearch:(BOOL)arg1;
- (void)_markTypeaheadPerfStartEventWithIsCitySearch:(BOOL)arg1;
- (void)_markTypeaheadPerfCancelEvent;
- (void)_cancelTypeaheadRequest;
- (unsigned int)_searchTypeForDatasourceMode:(unsigned int)arg1;
- (BOOL)analyticsRequiresNetworkContent;
- (id)analyticsModule;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_logPlaceEntitySelection:(id)arg1 overallRow:(unsigned int)arg2 sectionRow:(int)arg3 pageSessionID:(id)arg4;
- (void)_logCategorySelectionWithMapRegion:(id)arg1 overallRow:(int)arg2 sectionRow:(int)arg3 fromHistoryTable:(BOOL)arg4;
- (void)logTypeaheadSearchResultListImpressionIfVisible;
- (void)placesCategoryMenuViewDidSelectCategory:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)_cityTextFieldDidChange:(id)arg1;
- (void)_textFieldDidChange:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)updateSearchViewWithLocationAccessFail;
- (void)updateSearchViewWithLocationAccessSucceed;
- (void)resetSearchView;
- (void)showKeyboard:(BOOL)arg1;
- (void)configurePlacesSearchViewWithFrame:(struct CGRect)arg1 searchPlaceholderText:(id)arg2;
- (void)dealloc;
- (void)invalidateSearchController;
- (id)initWithSession:(id)arg1 location:(id)arg2 searchRadius:(id)arg3 locationController:(id)arg4 isInitialView:(BOOL)arg5 userHasMobileGraphSearch:(BOOL)arg6 loggerHelper:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

