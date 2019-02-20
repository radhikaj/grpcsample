#include <sys/socket.h>
#include <errno.h>
#include "socket_types.h"
#include "helloworld_u.h"

oe_socket_result_t oe_host_ocall_socket(int a, int b, int c)
{
    oe_socket_result_t result;
    result.ret = socket(a, b, c);
    result.error = errno;
    return result;
}

oe_socketpair_result_t oe_host_ocall_socketpair(int a, int b, int c, int d[2])
{
    oe_socketpair_result_t result;
    result.ret = socketpair(a, b, c, d);
    result.error = errno;
    return result;
}

oe_bind_result_t oe_host_ocall_bind(int a, const struct sockaddr * b, socklen_t c)
{
    oe_bind_result_t result;
    result.ret = bind(a, b, c);
    result.error = errno;
    return result;
}

oe_getsockname_result_t oe_host_ocall_getsockname(int a, struct sockaddr * b, socklen_t c_, socklen_t * c)
{
    oe_getsockname_result_t result;
    result.ret = getsockname(a, b, c);
    result.error = errno;
    return result;
}

oe_connect_result_t oe_host_ocall_connect(int a, const struct sockaddr * b, socklen_t c)
{
    oe_connect_result_t result;
    result.ret = connect(a, b, c);
    result.error = errno;
    return result;
}

oe_getpeername_result_t oe_host_ocall_getpeername(int a, struct sockaddr * b, socklen_t c_, socklen_t * c)
{
    oe_getpeername_result_t result;
    result.ret = getpeername(a, b, c);
    result.error = errno;
    return result;
}

oe_send_result_t oe_host_ocall_send(int a, const void * b, int c, int d)
{
    oe_send_result_t result;
    result.ret = send(a, b, c, d);
    result.error = errno;
    return result;
}

oe_recv_result_t oe_host_ocall_recv(int a, void * b, int c, int d)
{
    oe_recv_result_t result;
    result.ret = recv(a, b, c, d);
    result.error = errno;
    return result;
}

oe_sendto_result_t oe_host_ocall_sendto(int a, const void * b, int c, int d, const struct sockaddr * e, socklen_t f)
{
    oe_sendto_result_t result;
    result.ret = sendto(a, b, c, d, e, f);
    result.error = errno;
    return result;
}

oe_recvfrom_result_t oe_host_ocall_recvfrom(int a, void * b, int c, int d, struct sockaddr * e, socklen_t f_, socklen_t * f)
{
    oe_recvfrom_result_t result;
    result.ret = recvfrom(a, b, c, d, e, f);
    result.error = errno;
    return result;
}

oe_sendmsg_result_t oe_host_ocall_sendmsg(int a, struct msghdr * b, int c, void *iovecbase, int length, struct iovec * p, const int num_p)
{
    oe_sendmsg_result_t result;
    b->msg_iov = p;
    int length_so_far = 0;
    for(int i =0 ;  i < num_p; i++)
    {
        b->msg_iov[i].iov_base = ((char*)iovecbase) + length_so_far;
        length_so_far =length_so_far +  b->msg_iov[i].iov_len;
    }

    result.ret = sendmsg(a, b, c);
    result.error = errno;

     printf("sendmsg: ret=%d, errno=%d\n", result.ret, errno);
    return result;
}

oe_recvmsg_result_t oe_host_ocall_recvmsg(int a, int msg_iovlen, int *msgflags, void *name, int namelen, int *actualnamelen, void *control, int controllen, int *actualcontrollen, int c, void *iov_base, int iovlen, int *actualiovlen)
{
    oe_recvmsg_result_t result;
     //char buffer[8096];
     //struct sockaddr_storage src_addr;
     

     struct iovec iov[1];
     iov[0].iov_base=(char*)iov_base;
     iov[0].iov_len=iovlen;

      struct msghdr message;
      message.msg_name=name;
      message.msg_namelen=namelen;
      message.msg_iov=iov;
      message.msg_iovlen=msg_iovlen;
      message.msg_control=control;
      message.msg_controllen=controllen;
      
      
      printf("msg_iovlen = %d\n", msg_iovlen);
      
//    result.ret = recvmsg(a, b, c);
    result.ret = recvmsg(a, &message, c);
    *actualnamelen = message.msg_namelen;
    *actualcontrollen = message.msg_controllen;
    *actualiovlen = message.msg_iov[0].iov_len;
    *msgflags = message.msg_flags;
    result.error = errno;
    
    printf("recvmsg: ret=%d, errno=%d\n", result.ret, errno);
    return result;
}

oe_getsockopt_result_t oe_host_ocall_getsockopt(int a, int b, int c, void * d, socklen_t e_, socklen_t * e)
{
    oe_getsockopt_result_t result;
    result.ret = getsockopt(a, b, c, d, e);
    result.error = errno;
    return result;
}

oe_setsockopt_result_t oe_host_ocall_setsockopt(int a, int b, int c, const void * d, socklen_t e)
{
    oe_setsockopt_result_t result;
    result.ret = setsockopt(a, b, c, d, e);
    result.error = errno;
    return result;
}

oe_listen_result_t oe_host_ocall_listen(int a, int b)
{
    oe_listen_result_t result;
    result.ret = listen(a, b);
    result.error = errno;
    return result;
}

oe_accept_result_t oe_host_ocall_accept(int a, struct sockaddr * b, socklen_t c_, socklen_t * c)
{
    oe_accept_result_t result;
    result.ret = accept(a, b, c);
    result.error = errno;
    return result;
}

oe_shutdown_result_t oe_host_ocall_shutdown(int a, int b)
{
    oe_shutdown_result_t result;
    result.ret = shutdown(a, b);
    result.error = errno;
    return result;
}

oe_sockatmark_result_t oe_host_ocall_sockatmark(int a)
{
    oe_sockatmark_result_t result;
    result.ret = sockatmark(a);
    result.error = errno;
    return result;
}

oe_isfdtype_result_t oe_host_ocall_isfdtype(int a, int b)
{
    oe_isfdtype_result_t result;
    result.ret = isfdtype(a, b);
    result.error = errno;
    return result;
}

