# coding=utf-8

import os
import sys
sys.path.append('..')
from astyle import AStyle
from astyle_test import AStyleTest
from util import Util


if __name__ == '__main__':
    options_file_path = os.path.join(Util.sourceDirectory(), 'test\\mfc_astyle\\mfc.astyle.txt')
    input_file_path = os.path.join(Util.sourceDirectory(), 'test\\cutest_astyle\\brace_style_options\\input.cpp')

    astyle_test = AStyleTest(options_file_path)
    astyle_object = AStyle(options_file_path)

    if Util.verifyTempDirectoryExist():

        output_file_path = Util.genTempFilePath(input_file_path)
        astyle_object.formatDocument(output_file_path)


        output_lines = Util.readLinesFrom(output_file_path)
        output_line_count = len(output_lines)

        expect_file_path = os.path.join(Util.sourceDirectory(), 'test\\cutest_astyle\\brace_style_options\\expect.cpp')
        expect_lines = Util.readLinesFrom(expect_file_path)
        expect_line_count = len(expect_lines)

        line_index = 0
        while line_index < output_line_count\
                or line_index < expect_line_count:
            output_line = ''
            if line_index < output_line_count:
                output_line = output_lines[line_index]

            expect_line = ''
            if line_index < expect_line_count:
                expect_line = expect_lines[line_index]

            if cmp(output_line, expect_line) != 0:
                print('line {} is different!')
                break
            else:
                line_index = line_index + 1



    # AStyle.FormatDocument('')
    # AStyleTest.EXPECT_EQ('', '')


    # input_file_path =
    # print(Util.genTempFilePath(input_file_path))
