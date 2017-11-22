#import <StoreServices/SSDownload.h>
@interface SSDivertedDownload : SSDownload
-(BOOL)isEligibleForRestore:(id*)restore ;
-(id)_newAssetWithURL:(id)l assetType:(id)type ;
-(id)backgroundNetworkingJobGroupName;
-(id)networkConstraints;
-(BOOL)removeAsset:(id)asset ;
-(void)setBackgroundNetworkingJobGroupName:(id)name ;
-(void)handleWithDownloadHandler:(id)handler completionBlock:(/*^block*/id)block ;
-(BOOL)isBackgroundNetworkingUserInitiated;
-(void)setBackgroundNetworkingUserInitiated:(BOOL)initiated ;
-(void)_resetStatus;
-(id)_XPCConnection;
-(void)setJob:(id /*ASDJob **/)job ;
-(double)percentComplete;
-(void)resume;
-(BOOL)isExternal;
-(id)valueForProperty:(id)property ;
-(void)pause;
-(id)status;
-(void)setStatus:(id)status ;
-(id)metadata;
-(void)setMetadata:(id)metadata ;
-(id)failureError;
-(BOOL)addAsset:(id)asset forType:(id)type ;
-(id)downloadIdentifier;
-(void)setDownloadHandler:(id)handler completionBlock:(/*^block*/id)block ;
-(id)assetsForType:(id)type ;
-(long long)bytesDownloaded;
-(long long)bytesTotal;
-(long long)downloadSizeLimit;
-(id)downloadPolicy;
-(void)setDownloadPolicy:(id)policy ;
-(void)prioritizeAboveDownload:(id)download completionBlock:(/*^block*/id)block ;
-(void)setNetworkConstraints:(id)constraints ;
-(void)setValuesWithStoreDownloadMetadata:(id)metadata ;
-(double)estimatedSecondsRemaining;
-(long long)persistentIdentifier;
-(id)initWithDownloadMetadata:(id)metadata ;
-(id)downloadPhaseIdentifier;
-(BOOL)isCancelable;
-(void)setAssets:(id)assets ;
-(id)assets;
-(void)restart;
-(id /*ASDJob **/)job;
@end
