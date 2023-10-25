class Solution {
  public:
    void printTriangle(int n) {
        int c=0;
        // code here
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++)
            {
                if((i+j)%2==0)
                  cout<<1<<" ";
                else
                  cout<<0<<" ";
                
            }
            cout<<"\n";
        }
    }
};
