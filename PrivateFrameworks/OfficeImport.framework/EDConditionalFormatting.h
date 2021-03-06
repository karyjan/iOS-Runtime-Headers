/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, EDReferenceCollection;

@interface EDConditionalFormatting : NSObject  {
    NSMutableArray *mRules;
    EDReferenceCollection *mRanges;
}

+ (id)conditionalFormatting;

- (id)rangeAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (unsigned int)rangeCount;
- (void)sortRulesByPriority;
- (void)insertRule:(id)arg1 atIndex:(unsigned int)arg2;
- (id)ruleAtIndex:(unsigned int)arg1;
- (unsigned int)ruleCount;
- (void)addRule:(id)arg1;
- (void)addRange:(id)arg1;

@end
