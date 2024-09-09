/*#include<iostream>
using namespace std;

int main()
{
cout<<"Hello world";

}

//1.1. Write a C program to print all natural numbers from  1 to n. - using while Loop

#include<iostream>
using namespace std;

int main()
{
   int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(auto i=1;i<=n;++i)
     {
         cout<<i<<"\t";

     }



}


// 2. Write a C program to print all natural numbers in reverse (from n to 1). -Using while loop

#include<iostream>
using namespace std;

int main()
{
   int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(auto i=n;i>=0;--i)
     {
         cout<<i<<"\t";

     }

}


//3. Write a C program to print all alphabets from a to z. - using while loop


#include<iostream>
using namespace std;

int main()
{
    char a='a';
   while(a<='z')
      {

     cout<<a<<"\t";
      ++a;

       }
}


//4. Write a C program to print all even numbers between  1 to 100. - usingWhile loop 

#include<iostream>
using namespace std;

int main()
{  
   int i=0;
   while(i<=100)
     {
          if(i%2==0)
          cout<<i<<" ";
        ++i;
      }


return 0;
}


//5. Write a C program to print odd  numbers between  1 to 100. - usingWhile loop 

#include<iostream>
using namespace std;

int main()
{  
   int i=0;
   while(i<=100)
     {
          if(i%2!=0)
          cout<<i<<" ";
        ++i;
      }


return 0;
}

//6. Write a C program to find sum of all natural numbers between 1 to n.

#include<iostream>
using namespace std;

int main(){
      int n;   
      cout<<"Enter a number"<<endl;
      cin>>n;

      cout<<"Addition of first" <<n<<"natural numbers is "<<(n*(n+1))/2;
   
}


//  7. Write a C program to find sum of all even numbers between 1 to n.

#include<iostream>

using namespace std;

int main()
{
  int i;
  cout<<"Enter a number"<<endl;
  cin>>i;
  cout<<"Sum of first "<<i<<" natural numbers is "<<i*(i+1)<<endl;



}


//8. Write a C program to find sum of all odd numbers  between 1 to n. 

#include<iostream>
using namespace std;

int main()
{
     int n;
     cout<<"Enter number"<<endl;
     cin>>n;
     

     cout<<"Sum of first "<<n<<"odd numbers is "<<n*n<<endl;
}



//9. Write a C program to print multiplication table of any number.


#include<iostream>
using namespace std;

int main()
{
     int n;
     cout<<"Enter number"<<endl;
     cin>>n;
    
    for(int i=1;i<=10;++i)
       cout<<n*i<<endl; 

    
}



//10. Write a C program to count number of digits in a number.


#include<iostream>
using namespace std;

int main()
{
   int num;
   cout<<"Enter a number"<<endl;
   cin>>num;
   int k=num;
   int count=0;
   while(num>0)
   {
    
       num/=10;
     count++;

   }

  cout<<"Number of digits in "<< k <<" is " <<count<<endl;

}


//11. Write a C program to find first and last digit of a number.

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    int last_digit=num%10;
     
    int first_digit;
    while(num>10)
     {
        num/=10;
      
      }
    
   first_digit=num;
   
  cout<<"First digit of num is "<<first_digit<<" and last digit is "<<last_digit<<endl;

}

*/




//12. Write a C program to find sum of first and last digit  of a number.


#include<iostream>
using namespace std;

int main()
{

    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    int last_digit=num%10;
     
    int first_digit;
    while(num>10)
     {
        num/=10;
      
      }
    
   first_digit=num;
   
  cout<<"Sum  of first and last digit of num is "<<first_digit+last_digit;


}
