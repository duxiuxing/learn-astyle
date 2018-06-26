# coding=utf-8

import os
import subprocess

from util import Util


class AStyle(object):
    def __init__(self, option_file_path):
        self.option_file_path = option_file_path

    def formatDocument(self, input_file_path, output_file_path):
        astyle_exe_path = os.path.join(Util.sourceDirectory(), 'third_party\\AStyle\\bin\\AStyle.exe')
        cmd = '"{}" --options="{}" --stdin="{}" --stdout="{}"'.format(
            astyle_exe_path, self.option_file_path, input_file_path, output_file_path)

        return subprocess.call(cmd)
