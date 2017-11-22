/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:04 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>
#import <libobjc.A.dylib/SKUIIPhoneProductPageDelegate.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegatePrivate.h>

@class UIViewController, SKUIIPhoneProductPageViewController, SKStoreProductViewController, SKUIStorePageViewController, NSString;

@interface SUSKUIStorePageViewController : SUViewController <SKUIIPhoneProductPageDelegate, SKStoreProductViewControllerDelegatePrivate> {

	UIViewController* _activeChildViewController;
	SKUIIPhoneProductPageViewController* _iphoneProductPageViewController;
	SKStoreProductViewController* _remoteProductViewController;
	SKUIStorePageViewController* _storePageViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)reloadWithStorePage:(id)arg1 forURL:(id)arg2 ;
-(void)_showProductPageWithPageDictionary:(id)arg1 ;
-(void)_showStorePageWithPageDictionary:(id)arg1 ;
-(void)_setActiveChildViewController:(id)arg1 ;
-(void)_showRemoteViewControllerWithPageDictionary:(id)arg1 ;
-(void)_showIPhoneProductPageWithPage:(id)arg1 clientContext:(id)arg2 ;
-(void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(void)productViewController:(id)arg1 presentProductWithRequest:(id)arg2 animated:(BOOL)arg3 ;
-(id)initWithSection:(id)arg1 ;
-(void)_loadClientContextWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)iPhoneProductPage:(id)arg1 shouldOpenItem:(id)arg2 ;
-(BOOL)iPhoneProductPage:(id)arg1 shouldOpenURL:(id)arg2 ;
@end

