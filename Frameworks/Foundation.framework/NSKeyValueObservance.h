/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject, NSKeyValueProperty, NSPointerArray;



@interface NSKeyValueObservance : NSObject 
{
    NSInteger _retainCountMinusOne;
    NSObject *_observer;
    NSKeyValueProperty *_property;
    NSUInteger _options;
    void *_context;
    NSObject *_originalObservable;
    NSUInteger _cachedUnrotatedHashComponent;
    BOOL _cachedIsShareable;
    NSPointerArray *_observationInfos;
    struct auto_weak_callback_block { 
        struct auto_weak_callback_block {} *next; 
        int (*callback_function)(); 
        void *arg1; 
        void *arg2; 
    } _observerWentAwayCallback;
}


- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (NSUInteger)retainCount;
- (id)description;
- (id)_initWithObserver:(id)arg1 property:(id)arg2 options:(NSUInteger)arg3 context:(void*)arg4 originalObservable:(id)arg5;

@end