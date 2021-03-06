/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel;

@interface EKEventDetailTwoValueCell : EKEventDetailCell  {
    int _style;
    UILabel *_titleView;
    UILabel *_valueView;
    UILabel *_value2View;
    unsigned int _visibleItems;
}

@property(readonly) unsigned int visibleItems;


- (unsigned int)visibleItems;
- (void)dealloc;
- (BOOL)update;
- (int)style;
- (id)titleView;
- (id)value2View;
- (id)valueView;
- (id)initWithEvent:(id)arg1 editable:(BOOL)arg2 platformStyle:(int)arg3;
- (void)layoutForWidth:(float)arg1 position:(int)arg2;

@end
