#include<cstdio>
#include<algorithm>
int n,a[128],s,t,i;
int main(){
	scanf("%d",&n);
	for(;i<n;++i)scanf("%d",a+i),s+=a[i];
	std::sort(a,a+n);
	for(;i--;)if((t+=a[i])*2>s)
		return printf("%d",n-i),0;
}
