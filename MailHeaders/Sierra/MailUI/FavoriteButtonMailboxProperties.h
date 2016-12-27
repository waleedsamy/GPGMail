//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSString;

@interface FavoriteButtonMailboxProperties : NSObject
{
    BOOL _isContainer;	// 8 = 0x8
    BOOL _isPreferredSelection;	// 9 = 0x9
    int _type;	// 12 = 0xc
    NSString *_persistentID;	// 16 = 0x10
    NSString *_selectedSubMailboxPersistentID;	// 24 = 0x18
    NSString *_displayName;	// 32 = 0x20
    NSString *_accountURLString;	// 40 = 0x28
}

@property(nonatomic) BOOL isPreferredSelection; // @synthesize isPreferredSelection=_isPreferredSelection;
@property(nonatomic) BOOL isContainer; // @synthesize isContainer=_isContainer;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *accountURLString; // @synthesize accountURLString=_accountURLString;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *selectedSubMailboxPersistentID; // @synthesize selectedSubMailboxPersistentID=_selectedSubMailboxPersistentID;
@property(retain, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
- (void).cxx_destruct;	// IMP=0x0000000100175020
- (id)dictionaryRepresentation;	// IMP=0x000000010009cc8d
- (id)init;	// IMP=0x0000000100174e85
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000100010e95
- (id)initWithPersistentID:(id)arg1 selectedSubMailboxPersistentID:(id)arg2 displayName:(id)arg3 accountURLString:(id)arg4 type:(int)arg5 isContainer:(BOOL)arg6 isPreferredSelection:(BOOL)arg7;	// IMP=0x0000000100174d4a

@end

