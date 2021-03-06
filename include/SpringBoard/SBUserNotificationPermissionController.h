/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:58 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUserNotificationCapable.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, SBApplication;

@interface SBUserNotificationPermissionController : NSObject <SBUserNotificationCapable> {

	char _queueSuspended;
	char _showingAlert;
	char _canPerformQueuedActions;
	NSString* _bundleIdentifier;
	NSObject*<OS_dispatch_queue> _performQueue;

}

@property (nonatomic,retain,readonly) SBApplication * application; 
@property (nonatomic,copy) NSString * bundleIdentifier;                                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> performQueue;                //@synthesize performQueue=_performQueue - In the implementation block
@property (assign,getter=isQueueSuspended,nonatomic) char queueSuspended;              //@synthesize queueSuspended=_queueSuspended - In the implementation block
@property (assign,getter=isShowingAlert,nonatomic) char showingAlert;                  //@synthesize showingAlert=_showingAlert - In the implementation block
@property (assign,nonatomic) char canPerformQueuedActions;                             //@synthesize canPerformQueuedActions=_canPerformQueuedActions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)evictControllerFromCache:(id)arg1 ;
+(id)controllerForApplication:(id)arg1 ;
+(void)migratePushSettings:(unsigned)arg1 forBundleIdentifier:(id)arg2 ;
+(id)controllerForBundleIdentifier:(id)arg1 ;
+(void)createCacheIfNecessary;
-(void)noteBadgeSetLocally;
-(void)setBadge:(id)arg1 onBehalfOfSystem:(char)arg2 ;
-(id)effectiveUserNotificationSettings;
-(void)registerUserNotificationSettings:(id)arg1 makeAppDelegateCallback:(char)arg2 ;
-(void)notePermissionAlertAccepted:(char)arg1 withSettings:(id)arg2 makeAppDelegateCallback:(char)arg3 ;
-(void)didDeactivateAlert:(id)arg1 reason:(int)arg2 ;
-(char)haveRegisteredBefore;
-(void)setQueueSuspended:(char)arg1 ;
-(void)installedApplicationsChanged:(id)arg1 ;
-(void)tearDownQueue;
-(id)settingsForRequestedSettings:(id)arg1 systemDesiredTypes:(unsigned)arg2 ;
-(void)setShowingAlert:(char)arg1 ;
-(unsigned)enabledTypesForAdditionalTypes:(unsigned)arg1 supportedTypes:(unsigned)arg2 enabledTypes:(unsigned)arg3 ;
-(void)saveRegisteredUserNotificationSettings:(id)arg1 ;
-(char)isShowingAlert;
-(void)registerSupportedNotificationTypes:(unsigned)arg1 withEnabledNotificationSettings:(id)arg2 makeAppDelegateCallback:(char)arg3 bypassAlert:(char)arg4 ;
-(void)saveRegisteredUserNotificationSettings:(id)arg1 userDeniedNotifications:(char)arg2 ;
-(void)setHaveRegisteredBefore:(char)arg1 ;
-(char)canPerformQueuedActions;
-(void)registerPrivilegedForAdditionalTypes:(unsigned)arg1 ;
-(void)enqueueAction:(/*^block*/id)arg1 ;
-(void)unregisterUserNotificationSettings;
-(char)isQueueSuspended;
-(NSObject*<OS_dispatch_queue>)performQueue;
-(void)setPerformQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCanPerformQueuedActions:(char)arg1 ;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setBadge:(id)arg1 ;
-(void)scheduleLocalNotifications:(id)arg1 replaceExistingNotifications:(char)arg2 ;
-(SBApplication *)application;
@end

