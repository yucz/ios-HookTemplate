@interface SSVStoreDownloadQueueResponse : NSObject
-(NSString *)storeCorrelationID;
-(id)_initStoreDownloadQueueResponse;
-(id)initWithDictionary:(id)dictionary userIdentifier:(id)identifier preferredAssetFlavor:(id)flavor ;
-(id)_errorWithFailureType:(id)type customerMessage:(id)message ;
-(id)initWithDictionary:(id)dictionary userIdentifier:(id)identifier ;
-(id)initWithError:(id)error userIdentifier:(id)identifier ;
-(id)errorForItemIdentifier:(id)identifier ;
-(NSData *)keybag;
-(NSArray *)rangesToLoad;
-(void)setShouldCancelPurchaseBatch:(BOOL)batch ;
-(void)setTriggeredQueueCheck:(BOOL)check ;
-(BOOL)shouldCancelPurchaseBatch;
-(BOOL)triggeredQueueCheck;
-(void)setStoreCorrelationID:(NSString *)d ;
-(id)init;
-(void)setClientIdentifier:(NSString *)identifier ;
-(NSString *)clientIdentifier;
-(NSOrderedSet *)downloads;
-(NSError *)error;
-(void)setError:(NSError *)error ;
-(NSNumber *)userIdentifier;
@end
