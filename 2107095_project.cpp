///SADIA MOSTAFA
///ROLL:2107095


#include<iostream>
#include <vector>
#include <string>
using namespace std;
class Agency;
class Package;
class reservation ;
class Client
{
    string name;
    int id;
    long long int phone;
 public:
    Client(string p,int q,long long int r)
    {
          name=p;
          id=q;
          phone=r;
    }
    Client()
    {

    }
    void print()
    {
       cout<<"NAME: "<<name<<"  \t"<<"CUSTOMER ID: "<<id<<"\t"<<"PHONE NUMBER: 0"<<phone<<endl;
    }
    friend Agency;

};
class Package
{
//number of package agency have
    int packagecode[8];
    string destination[8];
    int prices[8];//3 day per head
    public:
    void addpackages()
    {
        packagecode[0]=1;
        packagecode[1]=2;
        packagecode[2]=3;
        packagecode[3]=4;
        packagecode[4]=5;
        packagecode[5]=6;
        packagecode[6]=7;
        packagecode[7]=8;
        prices[0]= 10000;
        prices[1]= 6000;
        prices[2]= 6500;
        prices[3]= 7500;
        prices[4]= 7800;
        prices[5]= 6000;
        prices[6]= 9000;
        prices[7]= 7800;
        destination[0]="Bandarban,Rangamati,Khagrachari";
        destination[1]="Rajshahi,Chapai,Natore,Bogura";
        destination[2]="Kuakata,Barishal,Pirojpur";
        destination[3]="Srimanagal,Moulavibazar,Chatok";
        destination[4]="Bhola,Chandpur,Cumilla,B-Baria";
        destination[5]="Cox's bazar,Saint-Martin,Teknaf";
        destination[6]="Sunamganj,Sylhet,Habiganj";
        destination[7]="Sundarban,Bagerhat,Khulna";
    }
    Package()
    {
          cout<<"Package"<<"\t"<<"\t"<<"\t"<<"Destination"<<"\t"<<"\t "<<"Prices-Per-Head"<<endl;
    }
    void showpackage()
    {

    for(int i=0;i<8;i++)
    {
        cout<<packagecode[i]<<"\t"<<"\t"<<destination[i]<<"\t"<<"\t"<<prices[i]<<endl;
    }
    }
    friend Agency;
};
class reservation
{
   string bookingid;
   string nationalId;
   public:
   reservation(){
        cout<<"Give your national id card number"<<endl;
        cin>>nationalId;
        bookingid=nationalId;
        cout<<"Your booking is completed"<<endl;
        cout<<"BOOKINGID :"<<"562BD"<<bookingid<<"\t"<<"NATIONAL ID: "<<nationalId<<" \t";
   }
   friend Agency;

};
class Agency
{
    //friend Package;
    int person;
    int child;
    public:
    Agency(int x,int y)
    {
        person=x;
        child=y;
    }
    void payment()
    {   int choose;
        cout<<"please choose your payment method :"<<endl;
        cout<<"1.cash payment"<<endl<<"2.online payment"<<endl;
        cin>>choose;
        if(choose==1)
        {
            cout<<"please contact to our agency in person within 3 days";
        }
        if(choose==2)
        {
            cout<<"choose the online options :"<<endl;
            cout<<"1.CARD"<<endl<<"2.NAGAD"<<endl<<"3.BKASH"<<endl<<"4.ROCKET"<<endl;
            int u;
            cin>>u;
           if(u==1 || u==2 || u==3)
           {
               cout<<"make payment in this number using payment option :01789654236546"<<endl;
               cout<<"drop your transaction id here :"<<endl;
               string transectionId;
               cin>>transectionId;

           }
           if(u==4)
           {
               cout<<"give your card number :"<<endl;
               string cnum;
               cin>>cnum;
           }
        }

    }

 void packageamount(Package &obj,int n)
   {
        float sum=0;
        if(person>1){
             sum+=obj.prices[n-1]*person-(obj.prices[n-1]*person*(.1));
             if(child){
               sum+=obj.prices[n-1]*child-(obj.prices[n-1]*child*(.3));
             }
         }
         else if(person==1){
          sum+=obj.prices[n-1];
           if(child){
               sum+=obj.prices[n-1]*child-(obj.prices[n-1]*child*(.3));
             }
         }
         cout<<"Your Total cost for this trip will be: ";
         cout<<sum<<"TK only"<<endl;
         string s;
         Client obj4;
         cout<<"Do you want to continue?"<<endl;
         cout<<"Type Yes/yes if you are interested to continue to book,otherwise type NO/no"<<endl;
         cin>>s;
         if(s=="Yes" || s=="yes")
         {
              char surity;
              cout<<"Give your information"<<endl;
              string name;
              int id;
              long long int phone;

              do{
              cout<<"your id :"<<endl;
              cin>>id;
              cout<<"your phone number : "<<endl;
              cin>>phone;
              getchar();
              cout<<"your name :"<<endl;
              getline(cin,name);
              Client obj2(name,id,phone);
              cout<<"Check your information"<<endl;
              obj2.print();
              obj4=obj2;
              cout<<"Type 'y' if it is ok otherwise type 'n' "<<endl;
              cin>>surity;
         }while(surity=='n');

         cout<<"Press for booking"<<endl;
         reservation obj3;
         obj4.print();
         payment();
         cout<<"Your booking is successful"<<endl;
         cout<<"\t\t\t\t\t"<<"HAPPY TRAVELLING"<<endl;
    }
    else{
     cout<<"Thanks for the inquiry,Keep supporting us."<<" "<<"THANK U"<<endl;
    }
   }
};


int main()

{
    Package item;
    item.addpackages();
    item.showpackage();
    cout<<"choose your package: ";
    int n,person,child;
    cin>>n;
    cout<<"give the number of persons :"<<endl;
    cout<<"give the number of children :"<<endl;
    cout<<"\n";
    switch(n)
    {
        case 1:{
        cin>>person>>child;
        Agency obj1(person,child);
        obj1.packageamount(item,n);
        break;
        }
        case 2:
             {
        cin>>person>>child;
        Agency obj1(person,child);
        obj1.packageamount(item,n);
        break;
             }
        case 3:{
        cin>>person>>child;
        Agency obj1(person,child);
        obj1.packageamount(item,n);
        break;
        }
        case 4:{
        cin>>person>>child;
        Agency obj1(person,child);
        obj1.packageamount(item,n);
        break;
        }
        case 5:{
        cin>>person>>child;
        Agency obj1(person,child);
        obj1.packageamount(item,n);
        break;
        }
        case 6:{
        cin>>person>>child;
        Agency obj1(person,child);
        obj1.packageamount(item,n);
        break;
        }
        case7:{
        cin>>person>>child;
        Agency obj1(person,child);
        obj1.packageamount(item,n);
        break;
        }
        case 8:{
        cin>>person>>child;
        Agency obj1(person,child);
        obj1.packageamount(item,n);
        break;
        }
        default:
        cout<<"unavailable package"<<endl;
    }
    return 0;

}
