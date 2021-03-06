/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADColorMap, OADTextListStyle, NSMutableArray, OADTheme;

@interface PDSlideMaster : PDSlideBase  {
    NSMutableArray *mSlideLayouts;
    OADTheme *mTheme;
    OADColorMap *mColorMap;
    OADTextListStyle *mTitleTextStyle;
    OADTextListStyle *mBodyTextStyle;
    OADTextListStyle *mOtherTextStyle;
}

@property(retain) NSMutableArray * slideLayouts;


- (void)dealloc;
- (id)init;
- (id)slideLayouts;
- (id)initWithDefaultsAndTheme:(id)arg1;
- (id)otherTextStyle;
- (void)addSlideLayout:(id)arg1;
- (void)setSlideLayouts:(id)arg1;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForTables;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)bodyTextStyle;
- (id)titleTextStyle;
- (void)setOtherTextStyle:(id)arg1;
- (void)setBodyTextStyle:(id)arg1;
- (void)setTitleTextStyle:(id)arg1;
- (id)slideLayoutOfType:(int)arg1;
- (id)addSlideLayout;
- (id)slideLayoutAtIndex:(unsigned int)arg1;
- (unsigned int)slideLayoutCount;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)drawingTheme;
- (void)setTheme:(id)arg1;
- (void)doneWithContent;
- (id)parentSlideBase;
- (id)fontScheme;
- (id)defaultTheme;
- (id)colorMap;
- (id)styleMatrix;
- (id)colorScheme;
- (id)theme;

@end
