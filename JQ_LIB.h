#ifndef JQ
#define JQ

#include<iostream>
using namespace std;
#include<map>
#include<string>
#include<math.h>
#include<vector>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<memory>               //智能指针，shared_ptr、unique_ptr、weak_ptr在些头文件
#include<queue>                //优先队列
#include<stack>
#include<thread>               //线程
#include<condition_variable>   //条件变量

#include<algorithm>
/*
    reverse(vec.begin(),vec.end()); //反转容器
    auto new_end = unique(c.begin(), c.end());//得先排序，把重复元素移到最后，再通过返回的迭代器"删除"相邻的重复元素。
    find (vec.begin(), vec.end(), const int& val); //查找，它返回的是第一个匹配的对应迭代器
    find_if(vec.begin(), vec.end(), func);//返回第一个让 func这个函数返回true的iterator,find_if(can.begin(),can.end(),[](int a){return a%3==0;});返回第一个3的倍数。
    adjacent_find(myvector.begin(), myvector.end()); //找到容器中第一个相邻的两元素的迭代器。
    count(vec.begin(),vec.end(),2); //查找值为2的元素的个数，count_if()与上的find_if()机制类似
    remove(vec.begin(), vec.end(), 1); //移除值为1的元素，但并没有删除，配合vec.erase(remove(vec.begin(), vec.end(), 1), vec.end());可以删除。remove_if与find_if机制类似
    unique(c.begin(), c.end())  //删除相邻元素，伪删除。
    ower_bound( begin,end,num);//从数组的begin位置到end-1位置二分查找第一个大于或等于num的数字，找到返回该数字的迭代器。注意，这里是二分查找，必须有序
    upper_bound( begin,end,num);//从数组的begin位置到end-1位置二分查找第一个大于num的数字，找到返回该数字的迭代器。
    merge(vec1.begin(),vec1.end(),vec2.begin(),vec2.end(),res.begin()); //合并两个有序容器。
    min_element(begin,end)和max_element(begin,end); 最大最小值。
    prev_permutation(begin,end)和next_permutation(begin,end) 前一个有效的全排列和下一个有效的全排列（字典顺序）
*/

#include<numeric>
/*
    目前用到的里面的库函数：
    accumulate(vec.begin() , vec.end() , 42); //累加，第三个参数是累加初值。
*/

#include<sstream> 
/*
    这里用到的函数有:
    getline(cin,line)和stringstream ss(line)
*/
#include<ctime>
/*
    这里暂时用到的函数有:
    clock() //函数返回从“开启这个程序进程”到“程序中调用clock()函数”时之间的CPU时钟计时单元数.数据类型:clock_t,实际上是long
    time()//函数可以传入一个time_t类型的指针，函数执行过程中通过指针修改变量的值使其保存返回值，也可以传入空指针，不对返回值进行保存，time()返回以秒为单位的整型
*/

#endif