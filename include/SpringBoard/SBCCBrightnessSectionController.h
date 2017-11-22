/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:06 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBControlCenterSectionViewController.h>
#import <SpringBoard/SBCCButtonControllerDelegate.h>

@class SBUIControlCenterSlider, UIVisualEffectView, UIView, NSString;

@interface SBCCBrightnessSectionController : SBControlCenterSectionViewController <SBCCButtonControllerDelegate> {

	SBUIControlCenterSlider* _slider;
	UIVisualEffectView* _vibrantDarkenLayer;
	UIView* _tintingDarkenLayer;
	BKSDisplayBrightnessTransactionRef _brightnessTransaction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)contentSizeForOrientation:(long long)arg1 ;
-(void)buttonController:(id)arg1 publishStatusUpdate:(id)arg2 ;
-(void)controlCenterWillBeginTransition;
-(void)noteSettingsDidUpdate:(id)arg1 ;
-(BOOL)_shouldDarkenBackground;
-(void)_sliderDidBeginTracking:(id)arg1 ;
-(void)_sliderDidEndTracking:(id)arg1 ;
-(void)_noteScreenBrightnessDidChange:(id)arg1 ;
-(double)_yOffsetFromCenterForSlider;
-(void)dealloc;
-(void)_setBacklightLevel:(float)arg1 ;
-(float)_backlightLevel;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_sliderValueDidChange:(id)arg1 ;
-(void)_updateEffects;
-(id)sectionIdentifier;
@end

