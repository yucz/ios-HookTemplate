/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:02 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptMediaItemCollection.h>

@class MPMediaPlaylist;

@interface SUScriptMediaPlaylist : SUScriptMediaItemCollection

@property (nonatomic,readonly) MPMediaPlaylist * nativePlaylist; 
+(void)initialize;
+(unsigned long long)nativePlaylistAttributesForScriptPlaylistAttributes:(id)arg1 ;
+(id)scriptPlaylistAttributesForNativePlaylistAttributes:(unsigned long long)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(MPMediaPlaylist *)nativePlaylist;
-(id)_className;
@end

