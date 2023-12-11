//Problem Link:https://www.codingninjas.com/studio/problems/subset-sum_3843086?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTabValue=PROBLEM
void func(int i,vector<int>&num,int n,vector<int>&v,int sum){
	if(i==n){
		v.push_back(sum);
		return;
	}
	func(i+1,num,n,v,sum+num[i]);
	func(i+1,num,n,v,sum);
}
vector<int> subsetSum(vector<int> &num){
	vector<int>v;
	int n=num.size();
	func(0,num,n,v,0);
	sort(v.begin(),v.end());
	return v;
}
