/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_AudioQueueAllocateBuffer.h"

#import "NSXMLParserDelegate-Protocol.h"

@interface ResponseParser : _AudioQueueAllocateBuffer <NSXMLParserDelegate>
{
    BOOL hasError_;
    BOOL responseIsParsed_;
    BOOL dayStartIsParsed_;
    BOOL appIsParsed_;
    BOOL updateCheckIsParsed_;
    BOOL urlIsParsed_;
    BOOL manifestIsParsed_;
    BOOL pingIsParsed_;
    double secondsSinceStartOfDay_;
    struct scoped_nsobject<NSString> appId_;
    struct scoped_ptr<UpgradeRecommendedDetails> updateInformation_;
    struct scoped_nsobject<NSArray> ignoredTags_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)parser:(id)fp8 didStartElement:(id)fp12 namespaceURI:(id)fp16 qualifiedName:(id)fp20 attributes:(id)fp24;
- (CDAnonymousStruct2 *)upgradeRecommendedDetails;
- (double)secondsSinceStartOfDay;
- (BOOL)isCorrect;
- (id)initWithAppId:(id)fp8;

@end

