class Solution{
public:
	
	void printTriangle(int n) {
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=n-i+1;j++){
	            cout<<"*"<<" ";
	        }
	        cout<<endl;
	    }
	}
};
//link:https://practice.geeksforgeeks.org/problems/triangle-pattern/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_5
//https://www.youtube.com/watch?v=tNm_NNSB3_w&t=91s
