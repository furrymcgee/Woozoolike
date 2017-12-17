#!/bin/bash
# PROGRAM=out VERSION=0 bash -o errexit -o xtrace build_gnu.sh

PROGRAM=${PROGRAM:-$(git branch | grep ^* | cut -d' ' -f2 | cut -s -d_ -f1)}
VERSION=${VERSION:-$(git branch | grep ^* | cut -d' ' -f2 | cut -s -d_ -f2)}
CXX=${CXX:-g++-6} 

cat > Makefile.am <<-MAKE
	bin_PROGRAMS = ${PROGRAM}
	${PROGRAM}_CFLAGS = \$(SFML_CFLAGS)
	${PROGRAM}_LDADD = \$(SFML_LIBS)
	${PROGRAM}_SOURCES = $(echo $(find -name '*.cpp'))
MAKE

cat > NEWS <<-'NEWS'
NEWS

cat > README <<-'README'
README

cat > AUTHORS <<-'AUTHORS'
AUTHORS

cat > ChangeLog <<-'ChangeLog'
ChangeLog

autoscan

sed > configure.ac < configure.scan --file=<( cat <<-AC_CONFIG
		/AC_INIT/aAM_INIT_AUTOMAKE([subdir-objects -Wall -Werror])
		s/FULL-PACKAGE-NAME/${PROGRAM}/
		s/VERSION/${VERSION}/
		s/BUG-REPORT-ADDRESS/$(git config --get user.email)/
		/Checks for libraries/aPKG_CHECK_MODULES([SFML], [sfml-all])
AC_CONFIG
)

autoreconf --install
sh configure
make check

