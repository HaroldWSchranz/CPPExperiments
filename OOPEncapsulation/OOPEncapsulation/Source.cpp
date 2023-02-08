#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:
	string Name;            // could implement getter and setters
	string OwnerName;       // could implement getter and setters
	int SubscribersCount;
	list<string> PublishedVideoTitles;
public:
	// Constructor of YouTubeChannel class with parameters
	YouTubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
	}
	// public methods
	void GetInfo() {
		cout << "Name: " << Name << endl;
		cout << "OwnerName: " << OwnerName << endl;
		cout << "Subscribers: " << SubscribersCount << endl;
		cout << "Videos:" << endl;
		for (string videoTitle : PublishedVideoTitles) {
			cout << videoTitle << endl;
		}
	}
	void Subscribe() {
		SubscribersCount++;
	}
	void Unsubscribe() {
		if(SubscribersCount>0)
			SubscribersCount--;
	}
	void PublishVideo(string title) {
		PublishedVideoTitles.push_back(title);
	}
};

int main()
{
	cout << "OOP Class!" << endl;

	YouTubeChannel ytChannel("CodeBeauty", "Saldina Nurak");
	ytChannel.PublishVideo("C++ for beginners");
	ytChannel.PublishVideo("HTML & CSS for beginners");
	ytChannel.PublishVideo("C++ OOP");

	ytChannel.Unsubscribe();
	for (int i = 1; i <=215000; i++) {
		ytChannel.Subscribe();
	}
	ytChannel.Unsubscribe();
	ytChannel.Subscribe();

	ytChannel.GetInfo();


	cout << endl;
	system("pause>0");
	system("cls");

}