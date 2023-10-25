//Program for overloading the relational operator comparing 2 objects
//Name: Kameshwar shukla
//Date: 29-09-2023
//Reg no: 230970055


#include<iostream>
using namespace std;

class my_string
{
        char str[20];

        public:
        void getstring()
        {
                cin>>str;

        }
        void display()
        {
                cout<<str<<endl;
        }

        int lenth(){
                int i=0;
                while(str[i] != '\0')
                        i++;
                return i;
        }

        int operator <= (my_string);
};

int my_string :: operator <= (my_string c)
{
        int i=0;
        while(str[i] !='\0' || c.str[i] !='\0')
        {
                if(str[i] == c.str[i])
                {
                        i++;

                }
                else
                        cout<<str[i]-c.str[i]<<endl;
                        return str[i]-c.str[i];

        }
}

int main()
{
        my_string s1;
        my_string s2;


        cout<<"Enter first string: "<<endl;
        s1.getstring();
        cout<<"Enter second string: "<<endl;
        s2.getstring();
        cout<<"string 1: "; s1.display();
        cout<<"string 2: "; s2.display();
        int n = (s2 <= s1);
        if(n > 0)
                cout<<"string 2 is greater than string 1"<<endl;

        else
                cout<<"string 1 is greater than string 2"<<endl;

        return 0;

}
