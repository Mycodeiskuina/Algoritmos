int get(int index){
    index++;
    int sum=0;
    while(index>0){
        res+=f[index];
        index-=(index)&(-index);
    }
    return sum;
}
 void update(int index,int val){
     index++;
     while(index<=n){
         f[index]+=val;
         index+=(index)&(-index);
     }
 }
