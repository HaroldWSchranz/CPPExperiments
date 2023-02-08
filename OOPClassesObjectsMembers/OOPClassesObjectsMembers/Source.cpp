#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
public:
	string Name;
	string OwnerName;
	int SubscriberCount;
	list<string> PublishedVideoTitles;
};
int main()
{
	cout << "OOP Class!" << endl;
	
	YouTubeChannel ytChannel;
	ytChannel.Name = "CodeBeauty";
	ytChannel.OwnerName = "Saldina Nurak";
	ytChannel.SubscriberCount = 215000;
	ytChannel.PublishedVideoTitles = { "C++ for beginners Video 1", "HTML & CSS Video 1", "C++ OOP Video 1" };

	cout << "Name: " << ytChannel.Name << endl;
	cout << "OwnerName: " << ytChannel.OwnerName << endl;
	cout << "Name: " << ytChannel.SubscriberCount << endl;
	cout << "Videos:" << endl;
	for (string videoTitle : ytChannel.PublishedVideoTitles) {
		cout << videoTitle << endl;
	}

	cout << endl;
	system("pause>0");
	system("cls");

}