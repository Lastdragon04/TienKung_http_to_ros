# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_msg:msg/MotorDriverData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorDriverData(type):
    """Metaclass of message 'MotorDriverData'."""

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
            module = import_type_support('robot_msg')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_msg.msg.MotorDriverData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__motor_driver_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__motor_driver_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__motor_driver_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__motor_driver_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__motor_driver_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorDriverData(metaclass=Metaclass_MotorDriverData):
    """Message class 'MotorDriverData'."""

    __slots__ = [
        '_canid',
        '_value',
        '_speed',
        '_type',
        '_protocol_type',
        '_boards_motor',
        '_depend',
        '_bus',
    ]

    _fields_and_field_types = {
        'canid': 'int16',
        'value': 'float',
        'speed': 'float',
        'type': 'int16',
        'protocol_type': 'int16',
        'boards_motor': 'int16',
        'depend': 'string',
        'bus': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.canid = kwargs.get('canid', int())
        self.value = kwargs.get('value', float())
        self.speed = kwargs.get('speed', float())
        self.type = kwargs.get('type', int())
        self.protocol_type = kwargs.get('protocol_type', int())
        self.boards_motor = kwargs.get('boards_motor', int())
        self.depend = kwargs.get('depend', str())
        self.bus = kwargs.get('bus', str())

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
        if self.canid != other.canid:
            return False
        if self.value != other.value:
            return False
        if self.speed != other.speed:
            return False
        if self.type != other.type:
            return False
        if self.protocol_type != other.protocol_type:
            return False
        if self.boards_motor != other.boards_motor:
            return False
        if self.depend != other.depend:
            return False
        if self.bus != other.bus:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def canid(self):
        """Message field 'canid'."""
        return self._canid

    @canid.setter
    def canid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'canid' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'canid' field must be an integer in [-32768, 32767]"
        self._canid = value

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._value = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'type' field must be an integer in [-32768, 32767]"
        self._type = value

    @builtins.property
    def protocol_type(self):
        """Message field 'protocol_type'."""
        return self._protocol_type

    @protocol_type.setter
    def protocol_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'protocol_type' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'protocol_type' field must be an integer in [-32768, 32767]"
        self._protocol_type = value

    @builtins.property
    def boards_motor(self):
        """Message field 'boards_motor'."""
        return self._boards_motor

    @boards_motor.setter
    def boards_motor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'boards_motor' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'boards_motor' field must be an integer in [-32768, 32767]"
        self._boards_motor = value

    @builtins.property
    def depend(self):
        """Message field 'depend'."""
        return self._depend

    @depend.setter
    def depend(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'depend' field must be of type 'str'"
        self._depend = value

    @builtins.property
    def bus(self):
        """Message field 'bus'."""
        return self._bus

    @bus.setter
    def bus(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bus' field must be of type 'str'"
        self._bus = value
