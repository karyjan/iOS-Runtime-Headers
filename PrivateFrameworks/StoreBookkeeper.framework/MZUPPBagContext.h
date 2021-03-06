/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class NSURL, NSString, SSURLBag;

@interface MZUPPBagContext : NSObject <NSCopying> {
    SSURLBag *_bag;
    NSURL *_baseURLForGETAll;
    NSURL *_baseURLForPUTAll;
    double _pollingInterval;
    BOOL _UPPDisabled;
}

@property(retain) SSURLBag * bag;
@property(readonly) BOOL UPPDisabled;
@property double pollingInterval;
@property(readonly) NSString * domain;
@property(copy) NSURL * baseURLForGETAll;
@property(copy) NSURL * baseURLForPUTAll;

+ (void)_loadValueFromBag:(id)arg1 key:(id)arg2 fallbackKey:(id)arg3 completionBlock:(id)arg4;
+ (void)loadBagContextFromURLBag:(id)arg1 completionBlock:(id)arg2;
+ (double)defaultPollingInterval;

- (void)setPollingInterval:(double)arg1;
- (void)setBaseURLForPUTAll:(id)arg1;
- (id)baseURLForPUTAll;
- (void)setBaseURLForGETAll:(id)arg1;
- (id)baseURLForGETAll;
- (void)setBag:(id)arg1;
- (id)bag;
- (double)pollingInterval;
- (BOOL)UPPDisabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)domain;

@end
