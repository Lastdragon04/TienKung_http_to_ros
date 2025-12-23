// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robot_msg:msg/MotorDriverData.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "robot_msg/msg/detail/motor_driver_data__struct.h"
#include "robot_msg/msg/detail/motor_driver_data__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robot_msg__msg__motor_driver_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("robot_msg.msg._motor_driver_data.MotorDriverData", full_classname_dest, 48) == 0);
  }
  robot_msg__msg__MotorDriverData * ros_message = _ros_message;
  {  // canid
    PyObject * field = PyObject_GetAttrString(_pymsg, "canid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->canid = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // value
    PyObject * field = PyObject_GetAttrString(_pymsg, "value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->value = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // protocol_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "protocol_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->protocol_type = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // boards_motor
    PyObject * field = PyObject_GetAttrString(_pymsg, "boards_motor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->boards_motor = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // depend
    PyObject * field = PyObject_GetAttrString(_pymsg, "depend");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->depend, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // bus
    PyObject * field = PyObject_GetAttrString(_pymsg, "bus");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->bus, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robot_msg__msg__motor_driver_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MotorDriverData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robot_msg.msg._motor_driver_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MotorDriverData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robot_msg__msg__MotorDriverData * ros_message = (robot_msg__msg__MotorDriverData *)raw_ros_message;
  {  // canid
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->canid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "canid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // protocol_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->protocol_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "protocol_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // boards_motor
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->boards_motor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "boards_motor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // depend
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->depend.data,
      strlen(ros_message->depend.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "depend", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bus
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bus.data,
      strlen(ros_message->bus.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
