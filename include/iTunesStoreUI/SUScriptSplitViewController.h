/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:01 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class SUScriptViewController, NSNumber, NSString;

@interface SUScriptSplitViewController : SUScriptViewController

@property (retain) SUScriptViewController * firstViewController; 
@property (retain) id minimumPaneSize; 
@property (retain) SUScriptViewController * secondViewController; 
@property (retain) id splitPosition; 
@property (retain) id splitShadowColor; 
@property (retain) NSNumber * splitShadowOpacity; 
@property (retain) NSNumber * splitShadowRadius; 
@property (retain) NSString * splitType; 
@property (retain) NSString * title; 
@property (assign) BOOL usesSharedPlaceholder; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)attributeKeys;
-(SUScriptViewController *)firstViewController;
-(id)newNativeViewController;
-(id)minimumPaneSize;
-(id)splitPosition;
-(BOOL)usesSharedPlaceholder;
-(void)setFirstViewController:(SUScriptViewController *)arg1 ;
-(void)setSecondViewController:(SUScriptViewController *)arg1 ;
-(void)setSplitPosition:(id)arg1 ;
-(void)setUsesSharedPlaceholder:(BOOL)arg1 ;
-(void)setMinimumPaneSize:(id)arg1 ;
-(SUScriptViewController *)secondViewController;
-(id)_splitViewController;
-(void)setSplitShadowColor:(id)arg1 ;
-(void)setSplitShadowOpacity:(NSNumber *)arg1 ;
-(void)setSplitShadowRadius:(NSNumber *)arg1 ;
-(void)setSplitType:(NSString *)arg1 ;
-(id)splitShadowColor;
-(NSNumber *)splitShadowOpacity;
-(NSNumber *)splitShadowRadius;
-(NSString *)splitType;
-(id)scriptAttributeKeys;
-(id)_className;
@end

