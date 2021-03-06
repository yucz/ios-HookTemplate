/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:00 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface SULockoutView : UIView {

	UIImageView* _backgroundImageView;
	UILabel* _bodyLabel;
	UIImageView* _glowImageView;
	UIImageView* _imageView;
	long long _layoutPreset;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,copy) NSString * body; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * glowImage; 
@property (assign,nonatomic) long long layoutPreset;                 //@synthesize layoutPreset=_layoutPreset - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(UIImage *)backgroundImage;
-(id)_imageView;
-(id)_titleLabel;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(NSString *)body;
-(void)setBody:(NSString *)arg1 ;
-(id)_bodyLabel;
-(long long)layoutPreset;
-(void)_layoutForSlowNetwork;
-(UIImage *)glowImage;
-(void)setGlowImage:(UIImage *)arg1 ;
-(void)setLayoutPreset:(long long)arg1 ;
-(id)_newLabel;
@end

