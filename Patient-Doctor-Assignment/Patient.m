//
//  Patient.m
//  Patient-Doctor-Assignment
//
//  Created by Luiz on 5/2/19.
//  Copyright © 2019 Luiz. All rights reserved.
//

#import "Patient.h"

@implementation Patient

- (instancetype)initWithName: (NSString *) name andAge: (NSUInteger) age
{
    self = [super init];
    if (self) {
        _name = name;
        _age = age;
        _symptoms = [NSArray array];
        _prescriptions = [NSArray array];
    }
    return self;
}
@end
