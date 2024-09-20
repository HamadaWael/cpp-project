#include <iostream>
using namespace std;

struct Name
{
string name;    
};

int main()
{
int persons[100] ;
int num_person  , Vote , i_1 , i_2 , Num_candidates ;
string person[4];
int num[100]={0};

Name name[100];
{
cout<<"enter your Num_candidates \n";
cin >>Num_candidates;

for(int x=1 ; x<=Num_candidates ; x++)
{
cout<<"person no "<<x<<" : ";    
cin >>name[x].name;    
}

cout<<"enter your num_person\n"; 
cin >>num_person;
cout<<"\n";

cout<<"enter your num_Vote\n";
cin >>Vote;

for(int i_1=1 ; i_1<=num_person ; i_1++)
{
cout<<"____________________\n";    
cout<<"*******************\n";

for(int y=1 ; y<=Num_candidates ; y++)
{
cout<<"["<<name[y].name<<"]"<<"\n";
}
cout<<"*******************\n";

cout<<"Vote person num : "<<i_1<<"\n";    
cout<<"***************\n";
for(int i_2=1 ; i_2<=Vote ; i_2++)
{
cout<<"Rank"<<i_2<<" : ";
//cin.ignore (1 , '\n');
//getline (cin , person[i_2]);
cin>>person[i_2];

for(int g=1 ; g<=Num_candidates ; g++)
{
if(person[1] == name[g].name )
{  
   num[g]++;   
}
else{}  
}
}
cout<<"***************\n";
cout<<"____________________\n";    
}

for(int j=1 ; j<=Num_candidates ; j++)
{
    
float result;
result = ( num_person / 2 ) ;
    
if( num[j] >= result )
{  
  cout<<name[j].name<<" is winner"<<"\n";
}
else{}
}
}
}
