/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SAFmfVisibilitySetCompleted : SABaseClientBoundCommand <SAServerBoundCommand> {
}

@property(copy) NSURL * targetAppId;
@property(copy) NSURL * searchContext;
@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)visibilitySetCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)visibilitySetCompleted;

- (id)groupIdentifier;
- (id)searchContext;
- (void)setSearchContext:(id)arg1;
- (BOOL)requiresResponse;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;
- (id)encodedClassName;

@end
