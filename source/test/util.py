# coding=utf-8

import os

class Util(object):
    @staticmethod
    def sourceDirectory():
        test_dir = os.path.dirname(os.path.realpath(__file__))
        return os.path.realpath(os.path.join(test_dir, '..'))
