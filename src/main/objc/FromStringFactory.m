//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/eric/repos/360-j2objc/joda-convert/build/mainTranslationExtraction/org/joda/convert/FromStringFactory.java
//

#include "FromStringFactory.h"
#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "java/lang/annotation/Annotation.h"
#include "java/lang/annotation/ElementType.h"
#include "java/lang/annotation/Retention.h"
#include "java/lang/annotation/RetentionPolicy.h"
#include "java/lang/annotation/Target.h"

__attribute__((unused)) static IOSObjectArray *OrgJodaConvertFromStringFactory__Annotations$0();

@implementation OrgJodaConvertFromStringFactory

@synthesize factory = factory_;

- (IOSClass *)annotationType {
  return OrgJodaConvertFromStringFactory_class_();
}

- (NSString *)description {
  return @"@org.joda.convert.FromStringFactory()";
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, "LIOSClass;", 0x401, -1, -1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  methods[0].selector = @selector(factory);
  #pragma clang diagnostic pop
  static const void *ptrTable[] = { (void *)&OrgJodaConvertFromStringFactory__Annotations$0 };
  static const J2ObjcClassInfo _OrgJodaConvertFromStringFactory = { "FromStringFactory", "org.joda.convert", ptrTable, methods, NULL, 7, 0x2609, 1, 0, -1, -1, -1, -1, 0 };
  return &_OrgJodaConvertFromStringFactory;
}

@end

id<OrgJodaConvertFromStringFactory> create_OrgJodaConvertFromStringFactory(IOSClass *factory) {
  OrgJodaConvertFromStringFactory *self = AUTORELEASE([[OrgJodaConvertFromStringFactory alloc] init]);
  self->factory_ = RETAIN_(factory);
  return self;
}

IOSObjectArray *OrgJodaConvertFromStringFactory__Annotations$0() {
  return [IOSObjectArray newArrayWithObjects:(id[]){ create_JavaLangAnnotationTarget([IOSObjectArray newArrayWithObjects:(id[]){ JreLoadEnum(JavaLangAnnotationElementType, TYPE) } count:1 type:NSObject_class_()]), create_JavaLangAnnotationRetention(JreLoadEnum(JavaLangAnnotationRetentionPolicy, RUNTIME)) } count:2 type:JavaLangAnnotationAnnotation_class_()];
}

J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(OrgJodaConvertFromStringFactory)
