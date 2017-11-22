/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:09 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlert.h>

@protocol SBLockScreenViewControllerDelegate;
@class SBLockScreenActionContext;

@interface SBLockScreenViewControllerBase : SBAlert {

	id<SBLockScreenViewControllerDelegate> _delegate;
	SBLockScreenActionContext* _customLockScreenActionContext;

}

@property (assign,nonatomic,__weak) id<SBLockScreenViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)activeLockScreenPluginController;
-(BOOL)isLockScreenPluginViewVisible;
-(BOOL)isInScreenOffMode;
-(void)setInScreenOffMode:(BOOL)arg1 ;
-(BOOL)isShowingMediaControls;
-(void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)noteStartingPhoneCallWhileUILocked;
-(void)setCustomLockScreenActionContext:(id)arg1 ;
-(BOOL)_isLockAlert;
-(BOOL)isShowingOverheatUI;
-(void)activateCamera;
-(void)willBeginDeactivationForTransitionToApps:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)hasActiveUIAccessories;
-(void)enableLockScreenBundleWithName:(id)arg1 activationContext:(id)arg2 ;
-(void)disableLockScreenBundleWithName:(id)arg1 deactivationContext:(id)arg2 ;
-(BOOL)activateAlertItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)currentAlertItem;
-(BOOL)hasSuperModalAlertItems;
-(BOOL)wantsToHandleAlert:(id)arg1 ;
-(id)dequeueAllPendingSuperModalAlertItems;
-(BOOL)hasAlertItem:(id)arg1 ;
-(void)deactivateAlertItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)allPendingAlertItems;
-(BOOL)canHandleAlerts;
-(void)launchEmergencyDialer;
-(void)shakeSlideToUnlockTextWithCustomText:(id)arg1 ;
-(void)_transitionWallpaperFromLockWithOptionalOutTimingFunction:(id)arg1 adjustWindowLevel:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)adjustLockScreenContentByOffset:(double)arg1 forPluginController:(id)arg2 withAnimationDuration:(double)arg3 ;
-(void)updateOrientationForUndim;
-(id)currentLockScreenActionContext;
-(CGRect)defaultContentRegionForPluginController:(id)arg1 withOrientation:(long long)arg2 ;
-(void)updateInterfaceIfNecessary;
-(BOOL)isLockScreenVisible;
-(BOOL)isSystemGesturePermittedForPresentingController:(id)arg1 ;
-(BOOL)allowSystemGestureAtLocation:(CGPoint)arg1 ;
-(void)attemptToUnlockUIFromNotification;
-(void)noteModalBannerIsVisible:(BOOL)arg1 ;
-(void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)emergencyDialerExitedWithError:(id)arg1 ;
-(void)exitEmergencyDialerAnimated:(BOOL)arg1 ;
-(void)enableLockScreenBundleWithName:(id)arg1 activationContext:(id)arg2 auxiliaryActivationAnimationBlock:(/*^block*/id)arg3 ;
-(void)disableLockScreenBundleWithName:(id)arg1 deactivationContext:(id)arg2 auxiliaryDeactivationAnimationBlock:(/*^block*/id)arg3 ;
-(BOOL)isHidingPasscodeViewDuringCall;
-(void)updateLegibility;
-(void)activateCardItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)deactivateCardItem:(id)arg1 ;
-(void)updateCardItem:(id)arg1 ;
-(void)noteNextUnlockShouldReturnToCallIfPossible:(BOOL)arg1 ;
-(void)_transitionWallpaperFromLock;
-(BOOL)isPasscodeLockVisible;
-(BOOL)wantsLockScreenIdleTimer;
-(BOOL)canRelockForAutoDimTimer;
-(BOOL)wantsScreenToAutoDim;
-(BOOL)canBeUIUnlocked;
-(BOOL)canBeDeactivatedForUIUnlockFromSource:(int)arg1 ;
-(BOOL)requiresPasscodeInputForUIUnlockFromSource:(int)arg1 withOptions:(id)arg2 ;
-(void)prepareToEnterLostMode;
-(void)noteExitingLostMode;
-(void)noteDeviceBlockedStatusUpdated;
-(void)startLockScreenFadeInAnimationForSource:(int)arg1 ;
-(void)setInScreenOffMode:(BOOL)arg1 forAutoUnlock:(BOOL)arg2 ;
-(id)_customLockScreenActionContext;
-(void)prepareForUIUnlock;
-(void)setForcesPasscodeViewDuringCall:(BOOL)arg1 ;
-(void)prepareForExternalUIUnlock;
-(void)activateCameraAnimated:(BOOL)arg1 ;
-(BOOL)shouldShowStatusBarOnDeactivation;
-(BOOL)lockScreenIsShowingBulletins;
-(void)prepareForMesaUnlockWithCompletion:(/*^block*/id)arg1 ;
-(void)noteResetRestoreStateUpdated;
-(void)setPasscodeLockVisible:(BOOL)arg1 animated:(BOOL)arg2 withUnlockSource:(int)arg3 andOptions:(id)arg4 ;
-(BOOL)_wantsToAnimateFromPasscodeLockOnFailedPasscodeAttemptAndBlocked;
-(void)_handlePassKitPresentation;
-(void)_handlePassKitDismissal;
-(BOOL)allowAnimatedDismissalForLockScreenPlugin;
-(void)setShowingMediaControls:(BOOL)arg1 ;
-(BOOL)shouldShowSlideshowButton;
-(BOOL)handleExternalKeyDownEvent;
-(void)setDelegate:(id<SBLockScreenViewControllerDelegate>)arg1 ;
-(id<SBLockScreenViewControllerDelegate>)delegate;
-(void)deactivate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)activate;
-(BOOL)isMakingEmergencyCall;
-(void)biometricEventMonitor:(id)arg1 handleBiometricEvent:(unsigned long long)arg2 ;
-(BOOL)shouldShowLockStatusBarTime;
-(BOOL)handleMenuButtonTap;
-(BOOL)handleMenuButtonHeld;
-(void)finishUIUnlockFromSource:(int)arg1 ;
-(void)updateCustomSubtitleTextForAwayViewPlugin:(id)arg1 ;
@end

