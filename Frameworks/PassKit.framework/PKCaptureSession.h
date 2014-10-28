/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class <PKCaptureDelegate>, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoPreviewLayer, NSObject<OS_dispatch_queue>, NSString;

@interface PKCaptureSession : NSObject <AVCaptureMetadataOutputObjectsDelegate> {
    AVCaptureSession *_captureSession;
    <PKCaptureDelegate> *_delegate;
    AVCaptureDeviceInput *_deviceInput;
    NSObject<OS_dispatch_queue> *_metadataQueue;
    AVCaptureVideoPreviewLayer *_previewLayer;
}

@property(copy,readonly) NSString * debugDescription;
@property <PKCaptureDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) BOOL isRunning;
@property(readonly) AVCaptureVideoPreviewLayer * previewLayer;
@property(readonly) Class superclass;

- (void)_changeCameraConfiguration;
- (void)autoExposeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)autoFocusAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isRunning;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)previewLayer;
- (void)setDelegate:(id)arg1;
- (void)setupCameraSession;
- (void)startRunning;
- (void)stopRunning;

@end