/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

@interface JSONDecoder : _AudioQueueAllocateBuffer
{
    struct JKParseState *parseState;
}

+ (id)decoderWithParseOptions:(unsigned int)fp8;
+ (id)decoder;
+ (void)load;
- (id)mutableObjectWithData:(id)fp8 error:(id *)fp12;
- (id)mutableObjectWithData:(id)fp8;
- (id)mutableObjectWithUTF8String:(const char *)fp8 length:(unsigned int)fp12 error:(id *)fp16;
- (id)mutableObjectWithUTF8String:(const char *)fp8 length:(unsigned int)fp12;
- (id)objectWithData:(id)fp8 error:(id *)fp12;
- (id)objectWithData:(id)fp8;
- (id)objectWithUTF8String:(const char *)fp8 length:(unsigned int)fp12 error:(id *)fp16;
- (id)objectWithUTF8String:(const char *)fp8 length:(unsigned int)fp12;
- (id)parseJSONData:(id)fp8 error:(id *)fp12;
- (id)parseJSONData:(id)fp8;
- (id)parseUTF8String:(const char *)fp8 length:(unsigned long)fp12 error:(id *)fp16;
- (id)parseUTF8String:(const char *)fp8 length:(unsigned long)fp12;
- (void)clearCache;
- (void)dealloc;
- (id)initWithParseOptions:(unsigned int)fp8;
- (id)init;

@end
