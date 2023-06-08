bool linearsearch(int arr[],int n,int k){
  if(n==0)//base case
    return false;
  if(arr[0]==k)
    return true;
  else
    return linearsearch(arr+1,n-1,k);}
  
