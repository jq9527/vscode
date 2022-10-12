#include"JQ_LIB.h"

#ifndef THREAD_T
#define THREAD_T

mutex mu;
condition_variable conv;
int num=0;

void numDncrease (){
    for(int i=0;i<10;i++){
       // Sleep(1000);
        unique_lock<mutex> un_lock (mu);
        conv.wait(un_lock,[]{return num>0;});
        num--;
        cout<<"c:"<<num<<endl;
        conv.notify_one();
        un_lock.unlock();
    }
}

 void numIncrease (){
    for(int i=0;i<10;i++){
       // Sleep(500);
        unique_lock<mutex> un_lock (mu);
        conv.wait(un_lock,[]{return num<=3;});
        num++;
        cout<<"p:"<<num<<endl;
        un_lock.unlock();
        conv.notify_one();
    }
}

#endif