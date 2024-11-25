//
//  RCTCamera.h
//  RNOpenAlpr
//
//  Created by Evan Rosenfeld on 2/24/17.
//  Copyright © 2017 CarDash. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import <React/RCTBridge.h>
#import <React/RCTUIManager.h>
#import <React/RCTEventEmitter.h>
#import <React/RCTUtils.h>
#import <React/RCTLog.h>
#import <React/UIView+React.h>
#import <AVFoundation/AVFoundation.h>

#import "PlateResult.h"

@class ALPRCameraManager;

@interface ALPRCamera : UIView

@property (nonatomic, copy) RCTDirectEventBlock onZoomChanged;
@property (nonatomic, copy) RCTBubblingEventBlock onPlateRecognized;

- (id)initWithManager:(ALPRCameraManager*)manager bridge:(RCTBridge *)bridge;

- (void) updatePlateBorder:(PlateResult *)result orientation:(UIDeviceOrientation)orientation;
@end
