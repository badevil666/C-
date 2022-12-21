#include <iostream> 
#include <iomanip>
#include <stdlib.h>
#include <string>
using namespace std;
void display(int );
class Supermarket
{
    private:
    char product_name[1000][100]={{' '},{'K','i','n','d','e','r',' ','J','o','y'},{'P','e','p','s','i'},
		{'S','e','v','e','n',' ','U','p'},{'D','o','v','e',' ','S','h','a','m','p','o','o'},{'O','r','e','o'},{'L','a','y','s'},
		{'B','a','s','k','i','n',' ','R','o','b','i','n','s',' ','I','c','e',' ','C','r','e','a','m'},{'C','o','c','o',' ','C','o','l','a'},
		{'D','o','v','e',' ','C','o','n','d','i','t','i','o','n','e','r'},{'D','o','v','e',' ','S','o','a','p'},{'E','g','g'},
		{'S','u','n','s','i','l','k',' ','S','h','a','m','p','o','o'}
,{'S','u','n','s','i','l','k',' ','C','o','n','d','i','t','i','o','n','e','r'},{'P','a','r','k',' ','A','v','e','n','u','e',' ','S','h','a','m','p','o','o'},
{'P','e','p','p','e','r'},{'P','a','r','k',' ','A','v','e','n','u','e',' ','C','o','n','d','i','t','i','o','n','e','r'},
{'H','i','m','a','l','a','y','a',' ','S','h','a','m','p','o','o'},{'C','h','e','e','s','e'},{'H','i','m','a','l','a','y','a',' ','C','o','n','d','i','t','i','o','n','e','r'},
{'P','a','t','h','a','n','j','a','l','i',' ','S','h','a','m','p','o','o'},
{'P','a','t','h','a','n','j','a','l','i',' ','C','o','n','d','i','t','i','o','n','e','r'},
{'A','m','w','a','y',' ','S','h','a','m','p','o','o'},{'A','m','w','a','y',' ','C','o','n','d','i','t','i','o','n','e','r'},{'A','v','o','n',' ','S','h','a','m','p','o','o'},{'A','v','o','n',' ','C','o','n','d','i','t','i','o','n','e','r'},{'A','x','e',' ','S','h','a','m','p','o','o'},{'A','x','e',' ','C','o','n','d','t','i','o','n','e','r'},{'A','x','e',' ','B','o','d','y',' ','S','p','r','a','y'},{'B','o','t','i','q','u','e',' ','S','h','a','m','p','o','o'},{'B','o','t','i','q','u','e',' ','C','o','n','d','i','t','i','o','n','e','r'},{'D','a','b','u','r',' ','c','o','n','d','i','t','i','o','n','e','r'},{'D','a','b','u','r',' ','S','h','a','m','p','o','o'},{'D','e','n','v','e','r',' ','S','h','a','m','p','o','o'},{'G','a','r','n','i','e','r',' ','S','h','a','m','p','o','o'},{'L','i','f','e',' ','B','o','y',' ','S','o','a','p'},{'L','i','f','e',' ','B','o','y',' ','H','a','n','d','w','a','s','h'}
,{'P','e','a','r','s',' ','S','o','a','p'},{'D','e','t','t','o','l',' ','S','o','a','p'},{'S','a','n','t','h','o','o','r',' ','S','o','a','p'},{'H','i','m','a','l','a','y','a',' ','S','o','a','p'}};
    char expiry_date[1000][19]={{' '},{'2','2','/','2','5','/','2','0','0','3'},{'2','2','/','2','5','/','2','0','0','3'},{'2','2','/','2','5','/','2','0','0','3'}
    ,{'1','4','/','7','/','2','0','2','3'},
{'2','4','/','1','2','/','2','0','0','2'},
{'1','2','/','1','/','2','0','2','3'},
{'3','0','/','1','2','/','2','0','2','2',},
{'1','6','/','1','2','/','2','0','2','2'},
{'1','5','/','1','2','/','2','0','2','2'},
{'2','0','/','2','/','2','0','2','3'},
{'2','1','/','2','/','2','0','2','3'},
{'1','5','/','1','/','2','0','2','3'},
{'1','8','/','1','/','2','0','2','3'},
{'2','0','/','1','/','2','0','2','3'},
{'1','3','/','1','/','2','0','2','3'},
{'1','4','/','1','/','2','0','2','3'},
{'1','9','/','1','2','/','2','0','2','2'},
{'2','0','/','1','2','/','2','0','2','2'},{'1','4','/','7','/','2','0','2','3'},
{'2','4','/','1','2','/','2','0','0','2'},
{'1','2','/','1','/','2','0','2','3'},
{'3','0','/','1','2','/','2','0','2','2',},
{'1','6','/','1','2','/','2','0','2','2'},
{'1','5','/','1','2','/','2','0','2','2'},
{'2','0','/','2','/','2','0','2','3'},
{'2','1','/','2','/','2','0','2','3'},
{'1','5','/','1','/','2','0','2','3'},
{'1','8','/','1','/','2','0','2','3'},
{'2','0','/','1','/','2','0','2','3'},
{'1','3','/','1','/','2','0','2','3'},
{'1','4','/','1','/','2','0','2','3'},
{'1','9','/','1','2','/','2','0','2','2'},
{'2','0','/','1','2','/','2','0','2','2'},
{'2','2','/','1','2','/','2','0','2','2'},
{'2','1','/','1','2','/','2','0','2','2'},
{'2','3','/','1','2','/','2','0','2','2'},
{'2','4','/','1','2','/','2','0','2','2'},
{'2','5','/','1','2','/','2','0','2','2'}};

