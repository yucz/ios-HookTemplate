/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:04 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface SUAudioPlayerSessionManager : NSObject {

	NSMutableDictionary* _sessions;

}

@property (nonatomic,readonly) NSArray * allSessionURLs; 
+(id)sessionManager;
-(void)dealloc;
-(id)init;
-(NSArray *)allSessionURLs;
-(id)audioPlayerForURL:(id)arg1 ;
-(void)_audioPlayerStatusChangeNotification:(id)arg1 ;
-(id)endSessionForURL:(id)arg1 ;
-(id)stopAllAudioPlayerSessions;
-(id)startSessionWithURL:(id)arg1 ;
@end
