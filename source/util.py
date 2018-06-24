# coding=utf-8

import os


class Util(object):
    @staticmethod
    def sourceDirectory():
        return os.path.dirname(os.path.realpath(__file__))

    @staticmethod
    def readFrom(file_path):
        file_context = ''
        file_object = open(file_path)
        try:
            file_context = file_object.read()
        finally:
            file_object.close()

        return file_context

    @staticmethod
    def readLinesFrom(file_path):
        file_context = []
        file_object = open(file_path)
        try:
            file_context = file_object.read().splitlines()
        finally:
            file_object.close()

        return file_context
