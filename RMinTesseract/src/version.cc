#include <baseapi.h>

#include <Rdefines.h>

extern "C"
SEXP
R_tesseract_version()
{
 return( ScalarString(mkChar( tesseract::TessBaseAPI::Version() )) );
}
