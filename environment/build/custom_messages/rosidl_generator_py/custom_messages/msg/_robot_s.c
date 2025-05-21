// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_messages:msg/Robot.idl
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
#include "custom_messages/msg/detail/robot__struct.h"
#include "custom_messages/msg/detail/robot__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_messages__msg__robot__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[33];
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
    assert(strncmp("custom_messages.msg._robot.Robot", full_classname_dest, 32) == 0);
  }
  custom_messages__msg__Robot * ros_message = _ros_message;
  {  // actual_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "actual_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->actual_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // actual_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "actual_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->actual_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // new_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "new_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->new_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // new_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "new_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->new_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_messages__msg__robot__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Robot */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_messages.msg._robot");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Robot");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_messages__msg__Robot * ros_message = (custom_messages__msg__Robot *)raw_ros_message;
  {  // actual_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->actual_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actual_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actual_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->actual_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actual_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // new_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->new_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "new_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // new_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->new_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "new_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
