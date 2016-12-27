//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MCCIDURLProtocolDataProvider.h"
#import "QLPreviewItem.h"

@class MUIWKWebViewController, MUIWebAttachment, NSImage, NSProgress, NSString, NSURL;

@interface MUIWebAttachmentController : NSObject <MCCIDURLProtocolDataProvider, QLPreviewItem>
{
    long long _displayState;	// 8 = 0x8
    MUIWebAttachment *_webAttachment;	// 16 = 0x10
    MUIWKWebViewController *_controller;	// 24 = 0x18
    NSString *_markup;	// 32 = 0x20
    NSImage *_cachedSnapshot;	// 40 = 0x28
    long long _downloadedState;	// 48 = 0x30
    NSProgress *_downloadProgress;	// 56 = 0x38
    struct CGRect _cachedFrame;	// 64 = 0x40
}

@property(retain, nonatomic) NSProgress *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(nonatomic) long long downloadedState; // @synthesize downloadedState=_downloadedState;
@property(retain, nonatomic) NSImage *cachedSnapshot; // @synthesize cachedSnapshot=_cachedSnapshot;
@property(nonatomic) struct CGRect cachedFrame; // @synthesize cachedFrame=_cachedFrame;
@property(readonly, nonatomic) NSString *markup; // @synthesize markup=_markup;
@property(nonatomic) __weak MUIWKWebViewController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) MUIWebAttachment *webAttachment; // @synthesize webAttachment=_webAttachment;
- (void).cxx_destruct;	// IMP=0x0000000000023f49
- (void)startDownloadingIfNeededWithProgress:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023b0e
@property(readonly, copy) NSString *mimeType;
@property(readonly) NSURL *cidURL;
- (void)dataWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002387d
- (void)setImageScale:(long long)arg1;	// IMP=0x00000000000235e5
@property(readonly, nonatomic) struct CGRect frameForPreview;
@property(readonly, copy, nonatomic) NSImage *transitionImageForPreview;
@property(readonly) NSString *previewItemTitle;
@property(readonly) NSURL *previewItemURL;
@property(readonly, copy, nonatomic) NSString *deletionScriptString;
@property(readonly, copy, nonatomic) NSString *registrationScriptString;
@property(readonly, nonatomic) BOOL canDisplayInline;
@property(nonatomic) long long displayState;
- (void)_handleDownloadProgress:(id)arg1 changedFractionCompleted:(double)arg2;	// IMP=0x0000000000022dc5
- (void)_handleDownloadErrorChange:(id)arg1;	// IMP=0x0000000000022a82
- (void)_handleDownloadFinished;	// IMP=0x000000000002293f
- (void)_handleUpdateForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3;	// IMP=0x00000000000226fd
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000224c2
- (void)dealloc;	// IMP=0x0000000000022404
- (id)init;	// IMP=0x0000000000022335
- (id)initWithWebAttachment:(id)arg1 controller:(id)arg2;	// IMP=0x00000000000220a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) long long fileSize;
@property(readonly) unsigned long long hash;
@property(readonly) id previewItemDisplayState;
@property(readonly) Class superclass;

@end

