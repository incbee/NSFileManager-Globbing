#import <Foundation/Foundation.h>

@interface NSFileManager (Globbing)

- (NSArray*) arrayWithFilesMatchingPattern: (NSString*) pattern inDirectory: (NSString*) directory;

@end
