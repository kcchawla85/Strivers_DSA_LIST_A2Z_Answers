class Solution{
public:
	
	void printTriangle(int n) {
	    for(int i=0;i<n;i++){
	        for(int j=0;j<i;j++){
	            cout<<" ";
	        }
	        for(int k=0;k<2*n-(2*i+1);k++){
	            cout<<"*";
	        }
	        cout<<endl;
	    }
	}
};
//link: https://www.youtube.com/watch?v=tNm_NNSB3_w&t=1419s
// link: https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/
