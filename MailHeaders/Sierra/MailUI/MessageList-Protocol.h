//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class MCMessage, NSArray, NSDictionary;

@protocol MessageList <NSObject>
@property(readonly, nonatomic) unsigned long long totalMessageCount;
@property(readonly, copy, nonatomic) NSArray *unrolledObjects;
@property(readonly, nonatomic) __weak id <MessageListDelegate> delegate;
- (unsigned long long)adjustedIndexOfMessage:(MCMessage *)arg1;
- (void)removeMessages:(NSArray *)arg1 andReplaceMessages:(NSDictionary *)arg2 animate:(BOOL)arg3;
- (void)addPrimaryMessages:(NSArray *)arg1 secondaryMessages:(NSArray *)arg2;
- (void)updateMessages:(NSArray *)arg1;
- (void)applyFilter;
- (void)invert;
- (void)resort;
@end

