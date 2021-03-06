/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:45 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBSearchResultsModalViewControllerAction.h>
#import <SpringBoard/_MKPlaceViewControllerFeedbackDelegate.h>

@class MKMapItem, NSString;

@interface SBSearchResultsMapsAction : SBSearchResultsModalViewControllerAction <_MKPlaceViewControllerFeedbackDelegate> {

	MKMapItem* _mapItem;

}

@property (nonatomic,retain) MKMapItem * mapItem;                   //@synthesize mapItem=_mapItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)buttonActionTitle;
-(void)loadModalViewControllerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)performButtonAction;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)dealloc;
-(void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2 ;
@end

