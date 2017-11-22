/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:05 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIScrollView.h>

@protocol SBUIPasscodeLockView;
@class SBLockScreenView;

@interface SBLockScreenScrollView : UIScrollView {

	id<SBUIPasscodeLockView> _passcodeView;
	SBLockScreenView* _lockScreenView;

}

@property (assign,nonatomic,__weak) id<SBUIPasscodeLockView> passcodeView;              //@synthesize passcodeView=_passcodeView - In the implementation block
@property (assign,nonatomic,__weak) SBLockScreenView * lockScreenView;                  //@synthesize lockScreenView=_lockScreenView - In the implementation block
-(SBLockScreenView *)lockScreenView;
-(void)setLockScreenView:(SBLockScreenView *)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)touchesShouldCancelInContentView:(id)arg1 ;
-(void)setPasscodeView:(id<SBUIPasscodeLockView>)arg1 ;
-(id<SBUIPasscodeLockView>)passcodeView;
@end

