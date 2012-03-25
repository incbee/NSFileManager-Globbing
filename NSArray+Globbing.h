#import <Foundation/Foundation.h>

@interface NSArray (Globbing)

+ (NSArray*) arrayWithFilesMatchingPattern: (NSString*) pattern inDirectory: (NSString*) directory;

@end
