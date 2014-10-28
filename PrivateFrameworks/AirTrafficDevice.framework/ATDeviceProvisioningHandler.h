/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@class ATDeviceSettings, ATFairPlaySession, ATGrappaSession;

@interface ATDeviceProvisioningHandler : ATProvisioningHandler {
    ATFairPlaySession *_fairPlaySession;
    ATGrappaSession *_grappaSession;
    ATDeviceSettings *_settings;
}

- (void).cxx_destruct;
- (id)_getEndpointInfo;
- (id)_paramsForRequest:(id)arg1;
- (void)_processProvisioningRequest:(id)arg1 withParams:(id)arg2 onMessageLink:(id)arg3 withCompletion:(id)arg4;
- (void)_processProvisioningResponse:(id)arg1 withParams:(id)arg2 onMessageLink:(id)arg3 withCompletion:(id)arg4;
- (id)initAsEndpointType:(int)arg1;

@end