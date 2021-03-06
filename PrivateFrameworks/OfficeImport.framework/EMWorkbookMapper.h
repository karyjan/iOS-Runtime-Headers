/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDWorkbook, NSString, CMArchiveManager, OIXMLDocument, NSMutableArray, OIXMLElement;

@interface EMWorkbookMapper : CMMapper <CMMapperRoot> {
    unsigned int mRealSheetCount;
    int mWidth;
    int mHeight;
    EDWorkbook *edWorkbook;
    NSMutableArray *mWorksheetUrls;
    NSMutableArray *mWorksheetNames;
    NSMutableArray *mWorksheetGuids;
    NSString *mResourceUrlPrefix;
    NSString *mResourceUrlProtocol;
    NSString *mStyleSheetGuid;
    CMArchiveManager *mArchiver;
    NSString *mFileName;
    unsigned int mSheetIndex;
    boolmIsFirstMappedSheet;
    boolmIsFrameset;
    OIXMLDocument *mXhtmlDoc;
    OIXMLElement *mBodyElement;
    OIXMLDocument *mTabBarDoc;
    NSString *mTabBarURL;
    NSMutableArray *mSheetURLs;
    float mTabPosition;
    unsigned int mNumberOfMappedSheets;
    BOOL mHasPushedHeader;
    BOOL mHasPushedFirstSheet;
    BOOL mLoadingMessageVisible;
}

+ (id)baseDate;
+ (id)cssStyleCache;
+ (void)setBaseDate1904:(BOOL)arg1;
+ (id)borderWidthCache;
+ (id)borderStyleCache;

- (void)dealloc;
- (bool)isMultiPage;
- (id)_mainPageBack;
- (void)_pushTabForSheet:(id)arg1 atIndex:(unsigned int)arg2;
- (id)_frontPageByCopyingMainPage;
- (id)_copyStringForSheet:(id)arg1 atIndex:(unsigned int)arg2 withState:(id)arg3 andMapper:(id)arg4;
- (id)copySheetMapperWithEdSheet:(id)arg1;
- (void)mapBodyStyleAt:(id)arg1;
- (BOOL)hasMultipleSheets;
- (id)initWithEDWorkbook:(id)arg1 archiver:(id)arg2;
- (void)finishMappingWithState:(id)arg1;
- (void)mapElement:(id)arg1 atIndex:(unsigned int)arg2 withState:(id)arg3 isLastElement:(BOOL)arg4;
- (void)startMappingWithState:(id)arg1;
- (void)setFileName:(id)arg1;
- (id)archiver;
- (id)fileName;
- (id)styleMatrix;
- (id)documentTitle;
- (struct CGSize { float x1; float x2; })pageSizeForDevice;
- (id)blipAtIndex:(unsigned int)arg1;
- (id)workbook;

@end
