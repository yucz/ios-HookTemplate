/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:01 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>
#import <libobjc.A.dylib/SSDownloadManagerObserver.h>
#import <libobjc.A.dylib/SSPreorderManagerObserver.h>

@class SUClientInterface, SUDownloadManager, SSPreorderManager, NSString, NSArray;

@interface SUScriptDownloadQueue : SUScriptObject <SSDownloadManagerObserver, SSPreorderManagerObserver> {

	SUClientInterface* _clientInterface;
	SUDownloadManager* _downloadManager;
	SSPreorderManager* _preorderManager;
	NSString* _queueType;

}

@property (readonly) NSArray * downloads; 
@property (readonly) NSString * queueType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)attributeKeys;
-(NSString *)queueType;
-(void)finalizeForWebScript;
-(void)_setupManagersWithClientInterface:(id)arg1 queueType:(id)arg2 ;
-(void)_tearDownQueues;
-(void)checkQueue;
-(void)preorderManagerPreordersDidChange:(id)arg1 ;
-(id)initWithQueueType:(id)arg1 clientInterface:(id)arg2 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(NSArray *)downloads;
@end

