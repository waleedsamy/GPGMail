//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MCActivityTarget.h"
#import "MessageDeletionTransfer.h"

@class NSArray, NSMutableArray, NSProgress, NSString;

@interface MessageTransfer : NSObject <MCActivityTarget, MessageDeletionTransfer>
{
    NSMutableArray *_operations;	// 8 = 0x8
    BOOL _deleteOriginals;	// 16 = 0x10
    BOOL _allowsUndo;	// 17 = 0x11
    BOOL _registeredForUndo;	// 18 = 0x12
    BOOL _isDeleteOperation;	// 19 = 0x13
    BOOL _isArchiveOperation;	// 20 = 0x14
    BOOL _undoInProgress;	// 21 = 0x15
    BOOL _needToUndoTransfer;	// 22 = 0x16
    id <MessageTransferDelegate> _delegate;	// 24 = 0x18
    NSArray *_sourceLabels;	// 32 = 0x20
    NSProgress *_transferProgress;	// 40 = 0x28
}

+ (void)queueMailboxDeletions:(id)arg1;	// IMP=0x000000010022174f
+ (BOOL)_shouldProceedWithMailboxDeletions:(id)arg1;	// IMP=0x000000010022122c
+ (void)_redo:(id)arg1;	// IMP=0x000000010021eb57
+ (void)_undo:(id)arg1;	// IMP=0x000000010021eb42
+ (void)initialize;	// IMP=0x0000000100033324
+ (id)log;	// IMP=0x000000010021eae3
@property(nonatomic) BOOL needToUndoTransfer; // @synthesize needToUndoTransfer=_needToUndoTransfer;
@property(nonatomic) BOOL undoInProgress; // @synthesize undoInProgress=_undoInProgress;
@property(nonatomic) BOOL isArchiveOperation; // @synthesize isArchiveOperation=_isArchiveOperation;
@property(nonatomic) BOOL isDeleteOperation; // @synthesize isDeleteOperation=_isDeleteOperation;
@property(nonatomic) BOOL registeredForUndo; // @synthesize registeredForUndo=_registeredForUndo;
@property(retain, nonatomic) NSProgress *transferProgress; // @synthesize transferProgress=_transferProgress;
@property(copy) NSArray *sourceLabels; // @synthesize sourceLabels=_sourceLabels;
@property BOOL allowsUndo; // @synthesize allowsUndo=_allowsUndo;
@property BOOL deleteOriginals; // @synthesize deleteOriginals=_deleteOriginals;
@property __weak id <MessageTransferDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x00000001002218fc
- (id)_undoActionNameForMessageCount:(unsigned long long)arg1;	// IMP=0x000000010008a6d6
@property(readonly, nonatomic) BOOL anySourceStoreAllowsDeleteInPlace;
@property(readonly, copy, nonatomic) NSArray *sourceStores;
@property(readonly, copy, nonatomic) NSArray *destinationMailboxes;
- (id)_destinationMailboxForOperation:(id)arg1;	// IMP=0x0000000100220f1e
- (void)_synchronouslyPerformTransfer;	// IMP=0x000000010008b90f
- (void)_postDidEndDocumentTransferNotification:(id)arg1 result:(long long)arg2 destinationAccount:(id)arg3 missedMessages:(id)arg4;	// IMP=0x0000000100220a27
- (void)_postWillBeginDocumentTransferNotification:(id)arg1;	// IMP=0x00000001002208a0
- (void)_redo;	// IMP=0x00000001002204e8
- (void)_undoSettingFlags:(id)arg1 transferringMessages:(id)arg2;	// IMP=0x000000010021f1c2
- (void)_undo;	// IMP=0x000000010021ec3b
- (void)_registerForUndoType:(long long)arg1;	// IMP=0x000000010008a244
- (void)_completedTransferWithError:(id)arg1;	// IMP=0x000000010008e688
- (void)beginTransfer;	// IMP=0x0000000100089d35
@property(readonly, nonatomic) BOOL canBeginTransfer;
- (void)dealloc;	// IMP=0x000000010008ef78
- (id)init;	// IMP=0x000000010021eb6c
- (id)initWithMessages:(id)arg1 targetMailbox:(id)arg2 isDeleteOperation:(BOOL)arg3 isArchiveOperation:(BOOL)arg4;	// IMP=0x0000000100088ea0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isSmartMailbox;
@property(readonly) Class superclass;

@end

