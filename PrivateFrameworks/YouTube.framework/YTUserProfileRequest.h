/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class YTUserProfile, <YTUserProfileRequestDelegate>;

@interface YTUserProfileRequest : YTXMLHTTPRequest  {
    <YTUserProfileRequestDelegate> *_delegate;
    YTUserProfile *_profile;
}


- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)failWithError:(id)arg1;
- (void)requestProfileForUsername:(id)arg1;
- (void)requestProfileForCurrentUser;
- (void)didParseData;
- (int)parseData:(id)arg1;

@end
