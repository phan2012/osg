// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Object>
#include <osg/Vec3>
#include <osgParticle/AngularAccelOperator>
#include <osgParticle/Particle>
#include <osgParticle/Program>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgParticle::AngularAccelOperator)
	I_BaseType(osgParticle::Operator);
	I_Constructor0(____AngularAccelOperator,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgParticle::AngularAccelOperator &, copy, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____AngularAccelOperator__C5_AngularAccelOperator_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method0(const osg::Vec3 &, getAngularAcceleration,
	          Properties::NON_VIRTUAL,
	          __C5_osg_Vec3_R1__getAngularAcceleration,
	          "Get the angular acceleration vector. ",
	          "");
	I_Method1(void, setAngularAcceleration, IN, const osg::Vec3 &, v,
	          Properties::NON_VIRTUAL,
	          __void__setAngularAcceleration__C5_osg_Vec3_R1,
	          "Set the angular acceleration vector. ",
	          "");
	I_Method2(void, operate, IN, osgParticle::Particle *, P, IN, double, dt,
	          Properties::VIRTUAL,
	          __void__operate__Particle_P1__double,
	          "Apply the angular acceleration to a particle. Do not call this method manually. ",
	          "");
	I_Method1(void, beginOperate, IN, osgParticle::Program *, prg,
	          Properties::VIRTUAL,
	          __void__beginOperate__Program_P1,
	          "Perform some initializations. Do not call this method manually. ",
	          "");
	I_SimpleProperty(const osg::Vec3 &, AngularAcceleration, 
	                 __C5_osg_Vec3_R1__getAngularAcceleration, 
	                 __void__setAngularAcceleration__C5_osg_Vec3_R1);
END_REFLECTOR

