# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_interfaces:srv/CanConfigCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data1'
# Member 'data2'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CanConfigCommand_Request(type):
    """Metaclass of message 'CanConfigCommand_Request'."""

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
            module = import_type_support('robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_interfaces.srv.CanConfigCommand_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__can_config_command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__can_config_command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__can_config_command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__can_config_command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__can_config_command__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CanConfigCommand_Request(metaclass=Metaclass_CanConfigCommand_Request):
    """Message class 'CanConfigCommand_Request'."""

    __slots__ = [
        '_opcode',
        '_device',
        '_data1',
        '_data2',
        '_device_names',
    ]

    _fields_and_field_types = {
        'opcode': 'uint8',
        'device': 'uint8',
        'data1': 'sequence<uint8>',
        'data2': 'sequence<float>',
        'device_names': 'sequence<string>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.opcode = kwargs.get('opcode', int())
        self.device = kwargs.get('device', int())
        self.data1 = array.array('B', kwargs.get('data1', []))
        self.data2 = array.array('f', kwargs.get('data2', []))
        self.device_names = kwargs.get('device_names', [])

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
        if self.opcode != other.opcode:
            return False
        if self.device != other.device:
            return False
        if self.data1 != other.data1:
            return False
        if self.data2 != other.data2:
            return False
        if self.device_names != other.device_names:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def opcode(self):
        """Message field 'opcode'."""
        return self._opcode

    @opcode.setter
    def opcode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'opcode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'opcode' field must be an unsigned integer in [0, 255]"
        self._opcode = value

    @builtins.property
    def device(self):
        """Message field 'device'."""
        return self._device

    @device.setter
    def device(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'device' field must be an unsigned integer in [0, 255]"
        self._device = value

    @builtins.property
    def data1(self):
        """Message field 'data1'."""
        return self._data1

    @data1.setter
    def data1(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'data1' array.array() must have the type code of 'B'"
            self._data1 = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data1' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data1 = array.array('B', value)

    @builtins.property
    def data2(self):
        """Message field 'data2'."""
        return self._data2

    @data2.setter
    def data2(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'data2' array.array() must have the type code of 'f'"
            self._data2 = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'data2' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._data2 = array.array('f', value)

    @builtins.property
    def device_names(self):
        """Message field 'device_names'."""
        return self._device_names

    @device_names.setter
    def device_names(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'device_names' field must be a set or sequence and each value of type 'str'"
        self._device_names = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CanConfigCommand_Response(type):
    """Metaclass of message 'CanConfigCommand_Response'."""

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
            module = import_type_support('robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_interfaces.srv.CanConfigCommand_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__can_config_command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__can_config_command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__can_config_command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__can_config_command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__can_config_command__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CanConfigCommand_Response(metaclass=Metaclass_CanConfigCommand_Response):
    """Message class 'CanConfigCommand_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'result' field must be an unsigned integer in [0, 255]"
        self._result = value


class Metaclass_CanConfigCommand(type):
    """Metaclass of service 'CanConfigCommand'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_interfaces.srv.CanConfigCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__can_config_command

            from robot_interfaces.srv import _can_config_command
            if _can_config_command.Metaclass_CanConfigCommand_Request._TYPE_SUPPORT is None:
                _can_config_command.Metaclass_CanConfigCommand_Request.__import_type_support__()
            if _can_config_command.Metaclass_CanConfigCommand_Response._TYPE_SUPPORT is None:
                _can_config_command.Metaclass_CanConfigCommand_Response.__import_type_support__()


class CanConfigCommand(metaclass=Metaclass_CanConfigCommand):
    from robot_interfaces.srv._can_config_command import CanConfigCommand_Request as Request
    from robot_interfaces.srv._can_config_command import CanConfigCommand_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
