//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFLibraryUpgradeStep.h>

@class NSArray;

@interface MFResetPartsHaveBeenCachedUpgradeStep : MFLibraryUpgradeStep
{
    NSArray *_accounts;	// 8 = 0x8
}

+ (BOOL)requiredAfterBackbooting;	// IMP=0x00000000002498cb
+ (unsigned long long)targetVersion;	// IMP=0x00000000002498c0
@property(readonly, copy, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
- (void).cxx_destruct;	// IMP=0x000000000024ac86
- (void)runWithRowIDsNeedingConversationRecalculation:(id)arg1;	// IMP=0x0000000000249a44
- (id)initWithSQLHandle:(id)arg1;	// IMP=0x0000000000249975
- (id)initWithSQLHandle:(id)arg1 accounts:(id)arg2;	// IMP=0x00000000002498d6

@end

