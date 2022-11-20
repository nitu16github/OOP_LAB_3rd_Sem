 //WAP to increment the value of an argument given to the function.
 
 #include<iostream>
 using namespace std;
 inline int inc(int i){
i=i+1;
cout<<"increment value is:"<<i<<endl;

 }
int main(){
int j;
cout<<"enter the value for increment:";
cin>>j;
inc(j);

return 0;
}
