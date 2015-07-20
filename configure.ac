# configure.ac 
#
# Project: utf8converter
# Author: Andrew Heebum Kwak (kh-1143@hanmail.net)
# Date:	2015.07.01
#


dnl 시작 매크로
AC_INIT(UTF8Converter, 1.0.0, kh-1143@hanmail.net)
AM_INIT_AUTOMAKE([UTF8Converter], [1.0.0])

AC_ARG_ENABLE(debug,
AS_HELP_STRING([--enable-debug],
			   [enable debugging, default: no]),
[case "${enableval}" in
		yes) 
			debug=true
			;;
		no)
			debug=false 
			;;

		*)   AC_MSG_ERROR([bad value ${enableval} for --enable-debug]) ;;
esac], [debug=false])


case "$debug" in
	true)
		AC_DEFINE(DEBUG)
		AC_DEFINE(_DEBUG)
		AM_CONDITIONAL(DEBUG, true)
		;;
	
	false)
		AC_DEFINE(NDEBUG)
		AC_DEFINE(_NDEBUG)
		AM_CONDITIONAL(DEBUG, false)
		;;
esac


dnl 체크할 프로그램
AC_PROG_CC		# C 컴파일러 결정
AC_PROG_CXX		# C 전처리기 결정
AC_PROG_MAKE_SET
AC_PROG_RANLIB

LT_INIT([static])
AC_CONFIG_MACRO_DIR([m4])

dnl 체크할 라이브러리
AC_CHECK_LIB([c], [memcpy])		# libc체크
AC_CHECK_LIB([m], [sin])		# libm체크


dnl 체크할 헤더파일
AC_CHECK_HEADERS([fcntl.h stdlib.h string.h sys/ioctl.h termios.h unistd.h])
AC_HEADER_DIRENT	# dirent.h 체크


dnl 체크할 데이터 타입 및 구조체
AC_TYPE_SIZE_T	# size_t
AC_STRUCT_TM	# struct tm


dnl 체크할 라이브러리 함수
AC_CHECK_FUNCS([strchr strdup strstr])
AC_FUNC_MALLOC


dnl 최종적으로 생성할 파일명
AC_CONFIG_FILES([Makefile
				 test/Makefile
				 commonlib/Makefile])
AC_OUTPUT