    int availability[1000]={0,45,65,737,54,67,87,98,65,63,53,55,67,32,40,69,67,85,9,6,4,8,5,78,6,7,47,57,88,44,22,67,33,74,74,37,9,32,7,9},price[1000]={0,63,97,76,55,56,44,89,66,44,67,33,22,45,78,99,43,67,88,54,89,75,35,45,78,32,78,54,68,86,78,88,43,90,33,47,77,92,75,24};
    public:
    int i=39;
    void purchase ()
    {
        int details[100][2];
        char yorn='n';
        int y=1;
        while(yorn!='y')
        {
          
            system("CLS");
            cout<<"What have you purchased!!!!!!\n";
            cout<<"Enter the product code : ";
            cin>>details[y][1];
            int n=details[y][1];
            display(n);
            cout<<"Enter the number of items purchased :";
            cin>>details[y][2];
            int m = availability[n] ,l = details[y][2];
            availability[n]=m-l;
            display(n);
            
            ++y;
            cout<<"\nAre you done(y/n) :";
            cin>>yorn;
        }
        system("CLS");
        cout<<"\n\n\n\n\n\n\t\t\t\t\tABC Supermarket\n\n\n\tSI NO\t\tProduct Name\t\tNumber of items\t\tPrice\t\tTotal";
        int total=0;
            for (int j=1;j<y;j++)
        {
			int a=details[j][1];
            cout<<endl<<setw(10)<<j<<setw(22)<<product_name[a]<<setw(16)<<details[j][2]<<setw(24)<<price[a]<<setw(15)<<details[j][2]*price[a]<<" Rupees"<<endl;
            total+=details[j][2]*price[a];
        }
        cout<<"\n\n\t\t\t\tGrand Total = "<<total<<" Ruppees"<<endl;

    }
    void check_availability(int n)
    {
        system("CLS");
        if (availability[n]!=0)
        cout<<"\t\t\t\t\tHurray!!!!!!!!!\n\t\t\tThe product is available\n\t\t\t"<<availability[n]<<" number of items are available"<<endl;
        else
        cout<<"\t\t\t\tOOOOPPSSSS\n\t\tThe product is not available";

    }
    void get_product_details ()
    {
        system("CLS");
        cout<<"Enter the product name : ";
        cin>>product_name[i];
        cout<<"Enter the expiry date : ";
        cin>>expiry_date[i];
        cout<<"Enter the number of items available : ";
        cin>>availability[i];

        cout<<"Enter the prize of the product : ";
        cin>>price[i];       
        i++;

    }
    void display_product_details (int n)
    {
        cout<<"     Product Details   \n"<<"Name: " <<product_name[n]<<endl;
        cout<<"Expiry date : "<<expiry_date[n]<<endl;
        if(availability[n]!=0)
           cout<<"Availability : Yes";
        else 
           cout<<"Availability : No";

        cout<<endl<<"Available number of items : "<<availability[n];
        cout<<endl<<"The price of the item is :"<<price[n]<<" Rupees"<<endl;
    }
    void display_all_the_products()
    {
        system("CLS");
        cout<<"Serial No\tProduct Name\t\tAvailable No Of Items\t   Price\t\tExpirydate\n";
        for(int j=1;j<=i;j++)
        {
            cout<<setw(5)<<j<<setw(25)<<product_name[j]<<setw(19)<<availability[j]<<setw(22)<<price[j]<<setw(20)<<expiry_date[j]<<endl;
        }
        
    }
    
}; 
 Supermarket s;

int main()
{
   
   
    int choice;
    while (true)
    { system("CLS");
     string user,password;
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tABC SUPER MARKET\n\n\t\t\t\t\t\t\t\t\t      LOGIN\n\n\n\n\n\t\t\t\t\t\t\t\t\tUser     : ";
        cin>>user;
        cout<<"\t\t\t\t\t\t\t\t\tPassword : ";
        cin>>password;
        if(user=="user1"&&password=="password")
        {
    char terminate='y';
    while(terminate!='n')
    {
        system("CLS");
        cout<<"\t\t\t Welcome to ABC Supermarket"<<endl<<endl<<endl;
        cout<<"\n\nWhat would you like to do \n___________________________\n\n1]Purchasing\n2]Check Availability\n3]Enter a now product's Details \n4]Display the items availabile in the Supermarket";
        cout<<"\n\nEnter your choice : ";
        cin>>choice;
             if(choice==1)
           s.purchase();
                     
                 
            else if(choice==2)
            {
                int pro;
                     cout<<"\nEnter the product code : ";
                     cin>>pro;
                     s.check_availability(pro);
                     
           } 
            else if (choice==3)
            {
                char terminate='y';
                      while(terminate!='n')
                      {
                      s.get_product_details();
                      system("CLS");
                      cout<<"\tThe entered "; 
                      s.display_product_details(s.i-1);
                      cout<<"Do you need to enter more (y/n):";
                      cin>>terminate;
                      }

            
            } 
                      
           else if(choice==4) 
           { 
            s.display_all_the_products();
            }
          
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nDo you need to continue (y/n):";
         cin>>terminate;
   }
        }
        else 
        {
            system("CLS");
            char y;
        cout<<"You have entered the wrong credentials!!!!";
        cout<<"\n\nTry again;";
        cin>>y;
        }
    }
    return 0;
}
void display(int n)
{
    s.display_product_details(n);
} 
