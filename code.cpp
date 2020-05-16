#include<iostream>
using namespace std;
void Towerofhanoi(int n,char src,char dest,char helper)
{
	if(n==0)
	{
		return;
	}
	Towerofhanoi(n-1,src,helper,dest);
	cout<<"Moving ring"<<" "<<n<<" from "<<src<<" "<<"to"<<" "<<dest<<endl;
	Towerofhanoi(n-1,helper,dest,src);
}
int main() {
	int n;
	cin>>n;
	Towerofhanoi(n,'A','B','C');
	return 0;
}