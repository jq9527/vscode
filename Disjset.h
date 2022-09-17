#include"JQ_LIB.h"

#ifndef DISJSET
#define DISJSET


template<class T>
class UnionFindSet
{
public:
	UnionFindSet(const int size)
	{
		ufs = vector<T> (size);
        for(int i=0;i<size;i++){
            ufs[i]=i;
        }
	}

    void show (){
        for(int i=0;i<ufs.size();i++){
            cout<<ufs[i]<<";";
        }
    }

	//递归查找，重点
	int find_father(const int pos)
	{
		if (ufs[pos] == pos)
            return pos;
		return ufs[pos]=find_father(ufs[pos]);
	}

	bool to_union(int x, int y)
	{
		x = find_father(x);
		y = find_father(y);

		if (x == y)
			return false;

		ufs[y] = x;
		return true;
	}
private:
	vector<T> ufs;
};


#endif