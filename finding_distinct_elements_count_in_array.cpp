#include<bits/stdc++.h>
// using std::cout;
// using std::cin;
// using std::endl;
int count;
int Find_Distinct(std::vector<int>& arr, int& s);
int main()
{
    int size, val(0);
	scanf("%d", &size);
	std::vector<int> v;
	for(int i=0;i<size;++i)
	{
		scanf("%d", &val);
		v.push_back(val);
	}
	printf("%d", Find_Distinct(v,size));

}
int Find_Distinct(std::vector<int>& arr, int& s)
{
	bool is_distinct=true;
	for(int i=0;i<s;++i)
	{
		is_distinct=true;
		for(int j=i-1;j>=0;--j)
		{
			if(arr[i]==arr[j])
			{
				is_distinct=false;
				break;
			}
		}
		if(is_distinct)
		{
			count++                                                   ;
		}
	}
	return count;
}
