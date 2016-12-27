//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFLibraryUpgradeStep.h>

@class NSArray;

@interface MFReparseReferenceHeadersUpgradeStep : MFLibraryUpgradeStep
{
    NSArray *_accounts;	// 8 = 0x8
}

+ (BOOL)needToPerformFromMinorVersion:(unsigned long long)arg1 initialLastWriteMinorVersion:(unsigned long long)arg2 fromBackBooting:(char *)arg3;	// IMP=0x0000000000248041
+ (unsigned long long)targetVersion;	// IMP=0x0000000000248036
@property(readonly, copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;	// IMP=0x000000000024987e
- (void)_reparseReferencesForRowIDsByMailboxURL:(id)arg1;	// IMP=0x0000000000248c69
- (void)runWithRowIDsNeedingConversationRecalculation:(id)arg1;	// IMP=0x000000000024811a
- (id)initWithSQLHandle:(id)arg1 accounts:(id)arg2;	// IMP=0x000000000024807b

@end

