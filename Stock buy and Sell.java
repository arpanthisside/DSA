ArrayList<ArrayList<Integer>> al=new ArrayList<ArrayList<Integer>>();
    int maxp=n-1,maxs=0,f=0;
     for(int i=n-1 ; i>0 ; i--){
      if(arr[i]>arr[i-1] && maxs<(arr[maxp]-arr[i-1])){
       maxs=arr[maxp]-arr[i-1];
       f=i;
      }
      else if(arr[i]<arr[i-1] && f!=0 && maxs!=0){
      ArrayList<Integer> l1=new ArrayList<Integer>();
      l1.add(0,i);
      l1.add(1,maxp);
      al.add(l1);
       maxp=i-1;
       maxs=0;
      }
      else if(arr[i]<arr[i-1] && maxs==0){
       maxp=i-1;
      }
     }
     if(maxs!=0){
      ArrayList<Integer> l1=new ArrayList<Integer>();
      l1.add(0,f-1);
      l1.add(1,maxp);
      al.add(l1);
     }
     return al;