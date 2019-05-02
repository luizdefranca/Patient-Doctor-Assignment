//
//  medicalRecordDatabase.h
//  Patient-Doctor-Assignment
//
//  Created by Luiz on 5/2/19.
//  Copyright © 2019 Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MedicalRecord.h"
NS_ASSUME_NONNULL_BEGIN

@interface MedicalRecordDatabase : NSObject
@property (assign) NSMutableArray<MedicalRecord*>* medicalRecords;
@end

NS_ASSUME_NONNULL_END
