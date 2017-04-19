//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/eric/repos/360-j2objc/joda-convert/build/mainTranslationExtraction/org/joda/convert/EnumStringConverterFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_EnumStringConverterFactory")
#ifdef RESTRICT_EnumStringConverterFactory
#define INCLUDE_ALL_EnumStringConverterFactory 0
#else
#define INCLUDE_ALL_EnumStringConverterFactory 1
#endif
#undef RESTRICT_EnumStringConverterFactory

#if !defined (OrgJodaConvertEnumStringConverterFactory_) && (INCLUDE_ALL_EnumStringConverterFactory || defined(INCLUDE_OrgJodaConvertEnumStringConverterFactory))
#define OrgJodaConvertEnumStringConverterFactory_

#define RESTRICT_StringConverterFactory 1
#define INCLUDE_OrgJodaConvertStringConverterFactory 1
#include "StringConverterFactory.h"

@class IOSClass;
@protocol OrgJodaConvertStringConverter;

@interface OrgJodaConvertEnumStringConverterFactory : NSObject < OrgJodaConvertStringConverterFactory >

#pragma mark Public

- (id<OrgJodaConvertStringConverter>)findConverterWithIOSClass:(IOSClass *)cls;

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(OrgJodaConvertEnumStringConverterFactory)

inline id<OrgJodaConvertStringConverterFactory> OrgJodaConvertEnumStringConverterFactory_get_INSTANCE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<OrgJodaConvertStringConverterFactory> OrgJodaConvertEnumStringConverterFactory_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgJodaConvertEnumStringConverterFactory, INSTANCE, id<OrgJodaConvertStringConverterFactory>)

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertEnumStringConverterFactory)

#endif

#if !defined (OrgJodaConvertEnumStringConverterFactory_EnumStringConverter_) && (INCLUDE_ALL_EnumStringConverterFactory || defined(INCLUDE_OrgJodaConvertEnumStringConverterFactory_EnumStringConverter))
#define OrgJodaConvertEnumStringConverterFactory_EnumStringConverter_

#define RESTRICT_TypedStringConverter 1
#define INCLUDE_OrgJodaConvertTypedStringConverter 1
#include "TypedStringConverter.h"

@class IOSClass;
@class JavaLangEnum;
@class OrgJodaConvertEnumStringConverterFactory;

@interface OrgJodaConvertEnumStringConverterFactory_EnumStringConverter : NSObject < OrgJodaConvertTypedStringConverter >

#pragma mark Public

- (JavaLangEnum *)convertFromStringWithIOSClass:(IOSClass *)cls
                                   withNSString:(NSString *)str;

- (NSString *)convertToStringWithId:(JavaLangEnum *)en;

- (IOSClass *)getEffectiveType;

#pragma mark Package-Private

- (instancetype)initWithOrgJodaConvertEnumStringConverterFactory:(OrgJodaConvertEnumStringConverterFactory *)outer$
                                                    withIOSClass:(IOSClass *)effectiveType;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJodaConvertEnumStringConverterFactory_EnumStringConverter)

FOUNDATION_EXPORT void OrgJodaConvertEnumStringConverterFactory_EnumStringConverter_initWithOrgJodaConvertEnumStringConverterFactory_withIOSClass_(OrgJodaConvertEnumStringConverterFactory_EnumStringConverter *self, OrgJodaConvertEnumStringConverterFactory *outer$, IOSClass *effectiveType);

FOUNDATION_EXPORT OrgJodaConvertEnumStringConverterFactory_EnumStringConverter *new_OrgJodaConvertEnumStringConverterFactory_EnumStringConverter_initWithOrgJodaConvertEnumStringConverterFactory_withIOSClass_(OrgJodaConvertEnumStringConverterFactory *outer$, IOSClass *effectiveType) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJodaConvertEnumStringConverterFactory_EnumStringConverter *create_OrgJodaConvertEnumStringConverterFactory_EnumStringConverter_initWithOrgJodaConvertEnumStringConverterFactory_withIOSClass_(OrgJodaConvertEnumStringConverterFactory *outer$, IOSClass *effectiveType);

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertEnumStringConverterFactory_EnumStringConverter)

#endif

#pragma pop_macro("INCLUDE_ALL_EnumStringConverterFactory")
