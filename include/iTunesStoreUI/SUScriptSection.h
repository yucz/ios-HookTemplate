/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:01 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, SUScriptViewController;

@interface SUScriptSection : SUScriptObject {

	NSString* _badgeValue;
	NSString* _identifier;
	BOOL _transient;
	SUScriptViewController* _viewController;

}

@property (retain) NSString * badgeValue; 
@property (readonly) NSString * identifier; 
@property (readonly) BOOL transient; 
@property (readonly) SUScriptViewController * viewController; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(SUScriptViewController *)viewController;
-(void)setBadgeValue:(NSString *)arg1 ;
-(NSString *)badgeValue;
-(id)attributeKeys;
-(void)setBadgeValue:(id)arg1 animated:(BOOL)arg2 blink:(BOOL)arg3 ;
-(id)initWithNativeSection:(id)arg1 ;
-(BOOL)transient;
-(id)scriptAttributeKeys;
-(id)_className;
@end

