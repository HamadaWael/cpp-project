#include <iostream>
using namespace std;

int main()
{
int person1=0 , person2=0 , person3=0;
int num_person , Votes , i_1 , i_2 ;
string person[4];
string person_1 , person_2 , person_3 ;

cout<<"enter your Names of candidates \n";
cout<<"***************\n";
cin >>person_1  ;
cin >>person_2  ;
cin >>person_3  ;
cout<<"***************\n";

cout<<"enter your num_person\n"; 
cin >>num_person;
cout<<"enter your Vote\n"; 
cin >>Votes;
cout<<"\n";
cout<<"*******************\n";
cout<<"["<< person_1 <<"]"<<"\n";          
cout<<"["<< person_2 <<"]"<<"\n";          
cout<<"["<< person_3 <<"]"<<"\n";          
cout<<"*******************\n";

for(int i_1=1 ; i_1<=num_person ; i_1++)
{
cout<<"____________________\n";    
cout<<"*******************\n";
cout<<"["<< person_1 <<"]"<<"\n";          
cout<<"["<< person_2 <<"]"<<"\n";          
cout<<"["<< person_3 <<"]"<<"\n";          
cout<<"*******************\n";
cout<<"Vote person num : "<<i_1<<"\n";    
cout<<"***************\n";
for(int i_2=1 ; i_2<=Votes ; i_2++)
{
cout<<"Rank"<<i_2<<" : ";
//cin.ignore (1 , '\n');
//getline (cin , person[i_2]);
cin>>person[i_2];
if     (person[1] == person_1)
        person1+=3;   
else if(person[2] == person_1)
        person1+=2;   
else if(person[3] == person_1)
        person1++;   
else if(person[1] == person_2)     
        person2+=3;
else if(person[2] == person_2)     
        person2+=2;
else if(person[3] == person_2)     
        person2++;
else if(person[1] == person_3)
        person3+=3;
else if(person[2] == person_3)
        person3+=2;
else if(person[3] == person_3)
        person3++;
else   
        cout<<"unavailable\n";     
}
cout<<"***************\n";
cout<<"____________________\n";    
}

if     (person1>=person2 & person1>=person3)
{
    cout<< person_1 <<" is winner";
}
else if(person2>=person1 & person2>=person3) 
{
    cout<< person_2 <<" is winner";
}
else if(person3>=person1 & person3>=person2)
{
    cout<< person_3 <<" is winner";
}
else
{
    cout<<"not winner";
}
}
