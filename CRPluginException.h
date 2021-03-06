//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CRPluginException : NSObject
{
    int _crExceptionType;
    NSString *_name;
    NSString *_reason;
    NSString *_platform;
    NSString *_subplatform;
    NSString *_stacktrace;
}

@property(retain, nonatomic) NSString *stacktrace; // @synthesize stacktrace=_stacktrace;
@property(readonly, nonatomic) int crExceptionType; // @synthesize crExceptionType=_crExceptionType;
@property(readonly, nonatomic) NSString *subplatform; // @synthesize subplatform=_subplatform;
@property(readonly, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)stackframes;
- (id)initWithName:(id)arg1 reason:(id)arg2 stacktrace:(id)arg3 exceptionType:(int)arg4 platformId:(int)arg5;

@end

