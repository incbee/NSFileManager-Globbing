#import <Foundation/Foundation.h>

@interface NSFileManager (Globbing)

// TODO: drop directory parameter (but check that ~ in pattern are then still expanded)
- (NSArray*) arrayWithFilesMatchingPattern: (NSString*) pattern inDirectory: (NSString*) directory;

@end
