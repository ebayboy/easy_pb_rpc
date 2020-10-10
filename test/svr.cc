
#include <string>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "rpc_server.h"
#include "helloworld.pb.h"

using namespace PBRPC;

//protobuf EchoService的类实现
class EchoServiceImpl : public EchoService
{
public:
	EchoServiceImpl() {}
	//Foo方法实现
	virtual void Foo(::google::protobuf::RpcController *controller,
					 const ::FooRequest *request,
					 ::FooResponse *response,
					 ::google::protobuf::Closure *done)
	{
		std::string str = request->text();
		std::string tmp = str;
		for (int i = 1; i < request->times(); i++)
			str += (" " + tmp);
		response->set_text(str);
		response->set_result(true);
	}
};

int main(int argc, char *argv[])
{
	EchoServiceImpl *impl = new EchoServiceImpl(); //实现服务
	RpcServer rpc_server;
	rpc_server.RegisterService(impl); //注册服务
	rpc_server.Start(); //启动： 做了什么?
	return 0;
}
