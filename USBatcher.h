//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSTimer, USEventBatch, USQueueConfiguration, USRequestAttributeSetBuilder;

@interface USBatcher : NSObject
{
    id <USBatcherDelegate> _delegate;
    NSOperationQueue *_operationQueue;
    USEventBatch *_activeBatch;
    NSMutableSet *_pendingBatches;
    id <USDataSenderInterface> _dataSender;
    NSTimer *_sendTimer;
    NSTimer *_retryTimer;
    NSMutableDictionary *_retryInfos;
    USRequestAttributeSetBuilder *_attributeBuilder;
    NSString *_attributeSetName;
    USQueueConfiguration *_queueConfiguration;
}

@property(retain) USQueueConfiguration *queueConfiguration; // @synthesize queueConfiguration=_queueConfiguration;
@property(retain, nonatomic) NSString *attributeSetName; // @synthesize attributeSetName=_attributeSetName;
@property(retain, nonatomic) USRequestAttributeSetBuilder *attributeBuilder; // @synthesize attributeBuilder=_attributeBuilder;
@property(retain, nonatomic) NSMutableDictionary *retryInfos; // @synthesize retryInfos=_retryInfos;
@property(retain, nonatomic) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(retain, nonatomic) NSTimer *sendTimer; // @synthesize sendTimer=_sendTimer;
@property(retain, nonatomic) id <USDataSenderInterface> dataSender; // @synthesize dataSender=_dataSender;
@property(retain, nonatomic) NSMutableSet *pendingBatches; // @synthesize pendingBatches=_pendingBatches;
@property(retain, nonatomic) USEventBatch *activeBatch; // @synthesize activeBatch=_activeBatch;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <USBatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onRetryTimerDidFire:(id)arg1;
- (void)installRetryTimer;
- (void)onSendTimerDidFire:(id)arg1;
- (void)invalidateSendTimer;
- (void)installSendTimer;
- (void)dispatchBatch:(id)arg1;
- (id)endpointURLForQueueConfiguration:(id)arg1;
- (_Bool)shouldRetryBatch:(id)arg1 afterError:(id)arg2;
- (void)removeRetryInfoForBatch:(id)arg1;
- (id)retryInfoForBatch:(id)arg1;
- (void)enqueueEvent:(id)arg1;
- (void)drain;
- (id)initWithQueueConfiguration:(id)arg1 attributeSetName:(id)arg2 attributeBuilder:(id)arg3 dataSender:(id)arg4 operationQueue:(id)arg5;
- (id)init;

@end

