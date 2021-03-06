//
//  UnitNumber.h
//  MobileWeather
//
//  Copyright (c) 2013-2015 Ford Motor Company. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UnitConverter.h"
#import "Localization.h"

@interface UnitNumber : NSObject

/** Returns the unit of the value represented by the number. */
@property (readonly) NSUInteger unit;

/** Returns the number of the value. */
@property (readonly) NSNumber *number;

/** Creates a new object using a number and the unit that describes the value. */
+ (instancetype)numberWithNumber:(NSNumber *)number withUnitValue:(NSUInteger)unit;

/** Creates a new object using a number and the unit that describes the value. */
- (instancetype)initWithNumber:(NSNumber *)number withUnitValue:(NSUInteger)unit;

@end
