//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EJBindingBase.h"

@class EJBindingCanvasContextWebGL;

@interface EJBindingWebGLObject : EJBindingBase
{
    unsigned int index;
    EJBindingCanvasContextWebGL *webglContext;
}

+ (void *)_ptr_to_func___id;
+ (struct OpaqueJSValue *)createJSObjectWithContext:(struct OpaqueJSContext *)arg1 scriptView:(id)arg2 webglContext:(id)arg3 index:(unsigned int)arg4;
+ (id)webGLObjectFromJSValue:(struct OpaqueJSValue *)arg1;
+ (int)indexFromJSValue:(struct OpaqueJSValue *)arg1;
- (struct OpaqueJSValue *)_func___id:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (void)dealloc;
- (unsigned int)getIndex;
- (void)invalidate;
- (id)initWithWebGLContext:(id)arg1 index:(unsigned int)arg2;

@end

