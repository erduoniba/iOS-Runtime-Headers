/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */



@interface GQDPointPath : GQDPath 
{
    NSInteger mType;
    struct CGPoint { 
        float x; 
        float y; 
    } mPoint;
    struct CGSize { 
        float width; 
        float height; 
    } mSize;
}


- (NSInteger)type;
- (struct CGPoint { float x1; float x2; })point;
- (struct CGSize { float x1; float x2; })size;
- (struct CGPath { }*)createBezierPath;
- (NSInteger)readAttributesFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (NSInteger)mapStrType:(struct __CFString { }*)arg1;

@end