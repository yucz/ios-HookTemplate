/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:08 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFolderView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>

@class SBFloatyFolderBackgroundClipView, NSMutableArray, NSMapTable, UITapGestureRecognizer, UIPinchGestureRecognizer, UILongPressGestureRecognizer, SBFolderSettings, NSString;

@interface SBFloatyFolderView : SBFolderView <UIGestureRecognizerDelegate, _UISettingsKeyObserver> {

	SBFloatyFolderBackgroundClipView* _scrollClipView;
	NSMutableArray* _pageBackgroundViews;
	NSMapTable* _pageBackgroundViewsForIconListViews;
	unsigned long long _scalingViewPageIndex;
	UITapGestureRecognizer* _tapGesture;
	UIPinchGestureRecognizer* _pinchGesture;
	UILongPressGestureRecognizer* _longPressGesture;
	SBFolderSettings* _folderSettings;
	CGPoint _preReachabilityTitleOrigin;
	CGPoint _reachabilityTitleOrigin;
	CGPoint _preReachabilityScaleOrigin;
	CGPoint _reachabilityScaleOrigin;
	double _reachabilityYOffset;
	BOOL _layingOutForReachability;
	BOOL _displayingMultipleIconLists;
	BOOL _animatingRotation;

}

@property (assign,getter=isDisplayingMultipleIconLists,nonatomic) BOOL displayingMultipleIconLists;              //@synthesize displayingMultipleIconLists=_displayingMultipleIconLists - In the implementation block
@property (assign,getter=isAnimatingRotation,nonatomic) BOOL animatingRotation;                                  //@synthesize animatingRotation=_animatingRotation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_countOfAdditionalPagesToKeepVisibleInOneDirection;
+(Class)_scrollViewClass;
-(id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 context:(id)arg4 ;
-(double)_offsetToCenterPageControlInSpaceForPageControl;
-(void)handleReachabilityActivated:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)borrowScalingView;
-(void)returnScalingView;
-(void)fadeContentForMagnificationFraction:(double)arg1 ;
-(void)didAnimate;
-(void)willAnimateWithSettings:(id)arg1 ;
-(double)_titleFontSize;
-(void)_configureGestures;
-(BOOL)_shouldConvertToMultipleIconListsInLandscapeOrientation;
-(void)_convertToMultipleIconListsAnimated:(BOOL)arg1 ;
-(void)_addIconListView:(id)arg1 ;
-(BOOL)isDisplayingMultipleIconLists;
-(id)_newPageBackgroundView;
-(void)_removeIconListView:(id)arg1 ;
-(unsigned long long)_countOfAdditionalPagesToKeepAnimatingInOneDirection;
-(BOOL)isAnimatingRotation;
-(void)_convertToSingleIconListAnimated:(BOOL)arg1 ;
-(void)setAnimatingRotation:(BOOL)arg1 ;
-(CGRect)_frameForScalingView;
-(double)_titleVerticalOffsetForOrientation:(long long)arg1 ;
-(CGRect)_pageBackgroundFrameForPageRect:(CGRect)arg1 ;
-(void)_updateIconListContainment:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_currentPageIndexDidChange;
-(void)_updateScalingViewLocation;
-(id)iconListViewAtPoint:(CGPoint)arg1 ;
-(void)setDisplayingMultipleIconLists:(BOOL)arg1 ;
-(void)_handleOutsideTap:(id)arg1 ;
-(BOOL)_tapToCloseGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_handleReachabilityActivatedAnimate:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleReachabilityDectivatedAnimate:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(CGPoint)visibleFolderRelativeImageCenterForIcon:(id)arg1 ;
-(CGRect)_iconListFrameForPageRect:(CGRect)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)locationCountsAsInsideFolder:(CGPoint)arg1 ;
-(BOOL)_showsTitle;
-(void)fadeContentForMinificationFraction:(double)arg1 ;
-(double)reachabilityYOffset;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)_orientationDidChange:(long long)arg1 ;
-(void)_layoutSubviews;
-(void)_handleLongPressGesture:(id)arg1 ;
-(void)_handlePinchGesture:(id)arg1 ;
@end

