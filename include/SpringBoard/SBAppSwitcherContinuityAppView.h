/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:07 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBMainAppSwitcherPageContentView.h>

@protocol SBAppSwitcherCacheVended;
@class UIView, SBWallpaperEffectView, SBAppSwitcherStatusBarViewCache, NSString, SBZoomView;

@interface SBAppSwitcherContinuityAppView : UIView <SBMainAppSwitcherPageContentView> {

	UIView* _containerView;
	SBWallpaperEffectView* _wallpaperView;
	UIView*<SBAppSwitcherCacheVended> _fakeStatusBarView;
	SBAppSwitcherStatusBarViewCache* _statusBarCache;
	NSString* _bundleIdentifier;
	SBZoomView* _zoomView;
	long long _orientation;

}

@property (assign,nonatomic) long long orientation;                 //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_viewDismissing:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 bundleIdentifier:(id)arg2 ;
-(void)_willAnimateDismiss:(id)arg1 ;
-(CGAffineTransform)_rotationTransformForOrientation:(long long)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidate;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(void)setCornerRadius:(double)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(double)cornerRadius;
@end

