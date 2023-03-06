class Solution {
    public int findKthPositive(int[] arr, int k) {
        int c=1,m=0,i=0;
        while(i<arr.length){
            if(arr[i]>c){
                m=arr[i]-c;
                if(k>m){
                    k-=m;

                }else{
                    if(i==0)
                     return k;
                    else return arr[i-1]+k;
                }
            }
            c=arr[i]+1;
            i++;
        }
        return arr[i-1]+k;
        
    }
}
