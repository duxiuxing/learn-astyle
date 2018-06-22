# coding=utf-8

import sys
sys.path.append('..')
from astyle_test import AStyleTest


if __name__ == '__main__':
    project_name = 'cutest'

    brace_style_options_test = AStyleTest(project_name, 'brace_style_options')
    brace_style_options_test.check()
