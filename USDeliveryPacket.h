//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, USBatchItem;

@interface USDeliveryPacket : NSObject
{
    USBatchItem *_batchItem;
    NSArray *_route;
}

@property(retain, nonatomic) NSArray *route; // @synthesize route=_route;
@property(retain, nonatomic) USBatchItem *batchItem; // @synthesize batchItem=_batchItem;
- (void).cxx_destruct;
- (id)initWithBatchItem:(id)arg1 route:(id)arg2;
- (id)init;

@end

