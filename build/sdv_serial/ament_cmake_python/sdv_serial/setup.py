from setuptools import find_packages
from setuptools import setup

setup(
    name='sdv_serial',
    version='0.1.0',
    packages=find_packages(
        include=('sdv_serial', 'sdv_serial.*')),
)
