import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/iosnaaente/Desktop/path_planning/install/robot_launcher'
