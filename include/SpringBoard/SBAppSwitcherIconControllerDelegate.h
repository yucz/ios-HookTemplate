/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:05 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBAppSwitcherIconControllerDelegate <NSObject>
@required
-(void)switcherIconScroller:(id)arg1 contentOffsetChanged:(double)arg2;
-(void)switcherIconScroller:(id)arg1 activate:(id)arg2;
-(BOOL)switcherIconScroller:(id)arg1 shouldHideIconForDisplayItem:(id)arg2;
-(void)switcherIconScrollerBeganPanning:(id)arg1;
-(unsigned long long)switcherIconScroller:(id)arg1 settledIndexForNormalizedOffset:(inout double*)arg2 andXVelocity:(double)arg3;
-(void)switcherIconScrollerDidEndScrolling:(id)arg1;
-(id)switcherIconScrollerWindowForViewRecycling:(id)arg1;

@end

