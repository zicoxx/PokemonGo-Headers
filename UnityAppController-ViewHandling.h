//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UnityAppController.h"

@interface UnityAppController (ViewHandling)
- (void)checkOrientationRequest;
- (void)orientUnity:(long long)arg1;
- (void)orientInterface:(long long)arg1;
- (void)transitionToViewController:(id)arg1;
- (void)showGameUI;
- (void)createUI;
- (id)createSnapshotView;
- (void)interfaceDidChangeOrientationFrom:(long long)arg1;
- (void)interfaceWillChangeOrientationTo:(long long)arg1;
- (void)willTransitionToViewController:(id)arg1 fromViewController:(id)arg2;
- (void)willStartWithViewController:(id)arg1;
- (id)createRootViewController;
- (id)topMostController;
- (id)createRootViewControllerForOrientation:(long long)arg1;
- (id)createUnityViewControllerForOrientation:(long long)arg1;
- (id)createAutorotatingUnityViewController;
- (id)createUnityView;
- (void)updateAppOrientation:(long long)arg1;
@end

