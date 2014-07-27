#include <iostream>
using namespace std;


void comp(char *p,int lp,int *pi,int pilen)
{
	int m=lp;
	pi[0]=0;
	int k=0;
	for(int q=1;q<m;q++)
	{
		while(k>0&&p[k]!=p[q])
			k=pi[k];
		if(p[k]==p[q])
			k++;
		pi[q]=k;
	}
}
int main() {
	// your code goes here
	char p[11]="ababababca";
	int pi[11]={0};
	comp(p,10,pi,10);
	for(int q=0;q<10;q++)
		cout<<pi[q]<<" ";
	cout<<endl;
	return 0;
}
