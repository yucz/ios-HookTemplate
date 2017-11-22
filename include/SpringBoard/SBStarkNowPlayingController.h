/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:05 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <SpringBoard/SBStarkNowPlayingServiceDelegate.h>

@class _UIAsyncInvocation, SBStarkNowPlayingService, NSMutableArray, SBSUICarDisplayNowPlayingStateContext, NSString;

@interface SBStarkNowPlayingController : UIViewController <SBStarkNowPlayingServiceDelegate> {

	_UIAsyncInvocation* _cancelRequest;
	SBStarkNowPlayingService* _service;
	unsigned long long _reactivateAttempt;
	double _lastReactivationAttempt;
	NSMutableArray* _notifyBlocks;
	SBSUICarDisplayNowPlayingStateContext* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)nowPlayingService:(id)arg1 didTerminateWithError:(id)arg2 ;
-(void)_notifyActive:(BOOL)arg1 ;
-(void)_notifyTimedOut:(/*^block*/id)arg1 ;
-(void)_switchToService:(id)arg1 ;
-(void)_noteServiceFailure;
-(void)notifyWhenActive:(/*^block*/id)arg1 withTimeout:(double)arg2 ;
-(void)dealloc;
-(BOOL)isActive;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)switchToState:(id)arg1 ;
-(void)_reconnect;
@end

