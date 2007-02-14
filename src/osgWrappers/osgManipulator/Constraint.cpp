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

#include <osg/Node>
#include <osg/Vec3d>
#include <osgManipulator/Command>
#include <osgManipulator/Constraint>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgManipulator::Constraint)
	I_BaseType(osg::Referenced);
	I_Method1(bool, constrain, IN, osgManipulator::MotionCommand &, x,
	          Properties::VIRTUAL,
	          __bool__constrain__MotionCommand_R1,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::TranslateInLineCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__TranslateInLineCommand_R1,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::TranslateInPlaneCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__TranslateInPlaneCommand_R1,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::Scale1DCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__Scale1DCommand_R1,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::Scale2DCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__Scale2DCommand_R1,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::ScaleUniformCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__ScaleUniformCommand_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgManipulator::GridConstraint)
	I_BaseType(osgManipulator::Constraint);
	I_Constructor3(IN, osg::Node &, refNode, IN, const osg::Vec3d &, origin, IN, const osg::Vec3d &, spacing,
	               ____GridConstraint__osg_Node_R1__C5_osg_Vec3d_R1__C5_osg_Vec3d_R1,
	               "",
	               "");
	I_Method1(void, setOrigin, IN, const osg::Vec3d, origin,
	          Properties::NON_VIRTUAL,
	          __void__setOrigin__C5_osg_Vec3d,
	          "",
	          "");
	I_Method1(void, setSpacing, IN, const osg::Vec3d, spacing,
	          Properties::NON_VIRTUAL,
	          __void__setSpacing__C5_osg_Vec3d,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::TranslateInLineCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__TranslateInLineCommand_R1,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::TranslateInPlaneCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__TranslateInPlaneCommand_R1,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::Scale1DCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__Scale1DCommand_R1,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::Scale2DCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__Scale2DCommand_R1,
	          "",
	          "");
	I_Method1(bool, constrain, IN, osgManipulator::ScaleUniformCommand &, command,
	          Properties::VIRTUAL,
	          __bool__constrain__ScaleUniformCommand_R1,
	          "",
	          "");
	I_SimpleProperty(const osg::Vec3d, Origin, 
	                 0, 
	                 __void__setOrigin__C5_osg_Vec3d);
	I_SimpleProperty(const osg::Vec3d, Spacing, 
	                 0, 
	                 __void__setSpacing__C5_osg_Vec3d);
END_REFLECTOR

