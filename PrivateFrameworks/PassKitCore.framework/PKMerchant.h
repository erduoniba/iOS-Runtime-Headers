/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class CLLocation, NSString, NSURL;

@interface PKMerchant : NSObject <NSSecureCoding> {
    NSString *_industryCategory;
    int _industryCode;
    double _locationLatitude;
    double _locationLongitude;
    unsigned long long _mapsIdentifier;
    NSString *_name;
    NSString *_phoneNumber;
    NSString *_shortName;
    NSURL *_url;
}

@property(readonly) NSString * displayName;
@property(copy) NSString * industryCategory;
@property int industryCode;
@property(copy) CLLocation * location;
@property double locationLatitude;
@property double locationLongitude;
@property unsigned long long mapsIdentifier;
@property(copy) NSString * name;
@property(copy) NSString * phoneNumber;
@property(copy) NSString * shortName;
@property(setter=setURL:,copy) NSURL * url;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)industryCategory;
- (int)industryCode;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMerchant:(id)arg1;
- (id)location;
- (double)locationLatitude;
- (double)locationLongitude;
- (unsigned long long)mapsIdentifier;
- (id)name;
- (id)phoneNumber;
- (void)setIndustryCategory:(id)arg1;
- (void)setIndustryCode:(int)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationLatitude:(double)arg1;
- (void)setLocationLongitude:(double)arg1;
- (void)setMapsIdentifier:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setShortName:(id)arg1;
- (void)setURL:(id)arg1;
- (id)shortName;
- (id)url;

@end