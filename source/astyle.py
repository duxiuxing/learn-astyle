# coding=utf-8

import subprocess
import os

from util import Util

class AStyle(object):
    def __init__(self, options):
        self.options = options

    def formatDocument(self, input_file_path, output_file_path):
        astyle_exe_path = os.path.join(Util.sourceDirectory(), 'third_party\\AStyle\\bin\\AStyle.exe')
        cmd = '"{}" {} --stdin="{}" --stdout="{}"'.format(astyle_exe_path, self.options, input_file_path, output_file_path)

        return subprocess.call(cmd)
