class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {

    int cnt=0;
    int mrow=0;
    int j=N-1;
    for(int i=0;i<N;i++)
    {
        while(j>=0&&mat[i][j]==1)
        {
            mrow=i;
            cnt++;
            j--;
        }
    }
    return{mrow,cnt};
    }
};
