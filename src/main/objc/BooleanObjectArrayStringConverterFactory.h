//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/eric/repos/360-j2objc/joda-convert/build/mainTranslationExtraction/org/joda/convert/factory/BooleanObjectArrayStringConverterFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_BooleanObjectArrayStringConverterFactory")
#ifdef RESTRICT_BooleanObjectArrayStringConverterFactory
#define INCLUDE_ALL_BooleanObjectArrayStringConverterFactory 0
#else
#define INCLUDE_ALL_BooleanObjectArrayStringConverterFactory 1
#endif
#undef RESTRICT_BooleanObjectArrayStringConverterFactory

#if !defined (OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_) && (INCLUDE_ALL_BooleanObjectArrayStringConverterFactory || defined(INCLUDE_OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory))
#define OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_

#define RESTRICT_StringConverterFactory 1
#define INCLUDE_OrgJodaConvertStringConverterFactory 1
#include "StringConverterFactory.h"

@class IOSClass;
@protocol OrgJodaConvertStringConverter;

@interface OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory : NSObject < OrgJodaConvertStringConverterFactory >

#pragma mark Public

- (id<OrgJodaConvertStringConverter>)findConverterWithIOSClass:(IOSClass *)cls;

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory)

inline id<OrgJodaConvertStringConverterFactory> OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_get_INSTANCE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<OrgJodaConvertStringConverterFactory> OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory, INSTANCE, id<OrgJodaConvertStringConverterFactory>)

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory)

#endif

#if !defined (OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter_) && (INCLUDE_ALL_BooleanObjectArrayStringConverterFactory || defined(INCLUDE_OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter))
#define OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

#define RESTRICT_TypedStringConverter 1
#define INCLUDE_OrgJodaConvertTypedStringConverter 1
#include "TypedStringConverter.h"

@class IOSClass;
@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter_Enum) {
  OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter_Enum_INSTANCE = 0,
};

@interface OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter : JavaLangEnum < NSCopying, OrgJodaConvertTypedStringConverter >

#pragma mark Public

- (IOSObjectArray *)convertFromStringWithIOSClass:(IOSClass *)arg0
                                     withNSString:(NSString *)arg1;

+ (OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter *OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter_values_[];

inline OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter *OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter_get_INSTANCE();
J2OBJC_ENUM_CONSTANT(OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter_values();

FOUNDATION_EXPORT OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter *OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter *OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertFactoryBooleanObjectArrayStringConverterFactory_BooleanArrayStringConverter)

#endif

#pragma pop_macro("INCLUDE_ALL_BooleanObjectArrayStringConverterFactory")
