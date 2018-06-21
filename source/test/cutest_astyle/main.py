# coding=utf-8

import os
import sys
sys.path.append('..')
from astyle import AStyle
from astyle_test import AStyleTest
from util import Util

AStyle.FormatDocument('')
AStyleTest.EXPECT_EQ('', '')

if Util.verifyTempDirectoryExist():
    input_file_path = os.path.join(Util.sourceDirectory(), 'test\\cutest_astyle\\brace_style_options\\input.cpp')
    print(Util.genTempFilePath(input_file_path))
