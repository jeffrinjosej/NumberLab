//NumberLab(V1)- Project
#include<iostream>
using namespace std;
int main()
{
    int choice,num,choice2,rows;
    do
    {
        cout<<"=====NUMBER LAB MENU=====\n";
        cout<<"1.Number Analyzer\n";
        cout<<"2.Multiplication Table\n";
        cout<<"3.Pattern Studio\n";
        cout<<"4.Exit\n";
        cout<<"Enter Your Choice(1/2/3/4): ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"===NUMBER ANALYZER===\n";
                cout<<"Enter a Number: ";
                cin>>num;
                cout<<"Number: "<<num<<endl;
                if(num>0)
                    cout<<"Nature:Positive\n";
                else if(num<0)
                    cout<<"Nature:Negative\n";
                else
                    cout<<"The Number is Zero\n";
                if(num%2==0)
                    cout<<"Parity:Even\n";
                else
                    cout<<"Parity:Odd\n";
                break;
            }
            case 2:
            {    
                cout<<"===MULTIPLICATION TABLE===\n";
                cout<<"Enter The Number: ";
                cin>>num;
                for(int i=1;i<=10;i++)
                {
                    cout<<num<<"x"<<i<<"="<<num*i<<endl;
                }
                break;
            }
            case 3:
            {
                do//This do while loop is to make the menu function for Pattern Generation
                {
                    cout<<"===PATTERN STUDIO MENU===\n";
                    cout<<"1.Star Pattern Generation\n2.Number Pattern Generation\n3.Return To Main Menu\n";
                    cout<<"Enter Your Choice: ";
                    cin>>choice2;
                    switch(choice2)
                    {
                        case 1:
                        {
                            cout<<"Enter The Number of Rows: ";
                            cin>>rows;
                            for(int m=1;m<=rows;m++)
                            {
                                for(int n=1;n<=m;n++)
                                {
                                    cout<<"*";
                                }
                                cout<<endl;
                            }
                            break;
                        }
                        case 2:
                        {
                            cout<<"Enter The Number of Rows: ";
                            cin>>rows;
                            for(int m=1;m<=rows;m++)
                            {
                                for(int n=1;n<=m;n++)
                                {
                                    cout<<n;
                                }
                                cout<<endl;
                            }
                            break;
                        }
                        case 3:
                        {
                            break;
                        }
                    
                        default:
                        cout<<"Enter A Valid Option\n";
                    }
                }
                while(choice2!=3);
                
            }
            case 4:
            {
            break;
            }
            default:
            {
                cout<<"Enter a Valid Choice\n";
            }
        }
    }
    while(choice!=4);
}