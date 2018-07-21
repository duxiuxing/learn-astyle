# coding=utf-8

import time
import os
import operator

from astyle import AStyle
from util import Util


class AStyleTest(object):
    def __init__(self, project_name, style_name):
        self.project_name = project_name
        self.style_name = style_name

    def projectDirectory(self):
        return os.path.join(Util.sourceDirectory(), self.project_name)

    def optionFilePath(self):
        return os.path.join(self.projectDirectory(), '{}_astyle_options.txt'.format(self.project_name))

    def inputFilePath(self):
        return os.path.join(self.projectDirectory(), '{}_input.cpp'.format(self.style_name))

    def outputFilePath(self):
        return os.path.join(self.projectDirectory(), '{}_output.cpp'.format(self.style_name))

    def expectFilePath(self):
        return os.path.join(self.projectDirectory(), '{}_expect.cpp'.format(self.style_name))

    def genOutputFile(self):
        astyle_object = AStyle(self.optionFilePath())
        astyle_object.formatDocument(self.inputFilePath(), self.outputFilePath())
        time.sleep(1)

    def compareOutputFile(self):
        output_lines = Util.readLinesFrom(self.outputFilePath())
        output_line_count = len(output_lines)

        expect_lines = Util.readLinesFrom(self.expectFilePath())
        expect_line_count = len(expect_lines)

        line_index = 0
        while line_index < output_line_count \
                or line_index < expect_line_count:
            output_line = ''
            if line_index < output_line_count:
                output_line = output_lines[line_index]
            else:
                print('{} line {} is different!'.format(self.outputFilePath(), line_index + 1))
                return False

            expect_line = ''
            if line_index < expect_line_count:
                expect_line = expect_lines[line_index]
            else:
                print('{} line {} is different!'.format(self.expectFilePath(), line_index + 1))
                return False

            if operator.eq(output_line, expect_line) is False:
                print('{} line {} is different!'.format(self.outputFilePath(), line_index + 1))
                return False
            else:
                line_index = line_index + 1

        return True

    def check(self):
        self.genOutputFile()

        if self.compareOutputFile():
            print("[OK------] {}'s {}".format(self.project_name, self.style_name))
        else:
            print("[--FAILED] {}'s {}".format(self.project_name, self.style_name))
