/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
 */

@interface DKDrawing : NSObject <NSCopying, NSSecureCoding> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _canvasBounds;
    NSMutableArray * _strokes;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _strokesFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } canvasBounds;
@property (nonatomic, retain) NSArray *strokes;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } strokesFrame;
@property (nonatomic, readonly) int totalPoints;

+ (id)copyOfDrawing:(id)arg1 toFitInBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (void)resizeDrawing:(id)arg1 toFitInBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addBrushStroke:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })canvasBounds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedBrushStrokesWithArchiverEncodedBrushStrokes:(id)arg1;
- (id)encodeBrushStrokesForArchiving;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mutableStrokes;
- (void)removeLastBrushStroke;
- (void)reset;
- (void)setCanvasBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStrokes:(id)arg1;
- (void)setStrokesFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)strokes;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })strokesFrame;
- (int)totalPoints;

@end
