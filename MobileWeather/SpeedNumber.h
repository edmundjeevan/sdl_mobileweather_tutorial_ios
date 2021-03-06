//
//  SpeedNumber.h
//  MobileWeather
//
//  Copyright (c) 2013-2015 Ford Motor Company. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UnitNumber.h"

@interface SpeedNumber : UnitNumber

/** Returns the unit of the representing number. */
@property (readonly) UnitSpeedType speedUnit;

/** Creates a new object using a number and the unit that describes the value. */
+ (instancetype)numberWithNumber:(NSNumber *)number withUnit:(UnitSpeedType)unit;

/** Creates a new object using a number and the unit that describes the value. */
- (instancetype)initWithNumber:(NSNumber *)number withUnit:(UnitSpeedType)unit;

/** Returns the value represented in the desired unit. */
- (double)doubleValueForUnit:(UnitSpeedType)unit;

/**
 * Returns a human readable string representation of the value rounded.
 * @param unit The desired unit to that the value will be converted to.
 * @param shortened Specifies if the string should include the abbreviation of the unit name.
 */
- (NSString *)stringValueForUnit:(UnitSpeedType)unit shortened:(BOOL)shortened;

/**
 * Returns a human readable string representation of the value.
 * @param unit The desired unit to that the value will be converted to.
 * @param shortened Specifies if the string should include the abbreviation of the unit name.
 * @param format Specifies the format for the value.
 */
- (NSString *)stringValueForUnit:(UnitSpeedType)unit shortened:(BOOL)shortened format:(NSString *)format;

/**
 * Returns a human readable string representation of the value rounded.
 * @param unit The desired unit to that the value will be converted to.
 * @param shortened Specifies if the string should include the abbreviation of the unit name.
 * @param localization Specifies the localization to be used for the unit.
 */
- (NSString *)stringValueForUnit:(UnitSpeedType)unit shortened:(BOOL)shortened localization:(Localization *)localization;

/**
 * Returns a human readable string representation of the value.
 * @param unit The desired unit to that the value will be converted to.
 * @param shortened Specifies if the string should include the abbreviation of the unit name.
 * @param localization Specifies the localization to be used for the unit.
 * @param format Specifies the format for the value.
 */
- (NSString *)stringValueForUnit:(UnitSpeedType)unit shortened:(BOOL)shortened localization:(Localization *)localization format:(NSString *)format;

/**
 * Returns the name of the unit as a string with respect to plural rules for the value.
 * @param unit The desired unit of that the name should be returned.
 * @param shortened Specifies if the method should return the abbreviation of the unit name.
 */
- (NSString *)nameForUnit:(UnitSpeedType)unit shortened:(BOOL)shortened;

/**
 * Returns the name of the unit as a string with respect to plural rules for the value.
 * @param unit The desired unit of that the name should be returned.
 * @param shortened Specifies if the method should return the abbreviation of the unit name.
 * @param format Specifies the format for the value.
 */
- (NSString *)nameForUnit:(UnitSpeedType)unit shortened:(BOOL)shortened format:(NSString *)format;

/**
 * Returns the name of the unit as a string with respect to plural rules for the value.
 * @param unit The desired unit of that the name should be returned.
 * @param shortened Specifies if the method should return the abbreviation of the unit name.
 * @param localization Specifies the localization to be used for the unit.
 */
- (NSString *)nameForUnit:(UnitSpeedType)unit shortened:(BOOL)shortened localization:(Localization *)localization;

/**
 * Returns the name of the unit as a string with respect to plural rules for the value.
 * @param unit The desired unit of that the name should be returned.
 * @param shortened Specifies if the method should return the abbreviation of the unit name.
 * @param localization Specifies the localization to be used for the unit.
 * @param format Specifies the format for the value.
 */
- (NSString *)nameForUnit:(UnitSpeedType)unit shortened:(BOOL)shortened localization:(Localization *)localization format:(NSString *)format;

@end
