#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
public:
	string Name;
	string OwnerName;
	int SubscriberCount;
	list<string> PublishedVideoTitles;

	// Constructor of YouTubeChannel class with parameters
	YouTubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscriberCount = 0;
	}

	void GetInfo() {
		cout << "Name: " << Name << endl;
		cout << "OwnerName: " << OwnerName << endl;
		cout << "Subscribers: " << SubscriberCount << endl;
		cout << "Videos:" << endl;
		for (string videoTitle : PublishedVideoTitles) {
			cout << videoTitle << endl;
		}
	}
};

int main()
{
	cout << "OOP Class!" << endl;

	YouTubeChannel ytChannel("CodeBeauty", "Saldina Nurak");
	ytChannel.PublishedVideoTitles.push_back("C++ for beginners Video 1");
	ytChannel.PublishedVideoTitles.push_back("HTML & CSS Video 1");
	ytChannel.PublishedVideoTitles.push_back("C++ OOP Video 1");
	//YouTubeChannel ytChannel;
	//ytChannel.Name = "CodeBeauty";
	//ytChannel.OwnerName = "Saldina Nurak";
	//ytChannel.SubscriberCount = 215000;
	//ytChannel.PublishedVideoTitles = { "C++ for beginners Video 1", "HTML & CSS Video 1", "C++ OOP Video 1" };

	ytChannel.GetInfo();
	//cout << "Name: " << ytChannel.Name << endl;
	//cout << "OwnerName: " << ytChannel.OwnerName << endl;
	//cout << "Subscribers: " << ytChannel.SubscriberCount << endl;
	//cout << "Videos:" << endl;
	//for (string videoTitle : ytChannel.PublishedVideoTitles) {
	//	cout << videoTitle << endl;
	//}

	cout << endl;
	cout << endl;

	YouTubeChannel ytChannel2("AmySings", "Amy");
	ytChannel2.PublishedVideoTitles.push_back("Johnny B Cover");
	ytChannel2.PublishedVideoTitles.push_back("Lorelei Cover");
	//YouTubeChannel ytChannel2;
	//ytChannel2.Name = "AmySings";
	//ytChannel2.OwnerName = "Amy";
	//ytChannel2.SubscriberCount = 2000;
	//ytChannel2.PublishedVideoTitles = { "Johnny B Cover", "Lorelei Cover"};

	ytChannel2.GetInfo();
	//cout << "Name: " << ytChannel2.Name << endl;
	//cout << "OwnerName: " << ytChannel2.OwnerName << endl;
	//cout << "Subscribers: " << ytChannel2.SubscriberCount << endl;
	//cout << "Videos:" << endl;
	//for (string videoTitle : ytChannel2.PublishedVideoTitles) {
	//	cout << videoTitle << endl;
	//}

	cout << endl;
	system("pause>0");
	system("cls");

}