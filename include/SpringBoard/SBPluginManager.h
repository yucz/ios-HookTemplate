/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:06 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface SBPluginManager : NSObject {

	NSString* _pluginsDirectory;
	NSMutableDictionary* _plugins;

}
+(id)sharedInstance;
-(void)loadAllLaunchPlugins;
-(id)springBoardPluginsDirectory;
-(Class)loadPluginBundle:(id)arg1 ;
-(Class)loadPluginNamed:(id)arg1 ;
-(id)init;
@end

