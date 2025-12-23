import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/zck/workspace/http_to_ros/manual_control/install/robot_control'
