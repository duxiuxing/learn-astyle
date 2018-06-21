# coding=utf-8

import subprocess
import os

from util import Util

class AStyle(object):
    @staticmethod
    def FormatDocument(file_path):
        astyle_exe = os.path.join(Util.sourceDirectory(), 'third_party\\AStyle\\bin\\AStyle.exe')
        cmd = '"{}" -v "{}" -r "{}" -d "{}" -p "{}" -f "{}"'.format(toolPath, fileVersion, copyRight, fileDesc,
                                                                    Product.name(), dll_path)

        # 执行编译，等待返回结果
        returnCode = subprocess.call(cmd)
        if 0 == returnCode:
            return True
        else:
            log.warn('returnCode = ' + str(returnCode))
            return False
        print('AStyle.FormatDocument')
