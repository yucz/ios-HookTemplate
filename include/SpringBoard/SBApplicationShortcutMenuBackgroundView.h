/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:05 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class UIVisualEffectView, UIView, UIBlurEffect;

@interface SBApplicationShortcutMenuBackgroundView : UIView {

	double _cornerRadius;
	UIVisualEffectView* _backdropView;
	UIView* _dimmingKnockoutView;
	UIBlurEffect* _blurEffect;

}

@property (assign,nonatomic) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
@end

