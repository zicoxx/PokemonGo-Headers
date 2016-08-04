//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface USPush : NSObject
{
    id <USAnalyticsInterface> _analytics;
    id <USBillboard> _billboard;
    id <UpsightDataStoreInterface> _dataStore;
}

+ (id)pushBillboard;
+ (void)handleRemoteNotificationWithUserInfo:(id)arg1;
+ (void)extractMessageID:(id *)arg1 campaignID:(id *)arg2 userInfo:(id)arg3;
+ (void)didRegisterUserNotificationSettings:(id)arg1;
+ (void)registerPushToken:(id)arg1;
+ (void)unregisterForPushNotifications;
+ (void)registerForPushNotifications;
+ (void)initialize;
+ (id)sharedPushInstance;
@property(retain, nonatomic) id <UpsightDataStoreInterface> dataStore; // @synthesize dataStore=_dataStore;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <USBillboard> billboard; // @synthesize billboard=_billboard;
@property(readonly, nonatomic) id <USAnalyticsInterface> analytics; // @synthesize analytics=_analytics;
- (id)initWithDataStore:(id)arg1;
- (id)init;

@end

