/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class TIWordSearch, NSString, NSArray;

@interface TIWordSearchOperationGetCandidates : TIWordSearchOperation  {
    NSString *_inputString;
    NSArray *_results;
    id _target;
    NSArray *_geometryModelData;
    SEL _action;
    BOOL _withPrediction;
    TIWordSearch *_wordSearch;
}

@property(readonly) NSString * inputString;
@property(retain) NSArray * results;
@property(readonly) id target;
@property(readonly) SEL action;
@property(readonly) BOOL withPrediction;
@property(readonly) NSArray * geometryModelData;
@property(retain) TIWordSearch * wordSearch;


- (void)setWordSearch:(id)arg1;
- (BOOL)withPrediction;
- (id)geometryModelData;
- (void)perform;
- (id)initWithWordSearch:(id)arg1 inputString:(id)arg2 withPrediction:(BOOL)arg3 target:(id)arg4 action:(SEL)arg5 geometryModelData:(id)arg6;
- (SEL)action;
- (void)completeSearchOnMainThreadWithResults:(id)arg1;
- (id)results;
- (void)setResults:(id)arg1;
- (id)wordSearch;
- (void)checkForCachedResults;
- (id)target;
- (id)inputString;
- (void)dealloc;

@end
