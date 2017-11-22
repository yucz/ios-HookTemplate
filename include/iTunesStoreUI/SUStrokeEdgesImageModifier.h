/*
* This header is generated by classdump-dyld 1.0
* on Thursday, March 2, 2017 at 11:56:00 PM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@class UIColor;

@interface SUStrokeEdgesImageModifier : SUImageModifier {

	UIEdgeInsets _edgeInsets;
	BOOL _fitToImage;
	UIColor* _strokeColor;
	BOOL _strokeCurrentPath;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;                //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) BOOL fitToImage;                      //@synthesize fitToImage=_fitToImage - In the implementation block
@property (assign,nonatomic) BOOL strokeCurrentPath;               //@synthesize strokeCurrentPath=_strokeCurrentPath - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)drawAfterImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(BOOL)fitToImage;
-(BOOL)strokeCurrentPath;
-(void)setFitToImage:(BOOL)arg1 ;
-(void)setStrokeCurrentPath:(BOOL)arg1 ;
@end
