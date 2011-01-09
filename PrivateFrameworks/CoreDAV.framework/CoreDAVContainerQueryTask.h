/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet;



@interface CoreDAVContainerQueryTask : CoreDAVTask 
{
    NSSet *_searchTerms;
    NSInteger _searchLimit;
    char *_appSpecificNamespace;
    char *_appSpecificQueryCommand;
    char *_appSpecificDataProp;
    Class _appSpecificDataItemClass;
}

+ (id)_copySearchTermsFromSearchString:(id)arg1;

- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)initWithSearchString:(id)arg1 searchLimit:(NSInteger)arg2 atRelativeURI:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (id)_initWithSearchTerms:(id)arg1 searchLimit:(NSInteger)arg2 atRelativeURI:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (BOOL)processData:(id)arg1 withParser:(id)arg2;
- (id)initWithSearchTerms:(id)arg1 searchLimit:(NSInteger)arg2 atRelativeURI:(id)arg3 appSpecificDataItemClass:(Class)arg4;
- (void)addFiltersToXMLData:(id)arg1;
- (void)dealloc;
- (id)httpMethod;
- (id)requestBody;

@end