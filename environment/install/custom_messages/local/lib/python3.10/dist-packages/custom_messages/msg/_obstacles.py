# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_messages:msg/Obstacles.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Obstacles(type):
    """Metaclass of message 'Obstacles'."""

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
            module = import_type_support('custom_messages')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_messages.msg.Obstacles')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacles
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacles
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacles
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacles
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacles

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Obstacles(metaclass=Metaclass_Obstacles):
    """Message class 'Obstacles'."""

    __slots__ = [
        '_kind',
        '_x',
        '_y',
        '_p1',
        '_p2',
    ]

    _fields_and_field_types = {
        'kind': 'string',
        'x': 'float',
        'y': 'float',
        'p1': 'float',
        'p2': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.kind = kwargs.get('kind', str())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.p1 = kwargs.get('p1', float())
        self.p2 = kwargs.get('p2', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.kind != other.kind:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.p1 != other.p1:
            return False
        if self.p2 != other.p2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def kind(self):
        """Message field 'kind'."""
        return self._kind

    @kind.setter
    def kind(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'kind' field must be of type 'str'"
        self._kind = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y = value

    @builtins.property
    def p1(self):
        """Message field 'p1'."""
        return self._p1

    @p1.setter
    def p1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'p1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._p1 = value

    @builtins.property
    def p2(self):
        """Message field 'p2'."""
        return self._p2

    @p2.setter
    def p2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'p2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'p2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._p2 = value
