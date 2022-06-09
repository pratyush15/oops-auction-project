#include<iostream>
#include<cstring>
#include<time.h>
#include<stdlib.h>
#include<cstdlib>
using namespace std;
string str="sel@123";
string str1="buy@562";
class Person
{
    public:
     string na;
     int acc;
     int laax;
     Person(){};
     Person(string n,int id,int r)
     {
       na=n;
       acc=id;
       laax=r;

     }
     virtual void set_id()=0;   //abstract class as its a pure virtual function
     void dis()
     {
       //display person info
       cout<<"Person name:"<<endl;
       cout<<na<<endl;
       cout<<"Person account id:"<<endl;
       cout<<acc<<endl;
       cout<<"Bank balance before auction"<<endl;
       cout<<laax<<endl;
     }
};
class Item
{
    public:
     string item_name;
     int aid;
     Item(string it,int id)
     {
       item_name=it;
       aid=id;
     }
     void display()
     {
       cout<<"Painting name:  "<<endl;
       cout<<item_name<<endl;
       cout <<"Painting id:  "<<endl;
       cout<<aid<<endl;
     }
};
class Seller:public Person
{
  public:
   Seller(){};
   Seller(string n,int id, int r):Person(n,id,r)
   {

   }
   
   void set_id()                          //overriding virtual method
   {
     cout<<"Introduce sellers"<<endl;
     cout<<"Your id is:"<<"  "<<str<<endl;
   }
   void dis()
   {
     cout<<"name: "<<na<<endl;
     cout<<"identification_no: "<<acc<<endl;
     cout<<"Bank Balance before auction is: "<<laax<<"rupees"<<endl;


   }

};
class Buyer:public Person
{
   public:
    Buyer(){};
    Buyer(string n,int id,int r):Person(n,id,r)
    {

    }


    void set_id()                          //overriding virtual method
    {
     cout<<"Introduce buyers"<<endl;
     cout<<"Your id is:"<<"  "<<str1<<endl;
    }
    void dis()
    {

     cout<<"name: "<<na<<endl;
     cout<<"identification_no: "<<acc<<endl;
     cout<<"Bank Balance before auction is: "<<laax<<"rupees"<<endl;



    }
void trans(int bal)
{
     int Organi=0,Random_amount,seller=0,earned_by_organisation,earned_by_seeller;
    int base_amountofitem = 500;
    //cout<<"Enter balance of bal"<<endl;
    //cin>> bal;
   srand(time(0));
   Random_amount=base_amountofitem+rand()% (bal-base_amountofitem);
   cout << "Winning Bidded Amount by the Bidder is :"<<endl;
   cout<<Random_amount<<"rupees"<<endl <<endl<<endl;
   cout<< "1st Transaction takes place"<<endl;
   cout<<"**"<<endl;
   bal-=Random_amount;
   Organi+=Random_amount;
   cout<<"Bidder's Bank Balance after auction is : " <<endl;
   cout<<bal<<"rupees"<<endl;
   cout<<"organisation Bank  Balance after auction  is : " <<endl;
   cout<< Organi<<"rupees"<<endl;
   cout<<endl;
   cout<<endl;
   cout<<"transaction 1 completes here"<<endl<<"******"<<endl;
   cout<<endl;
   cout<<endl;
   earned_by_organisation= (15*Organi)/100;
   earned_by_seeller=Random_amount-earned_by_organisation;
   cout<<"Transaction 2 begins here"<<endl;
   //seller=earned_by_organisation;
   cout<<"After Application of 15%  agreement clause between Seller and Organisation"<<endl;
   cout<<endl;
   cout <<"money earned by seller is:" <<endl;
   cout<<earned_by_seeller<<"rupees"<<endl;
    cout <<"money earned by organisation is:" <<endl;
    cout<<earned_by_organisation<<"rupees"<<endl;
    cout<<endl;
    cout<<endl;
   Organi-=earned_by_seeller;
   seller=earned_by_seeller;

   cout<<"Transaction 2 Ends here "<<endl;
   cout<<"*******"<<endl;
   cout<<"Buyers  Balance after Complete auction Process is: " <<endl;
   cout<<bal<<"rupees"<<endl<<endl;
   cout<<"organisation Bank Balance after Complete  auction Process is : " <<endl;
   cout<<Organi<<"rupees"<<endl<<endl;
   cout<<"Balance of Seller after Complete auction Process is : "<<endl;
   cout<<seller<<"rupees"<<endl<<endl;

}
};
class MyException : public exception{
    public:
        const char * what() const throw()
        {
            return "\n    Incorrect Passcode entered to begin auction\n ERROR OCCURED\n";
        }
};
int main()
{
    int h;
    Seller se;
    Buyer bu;
    cout<<"Enter Passcode approved by the oranisation to begin the auction process"<<endl;
    cin>>h;

    try{

        if(h!=1234)

             {
           MyException z;

            throw z;
       }
       else
       {

int max,min,ch,c;
max=5;
min=1;
srand(time(0));
ch=min+rand()%max;
//cout<<"selected one is"<<" "<<min+rand()%max<<endl;
Item io1("Land",01);
Item io2("Water",02);
Item io3("air",03);
Item io4("sky",04);
Item io5("fire",05 );
cout<<"details of Randomly selected  Painting from the group of Paintings are"<<endl;
switch(ch)
{
case(1):{io1.display();
           break;
          }
case(2):{io2.display();
           break;
          }
case(3):{io3.display();
           break;
          }
case(4):{io4.display();
           break;
          }
case(5):{io5.display();
           break;
          }
}
cout<<endl;
cout<<endl;
    Seller s1("Adam Gilchrist",101,0);
    Seller s2("Matthew Hayden",102,0);
    Seller s3("Ricky Pointing",103,0);
    Seller s4("Brett Lee",104,0);
    Seller s5("Shane Warne",105,0);
    cout<<"details of Artist whose painting got selected is"<<endl;
    se.set_id();
switch(ch)
{
case(1):{s1.dis();
           break;
          }
case(2):{s2.dis();
           break;
          }
case(3):{s3.dis();
           break;
          }
case(4):{s4.dis();
           break;
          }
case(5):{s5.dis();
           break;
          }
}

cout<<endl;
cout<<endl;
cout<<endl;

c=min+rand()%max;
Buyer b1("cloyce",201,80000);
Buyer b2("emily",202,56777);
Buyer b3("zion",203,89765);
Buyer b4("dylan",204,67889);
Buyer b5("ken",205,98000);
cout<<"details of  buyer who won the bid  is"<<endl;
bu.set_id();
switch(c)
{
case(1):{b1.dis();
          cout<<endl;
          cout<<endl;
          cout<<endl;
          b1.trans(80000);
          break;
         }
case(2):{b2.dis();
         cout<<endl;
         cout<<endl;
         cout<<endl;
         b2.trans(56777);
         break;
        }
case(3):{b3.dis();
          cout<<endl;
          cout<<endl;
          cout<<endl;
          b3.trans(89765);
          break;
         }
case(4):{b4.dis();
          cout<<endl;
          cout<<endl;
          cout<<endl;
          b4.trans(67889);
          break;
         }
case(5):{b5.dis();
          cout<<endl;
          cout<<endl;
          cout<<endl;
          b5.trans(98000);
          break;
         }
    }

       }
    }
    catch(exception& e)
          {
        cout << e.what();
          }
    return 0;
}  
 
