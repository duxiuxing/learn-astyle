# coding=utf-8

import codecs
import os


class Util(object):
    @staticmethod
    def sourceDirectory():
        return os.path.dirname(os.path.realpath(__file__))

    @staticmethod
    def readFrom(file_path):
        file_context = ''
        file_object = codecs.open(file_path, 'r', 'utf_8_sig')
        try:
            file_context = file_object.read()
        finally:
            file_object.close()

        return file_context

    @staticmethod
    def readLinesFrom(file_path):
        file_context = []
        file_object = codecs.open(file_path, 'r', 'utf_8_sig')
        try:
            file_context = file_object.read().splitlines()
        finally:
            file_object.close()

        return file_context
