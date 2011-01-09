/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString, VMUSymbolOwner;



@interface VMUSymbol : VMUAddressRange <NSCopying>
{
    NSString *_name;
    NSString *_mangledName;
    VMUSymbolOwner *_owner;
    NSUInteger _flags;
}

+ (id)symbolWithName:(id)arg1 mangledName:(id)arg2 addressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg3 owner:(id)arg4 flags:(NSUInteger)arg5;

- (BOOL)isExternal;
- (NSUInteger)flags;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSInteger)compare:(id)arg1;
- (id)text;
- (id)name;
- (void)dealloc;
- (id)description;
- (id)owner;
- (void)setOwner:(id)arg1;
- (id)sourceInfoForAddress:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 mangledName:(id)arg2 addressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg3 owner:(id)arg4 flags:(NSUInteger)arg5;
- (id)mangledName;
- (BOOL)isFunction;
- (BOOL)isObjcMethod;
- (BOOL)isJavaMethod;
- (BOOL)isDyldStub;
- (BOOL)isArm;
- (BOOL)isThumb;
- (BOOL)isEqualToSymbol:(id)arg1;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })addressRange;
- (id)sourceInfosInAddressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)sourceInfos;

@end