#include "test.pb.h"
#include <iostream>
#include <string>

using namespace std;
using namespace fixbug;

int main()
{
    fixbug::LoginRequest request;
    request.set_name("zhang san");
    request.set_pwd("123465");

    std::string send_str;
    if(request.SerializeToString(&send_str))
    {
        cout<<send_str<<endl;
    }

    LoginRequest reqB;
    if(reqB.ParseFromString(send_str))
    {
        cout<<reqB.name()<<endl;
        cout<<reqB.pwd()<<endl;
    }

    return 0;
}