/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:01 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@class UIGradient;

@interface SUReflectionImageModifier : SUImageModifier {

	UIGradient* _gradient;
	double _reflectionHeight;

}

@property (nonatomic,retain) UIGradient * gradient;                //@synthesize gradient=_gradient - In the implementation block
@property (assign,nonatomic) double reflectionHeight;              //@synthesize reflectionHeight=_reflectionHeight - In the implementation block
-(void)dealloc;
-(void)setGradient:(UIGradient *)arg1 ;
-(UIGradient *)gradient;
-(double)reflectionHeight;
-(void)drawAfterImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(CGSize)finalSizeForSize:(CGSize)arg1 originalSize:(CGSize)arg2 ;
-(CGRect)imageFrameForImage:(id)arg1 currentFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(void)setReflectionHeight:(double)arg1 ;
@end

