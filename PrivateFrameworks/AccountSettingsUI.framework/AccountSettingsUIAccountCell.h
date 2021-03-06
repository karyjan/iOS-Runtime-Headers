/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class NSArray, UILabel;

@interface AccountSettingsUIAccountCell : PSTableCell  {
    UILabel *_dataclassesLabel;
    NSArray *_enabledDataclasses;
    NSArray *_supportedDataclasses;
    BOOL _useCustomDetailsText;
}

+ (void)initialize;
+ (float)desiredRowHeight;

- (void)dealloc;
- (void)layoutSubviews;
- (void)setDetailsText:(id)arg1;
- (void)setEnabledDataclasses:(id)arg1 supportedDataclasses:(id)arg2;
- (id)enabledDataclassesTextForWidth:(float)arg1;
- (id)_dataclassesLabel;
- (void)setCellEnabled:(BOOL)arg1;

@end
