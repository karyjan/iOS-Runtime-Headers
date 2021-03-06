/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, MPStoreOfferContentRating, NSDictionary;

@interface MPStoreOfferMediaItemCollection : MPMediaItemCollection  {
    NSDictionary *_storeLookupPropertyValues;
    NSArray *_unmergedStoreMediaItems;
    NSArray *_localItems;
    BOOL _hasHiddenRestrictedContent;
    int _preferredStoreOfferVariant;
    MPStoreOfferContentRating *_collectionContentRating;
}

@property(readonly) unsigned int countOfNonLocalItems;
@property(readonly) BOOL isCollectionOfferPresentable;

+ (id)collectionLookupKeyForMediaProperty:(id)arg1;
+ (id)contentRatingForCollectionPropertyValues:(id)arg1;
+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 mediaProperty:(id)arg2;
+ (id)childItemIDsForLookupCollectionPropertyValues:(id)arg1;
+ (int)offerPassTypeForLookupCollectionPropertyValues:(id)arg1;
+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1;
+ (id)defaultPropertyValues;

- (BOOL)isDownloadable;
- (id)mediaLibrary;
- (BOOL)isCollectionOfferPresentable;
- (unsigned int)countOfNonLocalItems;
- (BOOL)isCheaperToPurchaseIndividualItems;
- (BOOL)_hasRestrictedContent;
- (id)initWithLookupResponseCollectionDictionary:(id)arg1 preferredStoreOfferVariant:(int)arg2 offerMediaItems:(id)arg3 localItems:(id)arg4;
- (BOOL)_checkIsUsableOffer;
- (BOOL)hasPurchasableStoreOfferItemsForVariant:(int)arg1;
- (BOOL)hasDownloadableStoreOfferItemsForVariant:(int)arg1;
- (id)_lookupOfferDictionaries;
- (BOOL)_offeredItemAlreadyExists;
- (id)buyOfferForVariant:(int)arg1;
- (id)copyByOverlayingLocalItems:(id)arg1 preferredStoreOfferVariant:(int)arg2;
- (int)preferredStoreOfferVariant;
- (id)initWithLookupResponseCollectionDictionary:(id)arg1 preferredStoreOfferVariant:(int)arg2;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)persistentID;
- (id)valueForProperty:(id)arg1;
- (id)title;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
