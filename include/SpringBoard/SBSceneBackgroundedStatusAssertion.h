/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:08 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface SBSceneBackgroundedStatusAssertion : NSObject {

	NSSet* _scenes;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,copy,readonly) NSSet * scenes;              //@synthesize scenes=_scenes - In the implementation block
-(id)initWithScenes:(id)arg1 invalidationHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(NSSet *)scenes;
@end

