# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License.

# Detect C and C++ compiler options
# if not gcc and g++, default to clang-7
C_COMPILER=$(notdir $(CC))
ifeq ($(C_COMPILER), gcc)
        CXX_COMPILER=$(notdir $(CXX))
        USE_GCC = true
endif

ifeq ($(USE_GCC),)
        CC = clang-7
        CXX = clang++-7
        C_COMPILER=clang
        CXX_COMPILER=clang++
endif

CFLAGS=$(shell pkg-config oeenclave-$(C_COMPILER) --cflags)
CXXFLAGS=$(shell pkg-config oeenclave-$(CXX_COMPILER) --cflags)
LDFLAGS=$(shell pkg-config oeenclave-$(CXX_COMPILER) --libs)

all:
	$(MAKE) build
	$(MAKE) keys
	$(MAKE) sign

build:
	@ echo "Compilers used: $(CC), $(CXX)"
	oeedger8r --search-path ../  ../helloworld.edl --trusted
	/usr/local/bin/protoc -I. helloworld.proto --cpp_out=.
	/usr/local/bin/protoc --grpc_out=. --plugin=protoc-gen-grpc=`which grpc_cpp_plugin`  helloworld.proto
	$(CXX) -c $(CXXFLAGS) -g -std=c++11 enclave_util.cpp enc.cpp pthread_enclave.c eventfd_enclave.c socket_enclave.c inet_enclave.c netdb_enclave.c epoll_enclave.c fcntl_enclave.c -fPIC -I/usr/local/include -I/usr/local/include -nostdinc++ #-I /usr/local/include
	$(CC) -c $(CFLAGS)  -g helloworld_t.c -o helloworld_t.o 
	$(CXX) -c $(CXXFLAGS) -g -std=c++11 helloworld.pb.cc helloworld.grpc.pb.cc -I/usr/local/include/  -fPIC 
	$(CXX) -o helloworldenc.so enclave_util.o enc.o pthread_enclave.o eventfd_enclave.o socket_enclave.o inet_enclave.o netdb_enclave.o epoll_enclave.o fcntl_enclave.o helloworld_t.o helloworld.pb.o helloworld.grpc.pb.o /opt/oe_libs/libgrpc_unsecure.a /opt/oe_libs/libgrpc++_unsecure.a /opt/oe_libs/libprotobuf.a  /opt/oe_libs/libgrpc_unsecure.a /opt/oe_libs/libgrpc++_unsecure.a  $(LDFLAGS) -g



sign:
	oesign sign helloworldenc.so helloworld.conf private.pem

clean:
	rm -f *.so *.o fileencryptor_t.* fileencryptor_args.h private.pem public.pem

keys:
	openssl genrsa -out private.pem -3 3072
	openssl rsa -in private.pem -pubout -out public.pem


