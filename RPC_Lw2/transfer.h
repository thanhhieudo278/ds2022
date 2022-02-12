/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _TRANSFER_H_RPCGEN
#define _TRANSFER_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct file {
	char *fname;
	char fcontent;
};
typedef struct file file;

#define TRANSFER 0x23451111
#define TRANSFER_1 1

#if defined(__STDC__) || defined(__cplusplus)
#define TRANSF 1
extern  int * transf_1(file *, CLIENT *);
extern  int * transf_1_svc(file *, struct svc_req *);
extern int transfer_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define TRANSF 1
extern  int * transf_1();
extern  int * transf_1_svc();
extern int transfer_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_file (XDR *, file*);

#else /* K&R C */
extern bool_t xdr_file ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_TRANSFER_H_RPCGEN */
