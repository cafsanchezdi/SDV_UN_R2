# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sdv_serial:msg/Ultrasound.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Ultrasound(type):
    """Metaclass of message 'Ultrasound'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('sdv_serial')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sdv_serial.msg.Ultrasound')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ultrasound
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ultrasound
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ultrasound
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ultrasound
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ultrasound

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Ultrasound(metaclass=Metaclass_Ultrasound):
    """Message class 'Ultrasound'."""

    __slots__ = [
        '_header',
        '_sensor_1',
        '_sensor_2',
        '_sensor_3',
        '_sensor_4',
        '_sensor_5',
        '_sensor_6',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'sensor_1': 'uint32',
        'sensor_2': 'uint32',
        'sensor_3': 'uint32',
        'sensor_4': 'uint32',
        'sensor_5': 'uint32',
        'sensor_6': 'uint32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.sensor_1 = kwargs.get('sensor_1', int())
        self.sensor_2 = kwargs.get('sensor_2', int())
        self.sensor_3 = kwargs.get('sensor_3', int())
        self.sensor_4 = kwargs.get('sensor_4', int())
        self.sensor_5 = kwargs.get('sensor_5', int())
        self.sensor_6 = kwargs.get('sensor_6', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.sensor_1 != other.sensor_1:
            return False
        if self.sensor_2 != other.sensor_2:
            return False
        if self.sensor_3 != other.sensor_3:
            return False
        if self.sensor_4 != other.sensor_4:
            return False
        if self.sensor_5 != other.sensor_5:
            return False
        if self.sensor_6 != other.sensor_6:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def sensor_1(self):
        """Message field 'sensor_1'."""
        return self._sensor_1

    @sensor_1.setter
    def sensor_1(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sensor_1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sensor_1' field must be an unsigned integer in [0, 4294967295]"
        self._sensor_1 = value

    @builtins.property
    def sensor_2(self):
        """Message field 'sensor_2'."""
        return self._sensor_2

    @sensor_2.setter
    def sensor_2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sensor_2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sensor_2' field must be an unsigned integer in [0, 4294967295]"
        self._sensor_2 = value

    @builtins.property
    def sensor_3(self):
        """Message field 'sensor_3'."""
        return self._sensor_3

    @sensor_3.setter
    def sensor_3(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sensor_3' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sensor_3' field must be an unsigned integer in [0, 4294967295]"
        self._sensor_3 = value

    @builtins.property
    def sensor_4(self):
        """Message field 'sensor_4'."""
        return self._sensor_4

    @sensor_4.setter
    def sensor_4(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sensor_4' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sensor_4' field must be an unsigned integer in [0, 4294967295]"
        self._sensor_4 = value

    @builtins.property
    def sensor_5(self):
        """Message field 'sensor_5'."""
        return self._sensor_5

    @sensor_5.setter
    def sensor_5(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sensor_5' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sensor_5' field must be an unsigned integer in [0, 4294967295]"
        self._sensor_5 = value

    @builtins.property
    def sensor_6(self):
        """Message field 'sensor_6'."""
        return self._sensor_6

    @sensor_6.setter
    def sensor_6(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sensor_6' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sensor_6' field must be an unsigned integer in [0, 4294967295]"
        self._sensor_6 = value
