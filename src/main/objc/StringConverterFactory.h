//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/eric/repos/360-j2objc/joda-convert/build/mainTranslationExtraction/org/joda/convert/StringConverterFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_StringConverterFactory")
#ifdef RESTRICT_StringConverterFactory
#define INCLUDE_ALL_StringConverterFactory 0
#else
#define INCLUDE_ALL_StringConverterFactory 1
#endif
#undef RESTRICT_StringConverterFactory

#if !defined (OrgJodaConvertStringConverterFactory_) && (INCLUDE_ALL_StringConverterFactory || defined(INCLUDE_OrgJodaConvertStringConverterFactory))
#define OrgJodaConvertStringConverterFactory_

@class IOSClass;
@protocol OrgJodaConvertStringConverter;

@protocol OrgJodaConvertStringConverterFactory < JavaObject >

- (id<OrgJodaConvertStringConverter>)findConverterWithIOSClass:(IOSClass *)cls;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJodaConvertStringConverterFactory)

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertStringConverterFactory)

#endif

#pragma pop_macro("INCLUDE_ALL_StringConverterFactory")