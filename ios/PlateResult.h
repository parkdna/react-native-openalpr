NS_ASSUME_NONNULL_BEGIN

@interface PlateResult : NSObject

@property (nonatomic, strong) NSString *plate;
@property (nonatomic, strong) NSArray<NSValue *> *points;
@property (nonatomic) float confidence;
@property (nonatomic) int cols;
@property (nonatomic) int rows;

@end

NS_ASSUME_NONNULL_END
