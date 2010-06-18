/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSAnimation.h"

@class ExpandingSplitView;

@interface SplitterAnimation : NSAnimation
{
    ExpandingSplitView *_splitView;
    float _startPercentage;
    float _endPercentage;
}

- (id)initWithSplitView:(id)arg1 endPercentage:(float)arg2;
- (id)initWithSplitView:(id)arg1 endPercentage:(float)arg2 duration:(double)arg3;
- (id)initWithDuration:(double)arg1 animationCurve:(unsigned long)arg2;
- (void)dealloc;
- (void)_updatePercentage;
- (void)setCurrentProgress:(float)arg1;

@end
