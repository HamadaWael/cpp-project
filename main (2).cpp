#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int Alice=0 , Bob=0 , Charlie=0;
int num_person , Votes , i_1 , i_2 ;
string person[4];

cout<<"*******************\n";
cout<<"[1] Alice"<<"\n";          
cout<<"[2] Bob"   <<"\n";          
cout<<"[3] Charlie"    <<"\n";          
cout<<"*******************\n";
cout<<"enter your num_person\n"; 
cin >>num_person;
cout<<"enter your Vote\n"; 
cin >>Votes;

for(int i_1=1 ; i_1<=num_person ; i_1++)
{
cout<<"Vote person num : "<<i_1<<"\n";    
cout<<"***************\n";
for(int i_2=1 ; i_2<=Votes ; i_2++)
{
cout<<"Rank"<<i_2<<" : ";
//cin.ignore (1 , '\n');
//getline (cin , person[i_2]);
cin>>person[i_2];
if     (person[1] == "Alice")
        Alice+=3;   
else if(person[2] == "Alice")
        Alice+=2;   
else if(person[3] == "Alice")
        Alice++;   
else if(person[1] == "Bob")     
        Bob+=3;
else if(person[2] == "Bob")     
        Bob+=2;
else if(person[3] == "Bob")     
        Bob++;
else if(person[1] == "Charlie")
        Charlie+=3;
else if(person[2] == "Charlie")
        Charlie+=2;
else if(person[3] == "Charlie")
        Charlie++;
else   
        cout<<"unavailable\n";     
}
cout<<"***************\n";
}

if     (Alice>=Bob & Alice>=Charlie)
{
    cout<<"Alice is winner";
}
else if(Bob>=Alice & Bob>=Charlie) 
{
    cout<<"Bob is winner";
}
else if(Charlie>=Alice & Charlie>=Bob)
{
    cout<<"Charlie is winner";
}
else
{
    cout<<"not winner";
}
}