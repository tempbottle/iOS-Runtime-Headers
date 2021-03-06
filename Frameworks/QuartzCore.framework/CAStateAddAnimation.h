/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@class CAAnimation, NSString;

@interface CAStateAddAnimation : CAStateElement {
    CAAnimation *_animation;
    NSString *_key;
}

@property(retain) CAAnimation * animation;
@property(copy) NSString * key;

- (id)animation;
- (void)apply:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (id)keyPath;
- (BOOL)matches:(id)arg1;
- (void)setAnimation:(id)arg1;
- (void)setKey:(id)arg1;

@end
