//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCTaskHandler.h"

@class MFEWSAccount;

@interface MFEWSPersistenceTaskHandler : MCTaskHandler
{
    MFEWSAccount *_account;	// 8 = 0x8
}

@property(readonly) __weak MFEWSAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;	// IMP=0x00000000000b193d
- (id)init;	// IMP=0x00000000000b1855
- (id)initWithAccount:(id)arg1;	// IMP=0x00000000000b17ed

@end

