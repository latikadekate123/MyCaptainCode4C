#include <iostream>

using namespace std;

int check_prime(int n) 
{
    int i,flag=1;
    if(n==0 || n==1)      
    {
        flag=0;
    }
    for(i=2; i<=n/2; i++) 
    {
        if(n%i == 0) 
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int main() 
{
    int n, i, flag = 1;
    cout << "Enter a positive  integer: ";
    cin >> n;

    for(i=2; i<=n/2; i++) 
    {
        if (check_prime(i)) 
        {
            if (check_prime(n-i)) 
            {
                cout<<n<<" = "<<i<<" + "<<n-i<<endl;
                flag=0;
            }
       }
   }
   if (flag==1)
        cout<<n<<" cannot be expressed as sum of two prime numbers.";
   return 0;
}
