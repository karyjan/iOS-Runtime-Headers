/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSAffineTransform : NSObject <NSCopying, NSCoding> {
    struct { 
        float m11; 
        float m12; 
        float m21; 
        float m22; 
        float tX; 
        float tY; 
    } _transformStruct;
}

+ (id)transform;

- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)scaleBy:(float)arg1;
- (void)invert;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)rotateByRadians:(float)arg1;
- (id)initWithTransform:(id)arg1;
- (void)rotateByDegrees:(float)arg1;
- (void)appendTransform:(id)arg1;
- (void)prependTransform:(id)arg1;
- (struct CGPoint { float x1; float x2; })transformPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTransformStruct:(struct { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct { float x1; float x2; float x3; float x4; float x5; float x6; })transformStruct;
- (void)scaleXBy:(float)arg1 yBy:(float)arg2;
- (struct CGSize { float x1; float x2; })transformSize:(struct CGSize { float x1; float x2; })arg1;
- (void)translateXBy:(float)arg1 yBy:(float)arg2;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (void)concatInContext:(struct CGContext { }*)arg1;
- (id)transformBezierPath:(id)arg1;
- (id)description;
- (float)angle;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })cgAffineTransform;
- (BOOL)isAxisAligned;
- (void)shearXBy:(float)arg1 yBy:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsOfTransformedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)differOnlyByTranslation:(id)arg1;
- (BOOL)differsFrom:(id)arg1;
- (void)transformRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 upperLeft:(struct CGPoint { float x1; float x2; }*)arg2 lowerLeft:(struct CGPoint { float x1; float x2; }*)arg3 lowerRight:(struct CGPoint { float x1; float x2; }*)arg4 upperRight:(struct CGPoint { float x1; float x2; }*)arg5;
- (id)initWithCGAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;

@end
