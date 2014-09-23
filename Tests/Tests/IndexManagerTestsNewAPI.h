//
//  IndexManagerTests.h
//  Tests
//
//  Created by Thomas Blench on 27/01/2014.
//
//

#import <SenTestingKit/SenTestingKit.h>
#import "CloudantSyncTests.h"
#import "CDTIndexer.h"

@class CDTDatastore;

@interface IndexManagerTestsNewAPI : CloudantSyncTests

@property (nonatomic,strong) CDTDatastore *datastore;


@end

@interface CDTTestIndexer1NewAPI : NSObject<CDTIndexer>

@end