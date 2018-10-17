#include<iostream>

using namespace std ;

int main()
{
    int score;
std::cout<<"write the points : ";
std::cin>>score;
if(score>86)
{
    cout<<" A Grade"<<endl;
     }
else if (score>=72) 
{
    cout<<" B Grade " <<endl;
}     
else if (score>=60) {
    cout<<"C Grade"<<endl;
}
else if (score>=50) {
    cout<<" D Grade"<<endl;
}
else
{
std:: cout<<" F Grade";
}
return 0;
}