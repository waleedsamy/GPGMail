//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IMAP/IMAPResponse.h>

@class NSDictionary, NSString;

@interface IMAPStatusResponse : IMAPResponse
{
    NSString *_mailboxName;	// 8 = 0x8
    NSDictionary *_statusEntries;	// 16 = 0x10
}

+ (BOOL)handlesResponseWithName:(const char *)arg1 ofLength:(unsigned long long)arg2;	// IMP=0x000000000005c96d
@property(copy, nonatomic) NSDictionary *statusEntries; // @synthesize statusEntries=_statusEntries;
@property(copy, nonatomic) NSString *mailboxName; // @synthesize mailboxName=_mailboxName;
- (void).cxx_destruct;	// IMP=0x000000000005cb66
- (id)description;	// IMP=0x000000000005c99c

@end

