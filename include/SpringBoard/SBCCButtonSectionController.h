/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:05 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBControlCenterSectionViewController.h>
#import <SpringBoard/SBCCButtonControllerDelegate.h>
#import <libobjc.A.dylib/_UISettingsKeyPathObserver.h>

@class NSMutableArray, NSMutableDictionary, SBControlCenterButtonSectionSettings, NSString;

@interface SBCCButtonSectionController : SBControlCenterSectionViewController <SBCCButtonControllerDelegate, _UISettingsKeyPathObserver> {

	NSMutableArray* _modules;
	NSMutableDictionary* _modulesByID;
	NSMutableDictionary* _moduleControllersByID;
	SBControlCenterButtonSectionSettings* _settings;

}

@property (nonatomic,retain) SBControlCenterButtonSectionSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)buttonControllerClass;
+(Class)viewClass;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)_addButtonModule:(id)arg1 ;
-(id)_allButtonModules;
-(void)_activateModule:(id)arg1 ;
-(id)_sortKeyForModule:(id)arg1 ;
-(id)_allButtonControllers;
-(void)_deactivateModule:(id)arg1 ;
-(void)buttonController:(id)arg1 publishStatusUpdate:(id)arg2 ;
-(id)_controllerForModule:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)view;
-(SBControlCenterButtonSectionSettings *)settings;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(void)_updateSettings;
-(void)setSettings:(SBControlCenterButtonSectionSettings *)arg1 ;
-(id)sectionIdentifier;
@end
