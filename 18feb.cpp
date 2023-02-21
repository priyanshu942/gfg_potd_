int s=0;
        int e=0;
        int res=0;
        while(e!=n)
        {
            if(m>0)
            {
                if(arr[e]=='O')
                {
                m--;
                }
            }
            
            else{
                if(arr[e]=='O')
                {
                    while(arr[s]!='O')
                    {
                        s++;
                    }s++;
                }
            }
            res=max(res,e-s+1);
            e++;
        }
        return res;
