/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "transfer.h"

bool_t
xdr_file (XDR *xdrs, file *objp)
{
	register int32_t *buf;

	 if (!xdr_pointer (xdrs, (char **)&objp->fname, sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_char (xdrs, &objp->fcontent))
		 return FALSE;
	return TRUE;
}
