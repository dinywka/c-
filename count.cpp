#include<iostream>
using namespace std;
int main()
{
  int N=0;
  cin>>N;
  int pred=N; 
  int kolvo=0, max=0;
  while(N != 0)
  {
    cin>>N;
    if(pred>N){
      max = N;
      cin>>N;}
         if(N < max)
         {kolvo=kolvo+1;}
      cin>>N;
      pred=N;
      }
  cout<<kolvo;
  return 0;

}