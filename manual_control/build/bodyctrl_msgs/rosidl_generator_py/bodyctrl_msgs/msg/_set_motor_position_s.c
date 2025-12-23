// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from bodyctrl_msgs:msg/SetMotorPosition.idl
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
#include "bodyctrl_msgs/msg/detail/set_motor_position__struct.h"
#include "bodyctrl_msgs/msg/detail/set_motor_position__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool bodyctrl_msgs__msg__set_motor_position__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("bodyctrl_msgs.msg._set_motor_position.SetMotorPosition", full_classname_dest, 54) == 0);
  }
  bodyctrl_msgs__msg__SetMotorPosition * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->name = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pos = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // spd
    PyObject * field = PyObject_GetAttrString(_pymsg, "spd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->spd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cur
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cur = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * bodyctrl_msgs__msg__set_motor_position__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SetMotorPosition */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("bodyctrl_msgs.msg._set_motor_position");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SetMotorPosition");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  bodyctrl_msgs__msg__SetMotorPosition * ros_message = (bodyctrl_msgs__msg__SetMotorPosition *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->name);
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pos
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pos);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->spd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cur);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
