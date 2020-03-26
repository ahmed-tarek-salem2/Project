 #include <iostream>
using namespace std;
struct account_query 
{ int account_number;
  char firstname [10];
  char lastname [10];
  float total_balance; };
struct link
{ account_query data;
link *next;};

class Record
{ private: 
 link *first;
public:
	Record()
	{first=NULL;}
void addlink()
{
	link *newlink= new link;
    cout<<" Enter your Account Id"<<endl;  cout<<" ";    cin>>newlink->data.account_number ; 
    cout<<" Enter your first name"<<endl;  cout<<" ";    cin>>newlink->data.firstname; 
    cout<<" Enter your last name"<<endl;  cout<<" ";    cin>>newlink->data.lastname; 
    cout<<" Enter your Total balance"<<endl;  cout<<" ";    cin>>newlink->data.total_balance; 

    newlink->next=first;
	first=newlink; }

void readlink()
{   int d;
	cout<<"Enter The Acoount Id You want to see"<<"\n";  cin>>d;
	link *search=first;
	if(search==NULL)
	{ cout<<"Not found,its empty";
	return; }
	while(search->next!=NULL && search->data.account_number!=d)
		search=search->next;
	if (search->data.account_number==d)
	{cout<<"The first name is "<<search->data.firstname<<"\n";
	    cout<<"The last name is "<<search->data.lastname<<"\n"; 
        cout<<"The Total Balance is "<<search->data.total_balance<<"\n";}
	 else if (search->data.account_number!=d)
		cout<<"The account isnt exist";
}
 
void searchlink()
{   int d;
    int a=5;
	cout<<" Enter account id"<<"\n";   cin>>d;
    link *se=first;
	if(se==NULL)
	{ cout<<" Not Found, its empty \n";
	return; }
	if(se->data.account_number==d)
	{ cout<<"The account is already exist"<<endl;
	return;}
	if(se==NULL)
		cout<<"Not found";
	while(se->next!=NULL && se->data.account_number!=d)   //while(se!=NULL) ÛáØ ÚÔÇä äåÇíÊå åíÏí ÞíãÉ áá se È  NULL
	se=se->next;
	{if(se->data.account_number==d)
		cout<<"the account is already exis"<<endl;
	else if (se->data.account_number!=d)
		cout<<"Not found"<<endl; }
   

}

void update()
{ int d;
cout<<"Enter the account id"<<endl;            cin>>d;
link* up=first;
while(up->data.account_number!=d)
up=up->next;
if (up->data.account_number==d)
{cout<<"Enter the new balance"<<endl;  cin>>up->data.total_balance;}  }


void delet()
{int d;         cout<<"Enter the account id you want to delete"<<endl;    cin>>d;
link *del=first;
if(del->data.account_number == d)
{first=del->next;
cout<<"Deleted";
return;}
while (del->next!=NULL)
{if(del->next->data.account_number==d)
{del->next=del->next->next;
cout<<"Deleted";
return;}
del=del->next;}
cout<<"Not deleted"<<endl;}  

};


int main()

{ 
		Record s1;
	cout<<" ***Account information system*** "<<endl;
    int choice;
	while(true)           //ÚÔÇä ÈÚÏ ßá ÇÎÊíÇÑ ÊÙåÑ ÇáÞÇíãÉ ÊÇäí
	{
	cout<<	"\n -------------------"<<endl;
  cout<<" select one option below: \n";
  cout<<"\t 1-Add record system\n";
  cout<<"\t 2-Show record from the system\n";
  cout<<"\t 3-Search record from the system\n";
  cout<<"\t 4-Update record from the system\n";
  cout<<"\t 5-Delete record from the system\n";
  cout<<"\t 6-Quit the system\n";
  cout<<"\n"<<"\n"<<" Enter you choice \n";
  cin>>choice;
  switch(choice)
  {case 1: s1.addlink();           break;
  case 2:  s1.readlink();          break;
  case 3:   s1.searchlink();       break;
  case 4:   s1.update();           break;
  case 5:   s1.delet();            break;
  case 6:    exit(0);              break;
  default :  cout<<" Enter correct choice \n";} }

 system ("pause");
 return 0;}