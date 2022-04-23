#include <algorithm>
#include <iostream>
#include <vector>
#include <map>

using namespace std;


int main() {
	string vehicle_num;
	string vehicle_name;
	string status;
	map<int,string> slot;
	int parking_spaces;
	cout<<"Enter number of parking space: ";
	cin>>parking_spaces;
	int parking_num;
	cout<<endl<<"To stop enter exit";
	cout<<endl<<"Park or leave: ";
	while(cin>>status)
	{
	if(status=="park")
	{
	    int x=0;
		for(int i=1;i<=parking_spaces;i++)
		{
		if(slot.find(i)==slot.end())
		{
		cout<<endl<<"Enter vehicle name: ";
		cin>>vehicle_name;
		cout<<endl<<"Enter vehicle registration number: ";
		cin>>vehicle_num;
		slot[i]=vehicle_num;
		parking_num=i;
		cout<<endl<<"Car is parked successfully at slot "<<i;
		x++;
		break;
		}
		}
		if(x==0)
		{
		cout<<endl<<"Sorry, the parking is full";
		}
	}
	if(status=="leave")
	{
		cout<<endl<<"Enter slot number: ";
		cin>>parking_num;
		
		cout<<endl<<"Car with registration number "<<slot[parking_num]<<" has left successfully";
		slot.erase(parking_num);
	}
	if(status=="exit")
	{
		break;
	}
	}
		
	


	return 0;
}