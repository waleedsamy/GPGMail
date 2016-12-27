//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (MailFrameworkAdditions)
+ (id)validURLCharacterSet;	// IMP=0x0000000000201b5b
- (BOOL)isEqualExceptForFinalSlash:(id)arg1;	// IMP=0x0000000000201bc7
@property(readonly, copy, nonatomic) NSString *validURLString;
- (BOOL)hasPrefixIgnoreCaseAndDiacritics:(id)arg1;	// IMP=0x0000000000201873
- (id)uniqueFilenameWithRespectToFilenames:(id)arg1;	// IMP=0x00000000002014da
@property(readonly, copy, nonatomic) NSString *encodedMessageIDString;
@property(readonly, copy, nonatomic) NSString *foldedStringForSuggestionsOriginatedExactMatchSearches;
@property(readonly, copy, nonatomic) NSString *fileSystemString;
@property(readonly, nonatomic) BOOL containsOnlyWhitespace;
- (id)stringByReplacingSpecialSlashesWith:(id)arg1;	// IMP=0x0000000000201226
@property(readonly, copy, nonatomic) NSString *stringByReplacingSpecialSlashesWithSlashes;
@property(readonly, copy, nonatomic) NSString *stringByReplacingSlashesWithSpecialSlashes;
- (id)specialSlash;	// IMP=0x00000000002010f5
@property(readonly, copy, nonatomic) NSString *stringByChangingBodyTagToDiv;
@end

