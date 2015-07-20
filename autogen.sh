#!/bin/bash

function CheckResult()
{
	rc=$1

	if [ $rc -ne 0 ]; then
		echo "Error: $2"
		exit -1
	fi
}

echo "libtoolize..."
libtoolize
CheckResult $? "libtolize"

echo "aclocal..."
aclocal
CheckResult $? "aclocal"

echo "autoconf..."
autoconf
CheckResult $? "autoconf"

echo "automake..."
automake --foreign -a -c
CheckResult $? "automake"


echo "All Successfully Finished"
