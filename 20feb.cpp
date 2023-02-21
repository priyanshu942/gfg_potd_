
    
    int minIteration(int N, int M, int x, int y){    
        // code here
        int leftDistance = y-1;
        int rightDistance = M-y;
        int topDistance = x-1;
        int bottomDistance = N-x;
        int maxHor = max(leftDistance, rightDistance);
        int maxVer = max(topDistance, bottomDistance);
        return (maxHor+maxVer);
    
    }
