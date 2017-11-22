//#import <StoreServices/StoreServices-Structs.h>
////#import <libobjc.A.dylib/SSXPCCoding.h>
////#import <libobjc.A.dylib/NSCoding.h>
////#import <libobjc.A.dylib/NSCopying.h>
#import <StoreServices/SSItemImageCollection.h>
@interface SSDownloadMetadata : NSObject
-(id)_assetDictionary;
-(NSNumber *)downloaderAccountIdentifier;
-(id)newDownloadProperties;
-(NSURL *)fullSizeImageURL;
-(id)podcastFeedURL;
-(void)setValuesFromDownload:(id)download ;
-(unsigned long long)preOrderIdentifier;
-(void)setPreOrderIdentifier:(unsigned long long)identifier ;
-(unsigned long long)artistIdentifier;
-(void)setArtistIdentifier:(unsigned long long)identifier ;
-(id)collectionArtistName;
-(void)setCollectionArtistName:(id)name ;
-(id)collectionIndexInCollectionGroup;
-(void)setCollectionIndexInCollectionGroup:(id)group ;
-(void)setComposerName:(id)name ;
-(id)episodeIdentifier;
-(void)setEpisodeIdentifier:(id)identifier ;
-(id)episodeSortIdentifier;
-(void)setEpisodeSortIdentifier:(id)identifier ;
-(unsigned long long)genreIdentifier;
-(void)setGenreIdentifier:(unsigned long long)identifier ;
-(id)networkName;
-(void)setNetworkName:(id)name ;
-(id)numberOfCollectionsInCollectionGroup;
-(void)setNumberOfCollectionsInCollectionGroup:(id)group ;
-(id)numberOfItemsInCollection;
-(void)setNumberOfItemsInCollection:(id)collection ;
-(id)podcastEpisodeGUID;
-(void)setPodcastEpisodeGUID:(id)d ;
-(void)setVideoDetailsDictionary:(id)dictionary ;
-(void)setArtworkIsPrerendered:(BOOL)prerendered ;
-(void)setThumbnailNewsstandBindingEdge:(NSString *)edge ;
-(void)setThumbnailNewsstandBindingType:(NSString *)type ;
-(void)setPodcastType:(id)type ;
-(void)setPodcastFeedURL:(id)l ;
-(void)setPrimaryAssetURL:(NSURL *)l ;
-(void)setDownloadKey:(NSString *)key ;
-(id)valueForFirstAvailableKey:(id)key ;
-(id)_stringValueForValue:(id)value ;
-(id)_urlValueForValue:(id)value ;
-(id)_dateValueForValue:(id)value ;
-(id)_releaseDateValue;
-(long long)keyStyle;
-(void)_setValueCopy:(id)copy forMetadataKey:(id)key ;
-(id)_newImageCollectionWithURLString:(id)string ;
-(id)_thumbnailArtworkImage;
-(id)betaExternalVersionIdentifier;
-(id)cloudIdentifier;
-(id)downloadPermalink;
-(id)documentTargetIdentifier;
-(id)enableExtensions;
-(id)longSeasonDescription;
-(id)messagesArtworkURL;
-(NSString *)pageProgressionDirection;
-(id)podcastType;
-(id)purchaseDate;
-(id)publicationVersion;
-(NSURL *)cancelDownloadURL;
-(NSString *)redownloadActionParameters;
-(NSString *)thumbnailNewsstandBindingEdge;
-(NSString *)thumbnailNewsstandBindingType;
-(id)viewStoreItemURL;
-(BOOL)artworkIsPrerendered;
-(BOOL)isDeviceBasedVPP;
-(BOOL)isSharedResource;
-(BOOL)isTvTemplate;
-(BOOL)launchProhibited;
-(unsigned long long)composerIdentifier;
-(NSURL *)hlsPlaylistURL;
-(id)_valueForFirstAvailableTopLevelKey:(id)key ;
-(id)_newDateFormatter;
-(void)_setValue:(id)value forTopLevelKey:(id)key ;
-(void)setBetaExternalVersionIdentifier:(id)identifier ;
-(void)setDownloadPermalink:(id)permalink ;
-(void)setCancelDownloadURL:(NSURL *)l ;
-(void)setCloudIdentifier:(id)identifier ;
-(void)setEnableExtensions:(id)extensions ;
-(void)setLongSeasonDescription:(id)description ;
-(void)setMessagesArtworkURL:(id)l ;
-(void)setPageProgressionDirection:(NSString *)direction ;
-(void)setPurchaseDate:(id)date ;
-(void)setPublicationVersion:(id)version ;
-(void)setRedownloadActionParameters:(NSString *)parameters ;
-(void)setViewStoreItemURL:(id)l ;
-(void)setComposerIdentifier:(unsigned long long)identifier ;
-(void)setAutomaticDownload:(BOOL)download ;
-(void)setHasMessagesExtension:(BOOL)extension ;
-(void)setDeviceBasedVPP:(BOOL)p ;
-(void)setSharedResource:(BOOL)resource ;
-(void)setTvTemplate:(BOOL)template ;
-(void)setLaunchProhibited:(BOOL)prohibited ;
-(void)setPreferredAssetFlavor:(NSString *)flavor ;
-(SSItemImageCollection *)thumbnailImageCollection;
-(NSURL *)launchExtrasUrl;
-(NSDictionary *)primaryAssetDictionary;
-(unsigned long long)sagaIdentifier;
-(void)setHlsPlaylistURL:(NSURL *)l ;
-(void)setLaunchExtrasUrl:(NSURL *)url ;
-(void)setRentalID:(NSNumber *)d ;
-(void)setSagaIdentifier:(unsigned long long)identifier ;
-(void)setSortArtistName:(NSString *)name ;
-(void)setSortCollectionName:(NSString *)name ;
-(NSString *)sortArtistName;
-(NSString *)sortCollectionName;
-(id)videoDetailsDictionary;
-(NSData *)appReceiptData;
-(id)copyWritableMetadata;
-(NSData *)epubRightsData;
-(BOOL)isAutomaticDownload;
-(BOOL)isRedownloadDownload;
-(BOOL)isSoftwareKind;
-(BOOL)isVideosKind;
-(NSArray *)MD5HashStrings;
-(NSNumber *)numberOfBytesToHash;
-(NSString *)preferredAssetFlavor;
-(id)requiredDeviceCapabilities;
-(void)setEpubRightsData:(NSData *)data ;
-(void)setKeyStyle:(long long)style ;
-(void)setMD5HashStrings:(id)strings numberOfBytesToHash:(id)hash ;
-(void)setRedownloadDownload:(BOOL)download ;
-(void)setShouldDownloadAutomatically:(BOOL)automatically ;
-(void)setTransitMapDataURL:(NSURL *)l ;
-(BOOL)shouldDownloadAutomatically;
-(NSURL *)transitMapDataURL;
-(id)init;
-(id)initWithCoder:(id)coder ;
-(void)encodeWithCoder:(id)coder ;
-(void)dealloc;
-(void)setTitle:(NSString *)title ;
-(id)initWithDictionary:(id)dictionary ;
-(id)bundleIdentifier;
-(NSDictionary *)dictionary;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)zone ;
-(void)setSubtitle:(NSString *)subtitle ;
-(NSString *)subtitle;
-(id)applicationIdentifier;
-(NSString *)shortDescription;
-(void)setDictionary:(NSDictionary *)dictionary ;
-(NSString *)kind;
-(void)setBundleIdentifier:(id)identifier ;
-(NSString *)sortTitle;
-(void)setSortTitle:(NSString *)title ;
-(void)setDurationInMilliseconds:(id)milliseconds ;
-(id)seriesName;
-(void)setSeriesName:(id)name ;
-(NSNumber *)releaseYear;
-(void)setReleaseYear:(NSNumber *)year ;
-(NSString *)genre;
-(id)composerName;
-(BOOL)isExplicitContent;
-(BOOL)isCompilation;
-(id)movementName;
-(id)movementCount;
-(id)movementNumber;
-(NSDate *)releaseDate;
-(id)showComposer;
-(id)workName;
-(void)setGenre:(NSString *)genre ;
-(void)setCompilation:(BOOL)compilation ;
-(NSArray *)sinfs;
-(void)setSinfs:(NSArray *)sinfs ;
-(void)setExplicitContent:(BOOL)content ;
-(void)setReleaseDate:(NSDate *)date ;
-(void)setSeasonNumber:(id)number ;
-(NSString *)downloadKey;
-(id)seasonNumber;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)encoding ;
-(NSString *)longDescription;
-(void)setLongDescription:(NSString *)description ;
-(NSString *)fileExtension;
-(void)setCollectionIdentifier:(unsigned long long)identifier ;
-(void)setCollectionName:(id)name ;
-(unsigned long long)collectionIdentifier;
-(void)setFileExtension:(NSString *)extension ;
-(void)setShortDescription:(NSString *)description ;
-(void)setValue:(id)value forMetadataKey:(id)key ;
-(NSString *)copyright;
-(void)setDocumentTargetIdentifier:(id)identifier ;
-(void)setCopyright:(NSString *)copyright ;
-(id)initWithItem:(id)item offer:(id)offer ;
-(BOOL)isContentRestricted;
-(unsigned long long)itemIdentifier;
-(void)setItemIdentifier:(unsigned long long)identifier ;
-(id)variantIdentifier;
-(void)setVariantIdentifier:(id)identifier ;
-(BOOL)isRental;
-(BOOL)isSample;
-(void)setRequiredDeviceCapabilities:(id)capabilities ;
-(NSString *)artistName;
-(BOOL)hasMessagesExtension;
-(id)collectionName;
-(NSString *)releaseDateString;
-(void)setArtistName:(NSString *)name ;
-(void)setReleaseDateString:(NSString *)string ;
-(id)initWithItem:(id)item ;
-(NSURL *)primaryAssetURL;
-(id)valueForMetadataKey:(id)key ;
-(NSNumber *)rentalID;
-(void)setThumbnailImageURL:(NSURL *)l ;
-(void)setHighDefinition:(BOOL)definition ;
-(void)setRental:(BOOL)rental ;
-(void)setContentRating:(id)rating ;
-(id)contentRating;
-(BOOL)isHighDefinition;
-(id)indexInCollection;
-(void)setIndexInCollection:(id)collection ;
-(NSURL *)thumbnailImageURL;
-(void)setTransactionIdentifier:(NSString *)identifier ;
-(void)setFullSizeImageURL:(NSURL *)l ;
-(void)setKind:(NSString *)kind ;
-(void)setSample:(BOOL)sample ;
-(NSString *)transactionIdentifier;
-(id)durationInMilliseconds;
-(id)initWithKind:(id)kind ;
@end