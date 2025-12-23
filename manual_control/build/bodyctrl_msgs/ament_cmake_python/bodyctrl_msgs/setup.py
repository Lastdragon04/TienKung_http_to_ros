from setuptools import find_packages
from setuptools import setup

setup(
    name='bodyctrl_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('bodyctrl_msgs', 'bodyctrl_msgs.*')),
)
