//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "USDataBundle.h"

@class NSDictionary, NSString;

@interface USJSONDataBundle : NSObject <USDataBundle>
{
    NSDictionary *_dataBundleDictionary;
}

@property(readonly, nonatomic) NSDictionary *dataBundleDictionary; // @synthesize dataBundleDictionary=_dataBundleDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *dataString;
@property(readonly, nonatomic) NSString *formatString;
- (id)initWithDataBundleDictionary:(id)arg1;
- (id)init;

@end

