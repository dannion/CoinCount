// chuangxingongchan.cpp : 定义控制台应用程序的入口点。
//


#include <vector>
#include <iostream>

using  std::vector;
using  std::cin;
using  std::endl;
using  std::cout;

int count=0;
int Target=0;

int coin[4]={1,2,5,10};
int total=0;
vector<int> solution;

void dfs(int index)
{
	if( total == Target )
	{
		count++;
		cout << count <<":" ;
		for( int i=0; i<(int)solution.size(); i++)
		{
			cout  << solution[i]<<" ";
		}
		cout << endl;
		return;
	}

	if( total > Target )
		return;

	for( int i=index; i<4; i++)
	{
		total += coin[i];
		solution.push_back( coin[i] );
		dfs(i);
		solution.pop_back();
		total -=coin[i];
	}
}

int main(int argc, char** argv[])
{
	while(1)
	{
		count=0;
        cin >> Target;
		dfs(0);
        cout << count <<endl;
	}
	return 0;
}
