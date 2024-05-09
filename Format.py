"""
Temporary formatter to convert readme text to markdown. Not part of the Assignment.
Created: 2024-05-05
Updated: 2024-05-05
Author: Vincent Zhang
"""

with open("file.txt", encoding="utf-8") as f:
    data = f.read()

import re
data  = re.sub(r"`(<.*?>)`", r"\g<1>", data)
data  = re.sub(r"(<.*?>)", r"`\g<1>`", data)
data  = re.sub(r"(@.*?:)", r"`\g<1>`", data)
data  = re.sub(r"\. (.*?) \- ", r". `\g<1>` - ", data)

with open("out.txt", "w", encoding="utf-8") as f:
    f.write(data)
