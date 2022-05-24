#include<iostream>
#include<iomanip>
#include<array>
#include<string>
using namespace std;

void mainMenu()
{
	cout<<"\t\t----------------------------------------------"<<endl;
	cout<<"\t\t|               MAIN MENU                    |"<<endl;
	cout<<"\t\t----------------------------------------------"<<endl;
	cout<<endl;
}
void listOfItems()
{
	cout<<"1-kabab  -/70"<<endl;
	cout<<"2-tikka  -/60"<<endl;
	cout<<"3-chapati  -/10"<<endl;
	cout<<"4-naan  -/25"<<endl;
	cout<<"5-tea  -/35"<<endl;
	cout<<"6-karahi  -/1000"<<endl;
	cout<<"7-qourma  -/900"<<endl;
	cout<<"8-fish  -/800"<<endl;
	cout<<"9-finger fish  -/70"<<endl;
	cout<<"10-mutton  -/70"<<endl;
}
bool bill()
{
		cout<<"\t\t---------------------------------------------------------------------------"<<endl;
		cout<<"                                \t\t  BILL                                 "<<endl;
		cout<<"\t\t----------------------------------------------------------------------------"<<endl;
		cout<<" \t \t  |Name|                         |Price|                           |Total|"<<endl;
		cout<<"\t\t----------------------------------------------------------------------------"<<endl;
		
}
int main()
{
	mainMenu();
	listOfItems();
	int ITEMS = 10;
    array<string, 10> meals = {"kabab", "tikka", "chapati","nan", "tea" , "karahi","qourma","fish","finger fish","mutton"};
	array<int,10> prices = {70,60,10,25,35,1000,900,800, 70, 70};
	array<int,20> orders = {0};
	int orderNum;
	int n;
	int totalCost = 0;

	
	cout<<endl<<endl<<"How many meal you would like to order? "<< endl;
	cin>>n;
	
	for(int i = 0; i < n; i++)
	{
		cout<<"Enter item "<<i+1<<" : ";
		cin>>orderNum;
		totalCost += prices[orderNum-1];
		orders[orderNum -1] = 1;
	}
	bill();
	
	cout<<"  \t\t\t\t  "<<"           \t\t\t      "<<""<<endl;
	for(int i = 0; i < ITEMS; i++)
	{
		if(orders[i] == 1)
			cout<<setw(22)<<meals[i]<<" \t\t\t\t "<<setw(3)<<prices[i]<<"  \t\t\t\t "<<totalCost<<endl;
	}
	
	return 0;
}
