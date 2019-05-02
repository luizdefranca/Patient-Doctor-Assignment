//
//  MedicalRecords.m
//  Patient-Doctor-Assignment
//
//  Created by Luiz on 5/2/19.
//  Copyright © 2019 Luiz. All rights reserved.
//

#import "MedicalRecord.h"

@implementation MedicalRecord
- (instancetype)initWithDoctorName: (NSString*) doctor andSymptom: (NSArray*) symptoms andPrescription: (NSArray*) prescription
{
    self = [super init];
    if (self) {
        _doctorName = doctor;
        _symptoms = symptoms;
        _prescritions = prescription;
    }
    return self;
}
@end
