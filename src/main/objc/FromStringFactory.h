//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/eric/repos/360-j2objc/joda-convert/build/mainTranslationExtraction/org/joda/convert/FromStringFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_FromStringFactory")
#ifdef RESTRICT_FromStringFactory
#define INCLUDE_ALL_FromStringFactory 0
#else
#define INCLUDE_ALL_FromStringFactory 1
#endif
#undef RESTRICT_FromStringFactory

#if !defined (OrgJodaConvertFromStringFactory_) && (INCLUDE_ALL_FromStringFactory || defined(INCLUDE_OrgJodaConvertFromStringFactory))
#define OrgJodaConvertFromStringFactory_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

@protocol OrgJodaConvertFromStringFactory < JavaLangAnnotationAnnotation >

@property (readonly) IOSClass *factory;

@end

@interface OrgJodaConvertFromStringFactory : NSObject < OrgJodaConvertFromStringFactory > {
 @public
  IOSClass *factory_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJodaConvertFromStringFactory)

FOUNDATION_EXPORT id<OrgJodaConvertFromStringFactory> create_OrgJodaConvertFromStringFactory(IOSClass *factory);

J2OBJC_TYPE_LITERAL_HEADER(OrgJodaConvertFromStringFactory)

#endif

#pragma pop_macro("INCLUDE_ALL_FromStringFactory")
