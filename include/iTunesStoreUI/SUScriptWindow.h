/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:01 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptViewController, SUScriptWindowContext, SUScriptCanvasFunction, SUScriptFunction, NSNumber, WebScriptObject, NSString;

@interface SUScriptWindow : SUScriptObject {

	SUScriptViewController* _backViewController;
	BOOL _canSwipeToDismiss;
	SUScriptWindowContext* _context;
	SUScriptViewController* _frontViewController;
	id _height;
	SUScriptCanvasFunction* _maskFunction;
	id _shadowOpacity;
	id _shadowRadius;
	SUScriptFunction* _shouldDismissFunction;
	id _width;

}

@property (readonly) SUScriptWindowContext * context;                                  //@synthesize context=_context - In the implementation block
@property (copy) id canSwipeToDismiss; 
@property (retain) SUScriptViewController * backViewController; 
@property (retain) SUScriptViewController * frontViewController; 
@property (retain) NSNumber * height; 
@property (retain) WebScriptObject * maskFunction; 
@property (retain) NSNumber * shadowOpacity; 
@property (retain) NSNumber * shadowRadius; 
@property (retain) WebScriptObject * shouldDismissFunction; 
@property (readonly) NSString * style; 
@property (retain) NSNumber * width; 
@property (readonly) SUScriptViewController * windowParentViewController; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(void)dismissWindowsWithOptions:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)show:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)style;
-(SUScriptWindowContext *)context;
-(NSNumber *)width;
-(void)setShadowRadius:(NSNumber *)arg1 ;
-(void)setShadowOpacity:(NSNumber *)arg1 ;
-(NSNumber *)shadowRadius;
-(NSNumber *)shadowOpacity;
-(NSNumber *)height;
-(id)initWithContext:(id)arg1 ;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)dismiss:(id)arg1 ;
-(void)setHeight:(NSNumber *)arg1 ;
-(id)attributeKeys;
-(void)setBackViewController:(SUScriptViewController *)arg1 ;
-(void)_registerForOverlayNotifications;
-(id)_copySafeTransitionOptionsFromOptions:(id)arg1 ;
-(id)_backgroundViewController:(BOOL)arg1 ;
-(id)_overlayViewController:(BOOL)arg1 ;
-(id)_newOverlayTransitionWithOptions:(id)arg1 ;
-(void)setCanSwipeToDismiss:(id)arg1 ;
-(void)setFrontViewController:(SUScriptViewController *)arg1 ;
-(void)setShouldDismissFunction:(WebScriptObject *)arg1 ;
-(SUScriptViewController *)backViewController;
-(id)canSwipeToDismiss;
-(SUScriptViewController *)frontViewController;
-(CGSize)_overlaySize;
-(WebScriptObject *)shouldDismissFunction;
-(void)_overlayDidDismissNotification:(id)arg1 ;
-(void)_overlayDidFlipNotification:(id)arg1 ;
-(void)_overlayDidShowNotification:(id)arg1 ;
-(void)flip:(id)arg1 ;
-(WebScriptObject *)maskFunction;
-(void)setMaskFunction:(WebScriptObject *)arg1 ;
-(SUScriptViewController *)windowParentViewController;
-(id)scriptAttributeKeys;
-(id)_className;
@end

