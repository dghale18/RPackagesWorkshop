AC_INIT(src/version.cc)

AC_PATH_PROG(PKG_CONFIG, pkg-config, [echo "Cannot find pkg-config"])

if test -n "$PKG_CONFIG" ; then

  LEPT_CFLAGS=`${PKG_CONFIG} --cflags lept`

  if ! test "$?" = "0" ; then
    echo "Failed to get compilation flags for leptonica via pkg-config"
    echo "LEPT_CFLAGS = $LEPT_CFLAGS"
  fi

  LEPT_LIBS=`$PKG_CONFIG --libs lept`

  TESS_CFLAGS=`${PKG_CONFIG} --cflags tesseract`
  TESS_LIBS=`${PKG_CONFIG} --libs tesseract`

fi

AC_PROG_CXX
CXX=`R CMD config  CXX`

AC_SUBST(LEPT_LIBS)
AC_SUBST(LEPT_CFLAGS)

AC_SUBST(TESS_CFLAGS)
AC_SUBST(TESS_LIBS)

AC_OUTPUT(src/Makevars)
