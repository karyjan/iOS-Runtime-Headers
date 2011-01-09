/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */



@interface NSSpellCheckingResult : NSTextCheckingResult 
{
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    } _range;
}


- (struct _NSRange { NSUInteger x1; NSUInteger x2; })range;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (id)resultByAdjustingRangesWithOffset:(NSInteger)arg1;
- (BOOL)_adjustRangesWithOffset:(NSInteger)arg1;
- (unsigned long long)resultType;

@end