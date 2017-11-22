/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>
#import <MobileCoreServices/LSInstallProgressProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, LSInstallProgressList, NSMutableOrderedSet, NSMutableSet, LSObserverTimer, NSObject, NSString;

@interface LSInstallProgressDelegate : NSObject <NSXPCListenerDelegate, LSInstallProgressProtocol> {

	NSMutableDictionary* _observers;
	LSInstallProgressList* _progresses;
	NSMutableOrderedSet* _orderedInstalls;
	NSMutableDictionary* _installIndexes;
	NSMutableSet* _inactiveInstalls;
	LSObserverTimer* installsStartedTimer;
	LSObserverTimer* iconsUpdatedTimer;
	LSObserverTimer* installsUpdatedTimer;
	LSObserverTimer* installsFinishedTimer;
	LSObserverTimer* didUninstallTimer;
	char _usingNetwork;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 withUUID:(id)arg2 ;
-(void)removeObserverWithUUID:(id)arg1 ;
-(void)sendWillUninstallNotificationForApps:(id)arg1 Plugins:(id)arg2 isUpdate:(char)arg3 ;
-(void)beginObservingConnection;
-(void)endObservingConnection;
-(void)sendFailedNotificationForApp:(id)arg1 isUninstall:(char)arg2 ;
-(void)installationEndedForApplication:(id)arg1 ;
-(void)sendInstalledNotificationForApps:(id)arg1 ;
-(void)sendUninstalledNotificationForApps:(id)arg1 ;
-(void)placeholderInstalledForApp:(id)arg1 ;
-(void)sendIconUpdatedNotificationForApp:(id)arg1 ;
-(void)sendChangeNotificationForApp:(id)arg1 ;
-(void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned)arg2 andPublishingString:(id)arg3 ;
-(void)installationFailedForApplication:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)sendInstalledNotificationForApp:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)sendUninstalledNotificationForApp:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)sendNetworkUsageChangedNotification;
-(void)restoreInactiveInstalls;
-(id)parentProgressForApplication:(id)arg1 andPhase:(unsigned)arg2 isActive:(char)arg3 ;
-(void)rebuildInstallIndexes;
-(void)sendAppControlsNotificationForApp:(id)arg1 withName:(id)arg2 ;
-(void)handleCancelInstallationForApp:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

