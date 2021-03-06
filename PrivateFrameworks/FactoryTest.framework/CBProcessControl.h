/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FactoryTest.framework/FactoryTest
 */

@class NSDate, NSString;

@interface CBProcessControl : NSObject {
    void *_intCBPC;
}

@property(readonly) unsigned short absoluteFailCount;
@property(readonly) unsigned short eraseCount;
@property(readonly) unsigned char relativeFailCount;
@property(readonly) int status;
@property(readonly) NSString * swVersion;
@property(readonly) NSDate * timestamp;

+ (id)processControlWithIPodObj:(struct { unsigned int x1 : 2; unsigned int x2 : 8; unsigned int x3 : 10; unsigned int x4 : 12; unsigned int x5; unsigned char x6[24]; }*)arg1;

- (struct { unsigned int x1 : 2; unsigned int x2 : 8; unsigned int x3 : 10; unsigned int x4 : 12; unsigned int x5; unsigned char x6[24]; }*)_internalProcCntrl;
- (unsigned short)absoluteFailCount;
- (void)dealloc;
- (id)description;
- (unsigned short)eraseCount;
- (id)initWithIPodObj:(struct { unsigned int x1 : 2; unsigned int x2 : 8; unsigned int x3 : 10; unsigned int x4 : 12; unsigned int x5; unsigned char x6[24]; }*)arg1;
- (id)initWithStatus:(int)arg1 andFailCount:(int)arg2;
- (unsigned char)relativeFailCount;
- (int)status;
- (id)swVersion;
- (id)timestamp;

@end
