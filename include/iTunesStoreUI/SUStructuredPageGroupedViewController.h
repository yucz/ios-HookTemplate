/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:03 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUStructuredPageViewController.h>

@class SULoadingView;

@interface SUStructuredPageGroupedViewController : SUStructuredPageViewController {

	SULoadingView* _loadingView;

}
-(void)dealloc;
-(id)init;
-(id)itemAtIndexPath:(id)arg1 ;
-(id)newNoItemsOverlayLabel;
-(BOOL)openDocumentForItemAtIndexPath:(id)arg1 withApplication:(id)arg2 ;
-(BOOL)purchaseItemAtIndexPath:(id)arg1 ;
-(BOOL)_addPurchaseBatch:(id)arg1 forIndexPath:(id)arg2 ;
-(void)_performPurchaseAnimationForIndexPath:(id)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
@end

