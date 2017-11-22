/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:02 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber;

@interface SUScriptApplication : SUScriptObject

@property (getter=isDelayingTerminate,readonly) id delayingTerminate; 
@property (getter=isRunningInStoreDemoMode,readonly) id runningInStoreDemoMode; 
@property (retain) id iconBadgeNumber; 
@property (readonly) id screenHeight; 
@property (readonly) id screenWidth; 
@property (assign) id statusBarHidden; 
@property (assign) long long statusBarStyle; 
@property (getter=wasLaunchedFromLibrary,readonly) id launchedFromLibrary; 
@property (readonly) NSNumber * exitStoreReasonButton; 
@property (readonly) NSNumber * exitStoreReasonDownloadComplete; 
@property (readonly) NSNumber * exitStoreReasonFatalError; 
@property (readonly) NSNumber * exitStoreReasonGotoMainStore; 
@property (readonly) NSNumber * exitStoreReasonOther; 
@property (readonly) NSNumber * exitStoreReasonPurchase; 
@property (readonly) long long statusBarAnimationFade; 
@property (readonly) long long statusBarAnimationNone; 
@property (readonly) long long statusBarAnimationSlide; 
@property (readonly) long long statusBarStyleDefault; 
@property (readonly) long long statusBarStyleBlackOpaque; 
@property (readonly) long long statusBarStyleBlackTranslucent; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(id)statusBarHidden;
-(long long)statusBarStyle;
-(void)setStatusBarStyle:(long long)arg1 ;
-(void)setStatusBarHidden:(id)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 withAnimation:(long long)arg2 ;
-(id)isRunningInStoreDemoMode;
-(void)setStatusBarStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(id)attributeKeys;
-(id)wasLaunchedFromLibrary;
-(void)beginDelayingTerminate;
-(void)endDelayingTerminate;
-(void)exitStoreWithReason:(id)arg1 ;
-(void)returnToLibrary;
-(void)scrollIconToVisible:(id)arg1 shouldSuspend:(BOOL)arg2 ;
-(void)showNewsstand;
-(id)iconBadgeNumber;
-(id)isDelayingTerminate;
-(id)screenHeight;
-(id)screenWidth;
-(void)setIconBadgeNumber:(id)arg1 ;
-(NSNumber *)exitStoreReasonButton;
-(NSNumber *)exitStoreReasonDownloadComplete;
-(NSNumber *)exitStoreReasonFatalError;
-(NSNumber *)exitStoreReasonGotoMainStore;
-(NSNumber *)exitStoreReasonOther;
-(NSNumber *)exitStoreReasonPurchase;
-(long long)statusBarAnimationFade;
-(long long)statusBarAnimationNone;
-(long long)statusBarAnimationSlide;
-(long long)statusBarStyleDefault;
-(long long)statusBarStyleBlackOpaque;
-(long long)statusBarStyleBlackTranslucent;
-(id)scriptAttributeKeys;
@end

