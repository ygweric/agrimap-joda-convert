//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/eric/repos/360-j2objc/joda-convert/build/mainTranslationExtraction/org/joda/convert/factory/NumericObjectArrayStringConverterFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_NumericObjectArrayStringConverterFactory")
#ifdef RESTRICT_NumericObjectArrayStringConverterFactory
#define INCLUDE_ALL_NumericObjectArrayStringConverterFactory 0
#else
#define INCLUDE_ALL_NumericObjectArrayStringConverterFactory 1
#endif
#undef RESTRICT_NumericObjectArrayStringConverterFactory

#if !defined (OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_) && (INCLUDE_ALL_NumericObjectArrayStringConverterFactory || defined(INCLUDE_OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory))
#define OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_

#define RESTRICT_StringConverterFactory 1
#define INCLUDE_OrgJodaConvertStringConverterFactory 1
#include "StringConverterFactory.h"

@class IOSClass;
@class JavaUtilRegexPattern;
@protocol OrgJodaConvertStringConverter;

@interface OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory : NSObject < OrgJodaConvertStringConverterFactory >

#pragma mark Public

- (id<OrgJodaConvertStringConverter>)findConverterWithIOSClass:(IOSClass *)cls;

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory)

inline id<OrgJodaConvertStringConverterFactory> OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_get_INSTANCE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<OrgJodaConvertStringConverterFactory> OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory, INSTANCE, id<OrgJodaConvertStringConverterFactory>)

inline JavaUtilRegexPattern *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_get_DELIMITER();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilRegexPattern *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DELIMITER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory, DELIMITER, JavaUtilRegexPattern *)

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory)

#endif

#if !defined (OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter_) && (INCLUDE_ALL_NumericObjectArrayStringConverterFactory || defined(INCLUDE_OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter))
#define OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_TypedStringConverter 1
#define INCLUDE_OrgJodaConvertTypedStringConverter 1
#include "TypedStringConverter.h"

@class IOSClass;
@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter_Enum) {
  OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter_Enum_INSTANCE = 0,
};

@interface OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter : JavaLangEnum < NSCopying, OrgJodaConvertTypedStringConverter >

#pragma mark Public

- (IOSObjectArray *)convertFromStringWithIOSClass:(IOSClass *)arg0
                                     withNSString:(NSString *)arg1;

+ (OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter_values_[];

inline OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter_get_INSTANCE();
J2OBJC_ENUM_CONSTANT(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter_values();

FOUNDATION_EXPORT OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_LongArrayStringConverter)

#endif

#if !defined (OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter_) && (INCLUDE_ALL_NumericObjectArrayStringConverterFactory || defined(INCLUDE_OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter))
#define OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_TypedStringConverter 1
#define INCLUDE_OrgJodaConvertTypedStringConverter 1
#include "TypedStringConverter.h"

@class IOSClass;
@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter_Enum) {
  OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter_Enum_INSTANCE = 0,
};

@interface OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter : JavaLangEnum < NSCopying, OrgJodaConvertTypedStringConverter >

#pragma mark Public

- (IOSObjectArray *)convertFromStringWithIOSClass:(IOSClass *)arg0
                                     withNSString:(NSString *)arg1;

+ (OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter_values_[];

inline OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter_get_INSTANCE();
J2OBJC_ENUM_CONSTANT(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter_values();

FOUNDATION_EXPORT OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_IntArrayStringConverter)

#endif

#if !defined (OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter_) && (INCLUDE_ALL_NumericObjectArrayStringConverterFactory || defined(INCLUDE_OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter))
#define OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_TypedStringConverter 1
#define INCLUDE_OrgJodaConvertTypedStringConverter 1
#include "TypedStringConverter.h"

@class IOSClass;
@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter_Enum) {
  OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter_Enum_INSTANCE = 0,
};

@interface OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter : JavaLangEnum < NSCopying, OrgJodaConvertTypedStringConverter >

#pragma mark Public

- (IOSObjectArray *)convertFromStringWithIOSClass:(IOSClass *)arg0
                                     withNSString:(NSString *)arg1;

+ (OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter_values_[];

inline OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter_get_INSTANCE();
J2OBJC_ENUM_CONSTANT(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter_values();

FOUNDATION_EXPORT OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_ShortArrayStringConverter)

#endif

#if !defined (OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter_) && (INCLUDE_ALL_NumericObjectArrayStringConverterFactory || defined(INCLUDE_OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter))
#define OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_TypedStringConverter 1
#define INCLUDE_OrgJodaConvertTypedStringConverter 1
#include "TypedStringConverter.h"

@class IOSClass;
@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter_Enum) {
  OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter_Enum_INSTANCE = 0,
};

@interface OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter : JavaLangEnum < NSCopying, OrgJodaConvertTypedStringConverter >

#pragma mark Public

- (IOSObjectArray *)convertFromStringWithIOSClass:(IOSClass *)arg0
                                     withNSString:(NSString *)arg1;

+ (OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter_values_[];

inline OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter_get_INSTANCE();
J2OBJC_ENUM_CONSTANT(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter_values();

FOUNDATION_EXPORT OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_DoubleArrayStringConverter)

#endif

#if !defined (OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter_) && (INCLUDE_ALL_NumericObjectArrayStringConverterFactory || defined(INCLUDE_OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter))
#define OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_TypedStringConverter 1
#define INCLUDE_OrgJodaConvertTypedStringConverter 1
#include "TypedStringConverter.h"

@class IOSClass;
@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter_Enum) {
  OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter_Enum_INSTANCE = 0,
};

@interface OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter : JavaLangEnum < NSCopying, OrgJodaConvertTypedStringConverter >

#pragma mark Public

- (IOSObjectArray *)convertFromStringWithIOSClass:(IOSClass *)arg0
                                     withNSString:(NSString *)arg1;

+ (OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter_values_[];

inline OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter_get_INSTANCE();
J2OBJC_ENUM_CONSTANT(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter_values();

FOUNDATION_EXPORT OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter *OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertFactoryNumericObjectArrayStringConverterFactory_FloatArrayStringConverter)

#endif

#pragma pop_macro("INCLUDE_ALL_NumericObjectArrayStringConverterFactory")
