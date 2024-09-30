#!/bin/sh

aclocal
autoconf
autoheader
libtoolize --automake --copy --force
automake --add-missing

./configure
