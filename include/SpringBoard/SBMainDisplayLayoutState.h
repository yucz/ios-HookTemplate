/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:07 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLayoutState.h>
#import <SpringBoard/SBMainDisplayLayoutContext.h>

@class SBMainDisplaySceneManager, SBMainWorkspace, SBSideAppState, SBBreadcrumbState, NSString;

@interface SBMainDisplayLayoutState : SBLayoutState <SBMainDisplayLayoutContext> {

	SBMainDisplaySceneManager* _sceneManager;
	SBMainWorkspace* _workspace;
	SBSideAppState* _sideAppState;
	SBSideAppState* _externallyManagedSideAppState;
	SBBreadcrumbState* _breadcrumbState;

}

@property (nonatomic,readonly) SBBreadcrumbState * breadcrumbState;                              //@synthesize breadcrumbState=_breadcrumbState - In the implementation block
@property (nonatomic,readonly) SBSideAppState * sideAppState;                                    //@synthesize sideAppState=_sideAppState - In the implementation block
@property (nonatomic,readonly) SBSideAppState * externallyManagedSideAppState;                   //@synthesize externallyManagedSideAppState=_externallyManagedSideAppState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long interfaceOrientation; 
@property (nonatomic,readonly) long long sideAppPresentationStyle; 
@property (nonatomic,readonly) long long sideAppWidth; 
@property (nonatomic,readonly) long long externallyManagedSideAppPresentationStyle; 
@property (nonatomic,readonly) long long externallyManagedSideAppWidth; 
+(long long)_defaultOrientation;
-(id)transitionContextForResizingSideAppToWidth:(long long)arg1 ;
-(id)transitionContextForSuspendingPrimaryApp;
-(id)transitionContextForSuspendingSideApp;
-(id)transitionContextForSettingSideAppPinned:(BOOL)arg1 ;
-(SBSideAppState *)sideAppState;
-(long long)wallpaperMode;
-(long long)sideAppPresentationStyle;
-(BOOL)isEqualToLayoutState:(id)arg1 ;
-(id)_layoutStateForTransitionContext:(id)arg1 ;
-(id)_initWithElements:(id)arg1 andBreadcrumbState:(id)arg2 andSideAppState:(id)arg3 andExternallyManagedSideAppState:(id)arg4 interfaceOrientation:(long long)arg5 ;
-(id)_initWithElements:(id)arg1 andBreadcrumbState:(id)arg2 andSideAppState:(id)arg3 andExternallyManagedSideAppState:(id)arg4 interfaceOrientation:(long long)arg5 sceneManager:(id)arg6 workspace:(id)arg7 ;
-(SBBreadcrumbState *)breadcrumbState;
-(id)_stateWithElements:(id)arg1 andBreadcrumbState:(id)arg2 andSideAppState:(id)arg3 andExternallyManagedSideAppState:(id)arg4 interfaceOrientation:(long long)arg5 ;
-(long long)wallpaperModeForLayoutRole:(long long)arg1 ;
-(BOOL)includesStatusBarForLayoutRole:(long long)arg1 ;
-(long long)sideAppWidth;
-(long long)externallyManagedSideAppPresentationStyle;
-(long long)externallyManagedSideAppWidth;
-(SBSideAppState *)externallyManagedSideAppState;
-(id)_initWithElements:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

