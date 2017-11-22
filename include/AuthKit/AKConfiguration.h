/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 1, 2017 at 12:02:23 AM China Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface AKConfiguration : NSObject {

	NSMutableDictionary* _cachedSettings;
	int _notificationToken;
	NSObject*<OS_dispatch_queue> _settingsQueue;

}

@property (assign,nonatomic) long long shouldDisablePETs; 
@property (assign,nonatomic) long long shouldFakeAuthSuccess; 
+(id)sharedConfiguration;
-(void)dealloc;
-(id)init;
-(id)configurationValueForKey:(id)arg1 ;
-(void)setConfigurationValue:(id)arg1 forKey:(id)arg2 ;
-(long long)shouldDisablePETs;
-(void)setShouldDisablePETs:(long long)arg1 ;
-(long long)shouldFakeAuthSuccess;
-(void)setShouldFakeAuthSuccess:(long long)arg1 ;
@end

