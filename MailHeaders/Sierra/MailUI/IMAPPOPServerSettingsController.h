//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ServerSettingsController.h"

@class ACAccount, NSNumber, NSPopUpButton, NSStackView, NSString, NSView;

@interface IMAPPOPServerSettingsController : ServerSettingsController
{
    BOOL _outgoingAccountNeedsSaving;	// 100 = 0x64
    BOOL _outgoingAccountNeedsVerification;	// 101 = 0x65
    NSPopUpButton *_incomingAuthenticationPopUp;	// 104 = 0x68
    NSPopUpButton *_outgoingAuthenticationPopUp;	// 112 = 0x70
    ACAccount *_outgoingAccount;	// 120 = 0x78
    NSStackView *_outgoingServerSettings;	// 128 = 0x80
    NSView *_outgoingProperties;	// 136 = 0x88
    NSView *_outgoingDynamicallyManagedProperties;	// 144 = 0x90
}

+ (id)keyPathsForValuesAffectingAnyAccountNeedsVerification;	// IMP=0x00000001001a8220
+ (id)keyPathsForValuesAffectingIncomingAdvancedButtonTitle;	// IMP=0x00000001001a80ee
+ (id)keyPathsForValuesAffectingOutgoingDisablesDynamicConfiguration;	// IMP=0x00000001001a7f45
+ (id)keyPathsForValuesAffectingOutgoingSSLEnabled;	// IMP=0x00000001001a7e0b
+ (id)keyPathsForValuesAffectingOutgoingPortNumber;	// IMP=0x00000001001a7ce7
+ (id)keyPathsForValuesAffectingOutgoingHostname;	// IMP=0x00000001001a7bd9
+ (id)keyPathsForValuesAffectingOutgoingPassword;	// IMP=0x00000001001a7a4a
+ (id)keyPathsForValuesAffectingOutgoingUsername;	// IMP=0x00000001001a787f
+ (id)keyPathsForValuesAffectingServerPath;	// IMP=0x00000001001a7771
+ (id)keyPathsForValuesAffectingIncomingSSLEnabled;	// IMP=0x00000001001a7637
+ (id)keyPathsForValuesAffectingIncomingPortNumber;	// IMP=0x00000001001a7513
+ (id)keyPathsForValuesAffectingIncomingHostname;	// IMP=0x00000001001a7405
+ (id)keyPathsForValuesAffectingIncomingAccountTypeDescription;	// IMP=0x00000001001a736b
@property(nonatomic) BOOL outgoingAccountNeedsVerification; // @synthesize outgoingAccountNeedsVerification=_outgoingAccountNeedsVerification;
@property(nonatomic) BOOL outgoingAccountNeedsSaving; // @synthesize outgoingAccountNeedsSaving=_outgoingAccountNeedsSaving;
@property(nonatomic) __weak NSView *outgoingDynamicallyManagedProperties; // @synthesize outgoingDynamicallyManagedProperties=_outgoingDynamicallyManagedProperties;
@property(nonatomic) __weak NSView *outgoingProperties; // @synthesize outgoingProperties=_outgoingProperties;
@property(nonatomic) __weak NSStackView *outgoingServerSettings; // @synthesize outgoingServerSettings=_outgoingServerSettings;
@property(retain, nonatomic) ACAccount *outgoingAccount; // @synthesize outgoingAccount=_outgoingAccount;
@property(nonatomic) __weak NSPopUpButton *outgoingAuthenticationPopUp; // @synthesize outgoingAuthenticationPopUp=_outgoingAuthenticationPopUp;
@property(nonatomic) __weak NSPopUpButton *incomingAuthenticationPopUp; // @synthesize incomingAuthenticationPopUp=_incomingAuthenticationPopUp;
- (void).cxx_destruct;	// IMP=0x00000001001a85a9
- (void)_outgoingAuthenticationPopUpClicked:(id)arg1;	// IMP=0x00000001001a8368
- (void)_incomingAuthenticationPopUpClicked:(id)arg1;	// IMP=0x00000001001a8287
@property(readonly, nonatomic) BOOL anyAccountNeedsVerification;
@property(readonly, copy, nonatomic) NSString *incomingAdvancedButtonTitle;
@property(retain, nonatomic) NSNumber *outgoingDisablesDynamicConfiguration;
@property(retain, nonatomic) NSNumber *outgoingSSLEnabled;
@property(retain, nonatomic) NSNumber *outgoingPortNumber;
@property(copy, nonatomic) NSString *outgoingHostname;
@property(copy, nonatomic) NSString *outgoingPassword;
@property(copy, nonatomic) NSString *outgoingUsername;
@property(copy, nonatomic) NSString *serverPath;
@property(retain, nonatomic) NSNumber *incomingSSLEnabled;
@property(retain, nonatomic) NSNumber *incomingPortNumber;
@property(copy, nonatomic) NSString *incomingHostname;
@property(readonly, copy, nonatomic) NSString *incomingAccountTypeDescription;
- (void)outgoingAccountDidChange:(id)arg1;	// IMP=0x00000001001a70de
- (id)advancedSettingsNibName;	// IMP=0x00000001001a6f48
- (void)accountDidFailToVerify:(id)arg1;	// IMP=0x00000001001a6eb6
- (id)getAccountsNeedingVerification;	// IMP=0x00000001001a6d50
- (void)_configureAuthenticationPopUp:(id)arg1 forAccount:(id)arg2;	// IMP=0x00000001001a6441
- (void)setUpUIForAccount:(id)arg1;	// IMP=0x00000001001a63ac
- (void)_accountStoreDidChange:(id)arg1;	// IMP=0x00000001001a6257
- (void)setRepresentedObject:(id)arg1;	// IMP=0x00000001001a6207
- (void)viewDidLoad;	// IMP=0x00000001001a614c
- (void)dealloc;	// IMP=0x00000001001a60d6

@end

