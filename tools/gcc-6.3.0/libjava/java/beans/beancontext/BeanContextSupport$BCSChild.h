
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_beans_beancontext_BeanContextSupport$BCSChild__
#define __java_beans_beancontext_BeanContextSupport$BCSChild__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace beans
    {
      namespace beancontext
      {
          class BeanContextSupport;
          class BeanContextSupport$BCSChild;
      }
    }
  }
}

class java::beans::beancontext::BeanContextSupport$BCSChild : public ::java::lang::Object
{

public: // actually package-private
  BeanContextSupport$BCSChild(::java::beans::beancontext::BeanContextSupport *, ::java::lang::Object *, ::java::lang::Object *);
private:
  ::java::lang::Object * getTargetChild();
public: // actually package-private
  static ::java::lang::Object * access$0(::java::beans::beancontext::BeanContextSupport$BCSChild *);
private:
  static const jlong serialVersionUID = -5815286101609939109LL;
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::java::lang::Object)))) targetChild;
  ::java::lang::Object * peer;
public: // actually package-private
  ::java::beans::beancontext::BeanContextSupport * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_beans_beancontext_BeanContextSupport$BCSChild__
