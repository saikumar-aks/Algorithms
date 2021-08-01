#include<bits/stdc++.h>
using namespace std;
void rotate_array(vector<int>& arr, int& n)
{
	int temp=arr[0];
	for(int i=0;i<arr.size()-1;++i)
	{
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
}
int main()
{
	int size,val,d;
	vector<int> v;
	scanf("%d", &size);
	for(int i=0;i<size;++i)
	{
		scanf("%d", &val);
		v.push_back(val);
	}
	printf("Enter the rotation Number: ");
	scanf("%d", &d);
	while(d--)
	{
		rotate_array(v,size);
	}
	for(auto& e: v)
	{
		printf("%d ", e);
	}
	
}
