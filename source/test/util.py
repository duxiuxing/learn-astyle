# coding=utf-8

import os

class Util(object):
    @staticmethod
    def sourceDirectory():
        test_dir = os.path.dirname(os.path.realpath(__file__))
        return os.path.realpath(os.path.join(test_dir, '..'))

    @staticmethod
    def tempDirectory():
        return os.path.join(Util.sourceDirectory(), 'temp')

    @staticmethod
    def verifyTempDirectoryExist():
        temp_dir = Util.tempDirectory()
        if os.path.isdir(temp_dir):
            return True

        os.makedirs(temp_dir)
        return os.path.isdir(temp_dir)

    @staticmethod
    def genTempFilePath(input_file_path):
        list = input_file_path.split('\\')
        temp_file = '{}_{}'.format(list[-2], list[-1])
        return os.path.join(Util.tempDirectory(), temp_file)
