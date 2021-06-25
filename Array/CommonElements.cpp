#include<bits/stdc++.h>
using namespace std;

/* Using Hashing
Time Complexity - O(n1+n2+n3)
Space Complexity - O(n1+n2)
*/
vector <int> commonElements1 (int A[], int B[], int C[], int n1, int n2, int n3)
{
    unordered_map<int,int> a,b;
    vector<int> result;
    for (int i = 0; i < n1; ++i)
    	a[A[i]]++;

    for (int i = 0; i < n2; ++i)
    	b[B[i]]++;

    for (int i = 0; i < n3; ++i)
    {
    	if(a[C[i]] and b[C[i]])
    	{
    		a[C[i]]--;
    		b[C[i]]--;
    		result.push_back(C[i]);
    	}
    }

    return result;
}

/*Taking index pointers  check on each array
Time Complexity - O(n1+n2+n3)
Space Complexity - O(1)*/

vector <int> commonElements2 (int A[], int B[], int C[], int n1, int n2, int n3)
{
    int aIndex=0,bIndex=0,cIndex=0;
    vector<int> result;
    while(aIndex<n1 and bIndex<n2 and cIndex<n3)
    {
    	if (A[aIndex]==B[bIndex] and B[bIndex]==C[cIndex])
    	{
    		result.push_back(A[aIndex]);
    		aIndex++;bIndex++;cIndex++;
    	}
    	else 
    		{
    			if(A[aIndex]>B[bIndex] and A[aIndex]>C[cIndex])
    			{
    				cIndex++;
    				bIndex++;
    			}
    			else if(A[aIndex]>C[cIndex])
    				cIndex++;
    			else if (A[aIndex]>B[bIndex])
    				bIndex++;
    			else
    				aIndex++;
    		}
    		while (A[aIndex]==A[aIndex-1])
    			aIndex++;
    		while (B[bIndex]==B[bIndex-1])
    			bIndex++;
    		while (C[cIndex]==C[cIndex-1])
    			cIndex++;
    }

    return result;
}
/*
Using binary_search , unique & resize 
Time Complexity - O(n3)
Space Complexity - O(n1+n2)
*/
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
{
    std::vector<int> a(A,A+n1),b(B,B+n2);
    vector<int> result;
    vector<int>::iterator ip;

    for (int i = 0; i < n3; ++i)
    	if(binary_search(a.begin(),a.end(),C[i]) and
			binary_search(b.begin(),b.end(),C[i]))
    		result.push_back(C[i]);

    ip=unique(result.begin(),result.end());
    result.resize(std::distance(result.begin(), ip));
    return result;
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
 	 freopen("input.txt","r",stdin);
 	 freopen("output.txt","w",stdout);
 	#endif

 	 int n1,n2,n3;
 	 cin>>n1;cin>>n2;cin>>n3;
 	 int A[n1],B[n2],C[n3];
 	 for (int i = 0; i < n1; ++i)
 	 	cin>>A[i];
 	 for (int i = 0; i < n2; ++i)
 	 	cin>>B[i];
 	 for (int i = 0; i < n3; ++i)
 	 	cin>>C[i];

 	 std::vector<int> output;
 	 output=commonElements(A,B,C,n1,n2,n3);
 	 for(auto val:output)
 	 	cout<<val<<" ";
	return 0;
}