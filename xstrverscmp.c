/* Kept as a separate compilation unit to isolate _GNU_SOURCE */

#include "xstrverscmp.h"

#ifdef HAVE_CONFIG
#include "config/strverscmp.h"
#endif

#define _GNU_SOURCE
#include <string.h>

int xstrverscmp(const char *s1, const char *s2) {
#ifdef HAVE_STRVERSCMP
	return strverscmp(s1, s2);
#else
	return strcmp(s1, s2);
#endif
}
