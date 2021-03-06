/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIViewController, NSString;

@interface UIViewControllerAction : NSObject  {
    UIViewController *_viewController;
    NSString *_name;
    int _transition;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

    float _curlUpRevealedHeight;
}

@property UIViewController * viewController;
@property(retain) NSString * name;
@property(readonly) BOOL animated;
@property int transition;
@property(copy) id completion;
@property(setter=_setCurlUpRevealedHeight:) float _curlUpRevealedHeight;


- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)viewController;
- (void)_setCurlUpRevealedHeight:(float)arg1;
- (BOOL)animated;
- (id)initWithViewController:(id)arg1 name:(id)arg2 transition:(int)arg3;
- (int)transition;
- (void)setTransition:(int)arg1;
- (void)setViewController:(id)arg1;
- (void)setCompletion:(id)arg1;
- (id)completion;
- (float)_curlUpRevealedHeight;

@end
