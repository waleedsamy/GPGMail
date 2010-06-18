/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSActionCell.h"

@class NSMenu, NSTimer;

@interface SaveAttachmentsButtonCell : NSActionCell
{
    struct CGSize _labelSize;
    NSMenu *_menu;
    NSTimer *_menuTimer;
    struct CGRect _trackingRect;
    BOOL _sendSelectionAction;
}

+ (BOOL)prefersTrackingUntilMouseUp;
- (id)initWithTitle:(id)arg1;
- (void)_invalidateMenuTimer;
- (void)dealloc;
- (id)menu;
- (void)_calcLabelSize;
- (void)setFont:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)_sendActionFrom:(id)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)_trackMenu;
- (void)performClick:(id)arg1;
- (void)_displayDelayedMenu;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;

@end
