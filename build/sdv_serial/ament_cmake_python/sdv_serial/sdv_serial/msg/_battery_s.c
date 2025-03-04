// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from sdv_serial:msg/Battery.idl
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
#include "sdv_serial/msg/detail/battery__struct.h"
#include "sdv_serial/msg/detail/battery__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool sdv_serial__msg__battery__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
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
    assert(strncmp("sdv_serial.msg._battery.Battery", full_classname_dest, 31) == 0);
  }
  sdv_serial__msg__Battery * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // current_main
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_main");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_main = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // voltage_main
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage_main");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->voltage_main = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // current_laser
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_laser");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_laser = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // voltage_laser
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage_laser");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->voltage_laser = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * sdv_serial__msg__battery__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Battery */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("sdv_serial.msg._battery");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Battery");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  sdv_serial__msg__Battery * ros_message = (sdv_serial__msg__Battery *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_main
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->current_main);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_main", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voltage_main
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->voltage_main);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage_main", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_laser
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->current_laser);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_laser", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voltage_laser
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->voltage_laser);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage_laser", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
