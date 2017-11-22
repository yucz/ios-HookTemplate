/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:01 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSNumber;

@interface SUScriptDialog : SUScriptObject {

	NSString* _body;
	id _buttons;
	NSNumber* _cancelButtonIndex;
	NSNumber* _destructiveButtonIndex;
	id _textFields;
	NSString* _title;

}

@property (retain) NSString * body; 
@property (retain) id buttons; 
@property (retain) NSNumber * cancelButtonIndex; 
@property (retain) NSNumber * destructiveButtonIndex; 
@property (retain) id textFields; 
@property (retain) NSString * title; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)show;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSNumber *)cancelButtonIndex;
-(void)setCancelButtonIndex:(NSNumber *)arg1 ;
-(NSString *)title;
-(NSString *)body;
-(void)dismiss;
-(id)textFields;
-(id)buttons;
-(void)setDestructiveButtonIndex:(NSNumber *)arg1 ;
-(NSNumber *)destructiveButtonIndex;
-(void)setBody:(NSString *)arg1 ;
-(id)attributeKeys;
-(void)setTextFields:(id)arg1 ;
-(void)setButtons:(id)arg1 ;
-(id)_nativeDialog;
-(void)_logSheetWarnings;
-(void)showSheet;
-(void)showFromDOMElement:(id)arg1 ;
-(void)showSheetInPopOver:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
@end
