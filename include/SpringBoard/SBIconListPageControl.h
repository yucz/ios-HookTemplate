/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:05 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIPageControl.h>

@protocol SBIconListPageControlDelegate;
@class SBIconPageIndicatorImageSetResult, SBIconPageIndicatorImageSetCache;

@interface SBIconListPageControl : UIPageControl {

	id<SBIconListPageControlDelegate> _delegate;
	BOOL _hasSetLegibility;
	BOOL _shouldShowSearchIndicator;
	double _cachedDefaultHeight;
	SBIconPageIndicatorImageSetResult* _pageIndicatorImageSets;
	SBIconPageIndicatorImageSetResult* _searchIndicatorImageSets;
	BOOL _legibilityEnabled;
	SBIconPageIndicatorImageSetCache* _imageSetCache;

}

@property (assign,nonatomic) BOOL shouldShowSearchIndicator;                                 //@synthesize shouldShowSearchIndicator=_shouldShowSearchIndicator - In the implementation block
@property (assign,nonatomic) BOOL legibilityEnabled;                                         //@synthesize legibilityEnabled=_legibilityEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconListPageControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBIconPageIndicatorImageSetCache * imageSetCache;               //@synthesize imageSetCache=_imageSetCache - In the implementation block
-(id)_searchIndicatorImage:(BOOL)arg1 ;
-(id)_iconListIndicatorImage:(BOOL)arg1 ;
-(void)_setIndicatorImage:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 ;
-(SBIconPageIndicatorImageSetCache *)imageSetCache;
-(void)setImageSetCache:(SBIconPageIndicatorImageSetCache *)arg1 ;
-(BOOL)shouldShowSearchIndicator;
-(void)setShouldShowSearchIndicator:(BOOL)arg1 ;
-(BOOL)legibilityEnabled;
-(void)setLegibilityEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SBIconListPageControlDelegate>)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id<SBIconListPageControlDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(double)defaultHeight;
-(void)_invalidateIndicators;
-(id)_indicatorViewEnabled:(BOOL)arg1 index:(long long)arg2 ;
-(void)_transitionIndicator:(id)arg1 toEnabled:(BOOL)arg2 index:(long long)arg3 ;
-(void)setLegibilitySettings:(id)arg1 ;
@end

