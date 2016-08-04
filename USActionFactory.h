//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "USActionFactoryInterface.h"
#import "USActionHandlerRegistry.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface USActionFactory : NSObject <USActionFactoryInterface, USActionHandlerRegistry>
{
    NSMutableDictionary *_actionToHandlerMap;
    NSDictionary *_actionToBuilderMap;
}

- (void).cxx_destruct;
- (CDUnknownBlockType)notifyUXMValuesSynchronized;
- (CDUnknownBlockType)openInAppStoreBuilder;
- (CDUnknownBlockType)setBundleIDBuilder;
- (CDUnknownBlockType)UXMEnumerateBuilder;
- (CDUnknownBlockType)modifyValueBuilder;
- (CDUnknownBlockType)associateOnceBuilder;
- (CDUnknownBlockType)presentCloseButtonBuilder;
- (CDUnknownBlockType)sendFormDataBuilder;
- (CDUnknownBlockType)openURLBuilder;
- (CDUnknownBlockType)triggerActionBuilder;
- (CDUnknownBlockType)notifyPurchasesBuilder;
- (CDUnknownBlockType)notifyRewardsBuilder;
- (CDUnknownBlockType)triggerIfContentAvailableBuilder;
- (CDUnknownBlockType)disposeActionMapBuilder;
- (CDUnknownBlockType)sendEventBuilder;
- (CDUnknownBlockType)presentScopelessContentBuilder;
- (CDUnknownBlockType)presentScopedContentBuilder;
- (CDUnknownBlockType)buildContentBuilder;
@property(readonly) NSMutableDictionary *actionToHandlerMap; // @synthesize actionToHandlerMap=_actionToHandlerMap;
- (void)registerHandler:(CDUnknownBlockType)arg1 forActionType:(id)arg2;
- (id)actionWithDictionary:(id)arg1 map:(id)arg2;
@property(readonly) NSDictionary *actionToBuilderMap; // @synthesize actionToBuilderMap=_actionToBuilderMap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

