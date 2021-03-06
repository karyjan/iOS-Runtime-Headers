/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKStoreItemInternal;

@interface GKPurchasableGameCellContents : GKGameCellContents  {
    GKStoreItemInternal *_storeItem;
    float _capturedRating;
}

@property(retain) GKStoreItemInternal * storeItem;
@property float capturedRating;

+ (id)purchasableGameCellContentsWithTheme:(id)arg1;
+ (int)lineCount;

- (float)capturedRating;
- (void)drawStoreRatingAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCapturedRating:(float)arg1;
- (void)setStoreItem:(id)arg1;
- (id)storeItem;
- (void)configureLines;
- (void)updateLines;
- (void)setConfirmationButtonRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawLineIndex:(unsigned int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 highlighted:(BOOL)arg3;
- (void)setGame:(id)arg1;
- (void)dealloc;
- (void)prepareForReuse;

@end
