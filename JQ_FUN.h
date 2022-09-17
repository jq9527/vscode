#include"JQ_LIB.h"

#ifndef FUN
#define FUN

//删除Vector中重复元素
void deduplication(vector<int> &c)   
{
	sort(c.begin(), c.end());
	auto new_end = unique(c.begin(), c.end());//"删除"相邻的重复元素
	c.erase(new_end, c.end());//删除(真正的删除)重复的元素
}

//输出流
void write_something (std::ostream &out) 
{
    out<<"Hi stream,did you know that 3*3="<<3*3<<std::endl;
}

/*
			int main(int argc,char **argv)
			{
				std::ofstream myfile("example.txt");
				std::stringstream mysstream;
				write_something(std::cout);
				write_something(myfile);
				write_something(mysstream);
			}
*/

//辗转相除法求两数最大公约数（欧几里德算法）
int euclid(int a,int b){
    //要求a和b是正整数
    if(a<=0||b<=0) 
        return -1;
    int tmp=a%b;
    while(tmp!=0){
        a=b;
        b=tmp;
        tmp=a%b;
    }
    return b;
}

void quick_sort(vector<int>& a, int start, int end) {

    if(start>end) return;
    int base = a[start];
    int i = start;
    int j = end;
    while (i < j) {
        while (i<j && a[j]>=base) --j;
        while (i<j && a[i]<=base) ++i;
        if (i < j) swap(a[i], a[j]);
    }
    swap(a[start], a[j]);
    quick_sort(a,start,i-1);
    quick_sort(a,i+1,end);
 }

 void fun()
{
	string str;	
	string str_cin("one#two#three");
	stringstream ss;
	ss << str_cin;
	while (getline(ss, str, '#'))
		cout << str<< endl;
	system("pause");
}


//ACM模式输入，输入一行，每行不定个。
int main(int argc,char **argv){
    vector<int> vec;
    int tem;
    while(cin>>tem){
         vec.push_back(tem);
        if(getchar()=='\n') break;
    }
    for(int a:vec){
        cout<<a<<";";
    }
}

//输入不定行，每行不定个，最后两个回车结束输入。
int main(int argc,char **argv){
    map<string,int> mp;
    string str;
    while(getline(cin,str)){
        if(str.size()==0) break;
        stringstream ss(str);
        string s;
        while(getline(ss,s,',')){
            if(mp.find(s)==mp.end()) mp[s]=1;
            else mp[s]++;
        }
    }
}

//ACM模式输入，输入用逗号隔开
int main(){
    string line;
    string item;
    vector<string> v;
    while(cin>>line){
        stringstream ss(line);
        while(getline(ss,item,',')){
            v.push_back(item);
        }
        sort(v.begin(), v.end());
        for(int i = 0;i < v.size(); ++i) {
            if(i == v.size()-1) cout << v[i];
            else cout << v[i] << ",";
        }
        v.clear();
        cout << '\n'; 
    }
}

#endif