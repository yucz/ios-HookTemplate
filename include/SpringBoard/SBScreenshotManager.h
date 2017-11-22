/*
* This header is generated by classdump-dyld 1.0
* on Friday, March 3, 2017 at 12:02:05 AM China Standard Time
* Operating System: Version 9.3 (Build 13E233)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBScreenshotManagerDataSource;
@class SBSceneManagerCoordinator, _SBScreenshotPersistenceCoordinator;

@interface SBScreenshotManager : NSObject {

	SBSceneManagerCoordinator* _sceneManagerCoordinator;
	_SBScreenshotPersistenceCoordinator* _persistenceCoordinator;
	id<SBScreenshotManagerDataSource> _dataSource;

}

@property (nonatomic,readonly) id<SBScreenshotManagerDataSource> dataSource;                                                                                              //@synthesize dataSource=_dataSource - In the implementation block
@property (setter=_setSceneManagerCoordinator:,getter=_sceneManagerCoordinator,nonatomic,retain) SBSceneManagerCoordinator * sceneManagerCoordinator;                     //@synthesize sceneManagerCoordinator=_sceneManagerCoordinator - In the implementation block
@property (setter=_setPersistenceCoordinator:,getter=_persistenceCoordinator,nonatomic,retain) _SBScreenshotPersistenceCoordinator * persistenceCoordinator;              //@synthesize persistenceCoordinator=_persistenceCoordinator - In the implementation block
-(id)_initWithDataSource:(id)arg1 persistenceCoordinator:(id)arg2 sceneManagerCoordinator:(id)arg3 ;
-(void)saveScreenshotsWithCompletion:(/*^block*/id)arg1 ;
-(id)_fetchEligibleScreenshotProvidersForSnapshotting;
-(id)_providerForScreen:(id)arg1 ;
-(id)_sceneManagerCoordinator;
-(void)_setSceneManagerCoordinator:(id)arg1 ;
-(id)_persistenceCoordinator;
-(void)_setPersistenceCoordinator:(id)arg1 ;
-(id<SBScreenshotManagerDataSource>)dataSource;
-(id)initWithDataSource:(id)arg1 ;
-(void)saveScreenshots;
@end

