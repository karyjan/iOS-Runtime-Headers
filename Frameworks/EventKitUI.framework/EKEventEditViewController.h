/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEvent, NSString, EKEventEditor, <EKEventEditViewDelegate>, EKEventStore;

@interface EKEventEditViewController : UINavigationController  {
    EKEventStore *_store;
    EKEvent *_event;
    <EKEventEditViewDelegate> *_editViewDelegate;
    NSString *_eventId;
    BOOL _showsTimeZone;
    EKEventEditor *_editor;
}

@property <EKEventEditViewDelegate> * editViewDelegate;
@property(retain) EKEventStore * eventStore;
@property(retain) EKEvent * event;
@property(retain) EKEventEditor * editor;
@property BOOL showsTimeZone;

+ (void)setDefaultDatesForEvent:(id)arg1;

- (void)dealloc;
- (id)event;
- (void)setEvent:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setEditor:(id)arg1;
- (id)editor;
- (id)editViewDelegate;
- (id)initWithEvent:(id)arg1 store:(id)arg2;
- (BOOL)showAttachments;
- (void)setCanHideDoneAndCancelButtons:(BOOL)arg1;
- (BOOL)canHideDoneAndCancelButtons;
- (void)setScrollToNotes:(BOOL)arg1;
- (void)refreshStartAndEndDates;
- (BOOL)saveWithSpan:(int)arg1 animated:(BOOL)arg2;
- (void)handleTapOutside;
- (void)editor:(id)arg1 prepareCalendarItemForEdit:(id)arg2;
- (void)editor:(id)arg1 didCompleteWithAction:(int)arg2;
- (BOOL)scrollToNotes;
- (void)setShowsTimeZone:(BOOL)arg1;
- (BOOL)showsTimeZone;
- (void)setShowAttachments:(BOOL)arg1;
- (void)setEditViewDelegate:(id)arg1;
- (void)setEventStore:(id)arg1;
- (void)_storeChanged:(id)arg1;
- (void)cancelEditing;
- (id)eventStore;

@end
