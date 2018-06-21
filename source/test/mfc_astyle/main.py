# coding=utf-8

import sys
sys.path.append('..')
from astyle import AStyle
from astyle_test import AStyleTest

AStyle.FormatDocument('')
AStyleTest.EXPECT_EQ('', '')
