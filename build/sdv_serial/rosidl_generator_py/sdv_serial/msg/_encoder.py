# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sdv_serial:msg/Encoder.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Encoder(type):
    """Metaclass of message 'Encoder'."""

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
                'sdv_serial.msg.Encoder')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__encoder
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__encoder
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__encoder
            cls._TYPE_SUPPORT = module.type_support_msg__msg__encoder
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__encoder

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


class Encoder(metaclass=Metaclass_Encoder):
    """Message class 'Encoder'."""

    __slots__ = [
        '_header',
        '_rpm_left',
        '_rpm_right',
        '_motor_current_left',
        '_motor_current_right',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'rpm_left': 'int32',
        'rpm_right': 'int32',
        'motor_current_left': 'int32',
        'motor_current_right': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        self.rpm_left = kwargs.get('rpm_left', int())
        self.rpm_right = kwargs.get('rpm_right', int())
        self.motor_current_left = kwargs.get('motor_current_left', int())
        self.motor_current_right = kwargs.get('motor_current_right', int())

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
        if self.rpm_left != other.rpm_left:
            return False
        if self.rpm_right != other.rpm_right:
            return False
        if self.motor_current_left != other.motor_current_left:
            return False
        if self.motor_current_right != other.motor_current_right:
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
    def rpm_left(self):
        """Message field 'rpm_left'."""
        return self._rpm_left

    @rpm_left.setter
    def rpm_left(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'rpm_left' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rpm_left' field must be an integer in [-2147483648, 2147483647]"
        self._rpm_left = value

    @builtins.property
    def rpm_right(self):
        """Message field 'rpm_right'."""
        return self._rpm_right

    @rpm_right.setter
    def rpm_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'rpm_right' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rpm_right' field must be an integer in [-2147483648, 2147483647]"
        self._rpm_right = value

    @builtins.property
    def motor_current_left(self):
        """Message field 'motor_current_left'."""
        return self._motor_current_left

    @motor_current_left.setter
    def motor_current_left(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'motor_current_left' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor_current_left' field must be an integer in [-2147483648, 2147483647]"
        self._motor_current_left = value

    @builtins.property
    def motor_current_right(self):
        """Message field 'motor_current_right'."""
        return self._motor_current_right

    @motor_current_right.setter
    def motor_current_right(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'motor_current_right' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor_current_right' field must be an integer in [-2147483648, 2147483647]"
        self._motor_current_right = value
