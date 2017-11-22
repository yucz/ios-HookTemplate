/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:05 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>

@protocol SBBannerButtonViewControllerDelegate;
@class NSArray;

@interface SBBannerButtonViewController : UIViewController {

	NSArray* _buttons;
	id<SBBannerButtonViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBBannerButtonViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_buttonForActionTitle:(id)arg1 ;
-(id)_buttonView;
-(void)setDelegate:(id<SBBannerButtonViewControllerDelegate>)arg1 ;
-(id<SBBannerButtonViewControllerDelegate>)delegate;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)setButtonTitles:(id)arg1 ;
-(void)_buttonPressed:(id)arg1 ;
@end

