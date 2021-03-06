/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, SSItemOfferDeviceError;

@interface SSItemOfferDevice : NSObject  {
    int _deviceIdentifier;
    SSItemOfferDeviceError *_incompatibleDeviceError;
    SSItemOfferDeviceError *_incompatibleSystemError;
    NSString *_minimumProductVersion;
}

@property(readonly) int deviceIdentifier;
@property(readonly) NSString * minimumProductVersion;
@property(readonly) SSItemOfferDeviceError * incompatibleDeviceError;
@property(readonly) SSItemOfferDeviceError * incompatibleSystemError;


- (void)dealloc;
- (id)init;
- (id)minimumProductVersion;
- (id)incompatibleSystemError;
- (id)incompatibleDeviceError;
- (int)deviceIdentifier;
- (id)initWithDeviceIdentifier:(int)arg1;
- (id)initWithOfferDeviceDicitionary:(id)arg1;

@end
