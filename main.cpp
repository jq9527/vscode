#include<iostream>
using namespace std;
#include"JQ_LIB.h"
#include"class_t.h"

#define GOOGLE 
#define FACEBOOK 1

int main(int argc,char *argv[]){

  #ifdef GOOGLE
    cout<<"google"<<endl;
  #endif

#undef FACEBOOK

  #if FACEBOOK
    cout<<"FACEBOOK"<<endl;
  #endif

}