/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCoreServices/LSApplicationWorkspaceObserver.h>

@class NSHashTable, NSObject;

@interface LSApplicationWorkspaceRemoteObserver : LSApplicationWorkspaceObserver {

	char _observinglsd;
	NSHashTable* _observers;

}
-(void)setObservinglsd:(char)arg1 ;
-(char)isObservinglsd;
-(unsigned)currentObserverCount;
-(void)applicationInstallsDidCancel:(id)arg1 ;
-(void)applicationInstallsDidPause:(id)arg1 ;
-(void)applicationInstallsDidPrioritize:(id)arg1 ;
-(void)applicationInstallsDidResume:(id)arg1 ;
-(void)networkUsageChanged:(char)arg1 ;
-(void)pluginsDidInstall:(id)arg1 ;
-(void)pluginsDidUninstall:(id)arg1 ;
-(void)pluginsWillUninstall:(id)arg1 ;
-(void)addLocalObserver:(id)arg1 ;
-(void)removeLocalObserver:(id)arg1 ;
-(id)localObservers;
-(void)applicationInstallsDidStart:(id)arg1 ;
-(void)applicationInstallsDidUpdateIcon:(id)arg1 ;
-(void)applicationInstallsDidChange:(id)arg1 ;
-(void)applicationsWillInstall:(id)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(void)applicationsWillUninstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)applicationsDidFailToUninstall:(id)arg1 ;
-(void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

