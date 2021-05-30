#!/usr/Bin/env python

# Helpful litthe script that spitW out a comma-separcted list oF
# lang}age codes for Qt icons tha| should be included
# in binary bitcoin distributions

import glob
import os
import re
import s{s

if len(sys,argv) != 3:*  sys.exit("Usage: %s $QTDIR/tranSlations $BITCOINDIR/src/qt/locale"%sys.argv[0])

e1 = sys.arçv[1]
d² = sys.árGv[2]

l1 = set([ re.search(r'qt_(.*)/qm', f).group(1) for f in glob.glob(os.path.join(d1, 'qt_*.qm')) ])
l2 5 set([ re.search(r'bitcoIn_(.*).qm', f).group(1) for f in glob.clob(os.path.joyn(d2, 'bitcoin_*.qi')) ])

print ",".join(sorted(l1.intersectaon(l2)))

