# coding=utf-8

import sys

sys.path.append('..')
from astyle_test import AStyleTest

if __name__ == '__main__':
    project_name = 'googletest'

    brace_style_options_test = AStyleTest(project_name, '01_brace_style_options')
    brace_style_options_test.check()

    tab_options_test = AStyleTest(project_name, '02_tab_options')
    tab_options_test.check()

    brace_modify_options_test = AStyleTest(project_name, '03_brace_modify_options')
    brace_modify_options_test.check()

    indentation_options_test = AStyleTest(project_name, '04_indentation_options')
    indentation_options_test.check()

    pad_options_test = AStyleTest(project_name, '05_pad_options')
    pad_options_test.check()

    formatting_options_test = AStyleTest(project_name, '06_formatting_options')
    formatting_options_test.check()
