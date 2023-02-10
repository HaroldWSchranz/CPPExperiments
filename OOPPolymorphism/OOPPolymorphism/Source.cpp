#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:
	string Name;            // could implement getter and setters

	int SubscribersCount;
	list<string> PublishedVideoTitles;
protected:
	string OwnerName;       // could implement getter and setters
	int ContentQuality;
public:
	// Constructor of YouTubeChannel class with parameters
	YouTubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
		ContentQuality = 0;
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
		if (SubscribersCount > 0)
			SubscribersCount--;
	}
	void PublishVideo(string title) {
		PublishedVideoTitles.push_back(title);
	}
	void CheckAnalytics() {
		if( ContentQuality < 5)
			cout << Name << " has bad quality content." << endl;
		else
			cout << Name << " has great quality content." << endl;
	}
};

// derived class from base class
class CookingYouTubeChannel : public YouTubeChannel {
public:
	CookingYouTubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName) {

	}
	void Practice() {   // OwnerName is passed to differentiate Practice; and OwnerName is accessible in protected:
		cout << OwnerName << " is practising cooking, learning new recipes, experimenting with spices, ..." << endl;
		ContentQuality++;
	}
};

// another derived class from base class
class SingersYouTubeChannel : public YouTubeChannel {
public:
	SingersYouTubeChannel(string name, string ownerName) : YouTubeChannel(name, ownerName) {

	}
	void Practice() {   // OwnerName is passed to differentiate Practice; and OwnerName is accessible in protected:
		cout << OwnerName << " is taking singing classes, learning new songs, learning how to dance, ..." << endl;
		ContentQuality++;
	}
};

int main()
{
	cout << "OOP Polymorphism!" << endl;
	// Use polymorphism to implement practice for CookingYouTubeChannel and SingersYouTubeChannel:
	// different implementations of the same method
	CookingYouTubeChannel cookingytChannel("Amy's Kitchen", "Amy");
	CookingYouTubeChannel cookingytChannel2("John's Kitchen", "John");
	SingersYouTubeChannel singersytChannel("John Sings", "John");
	cookingytChannel.PublishVideo("Apple pie");
	cookingytChannel.PublishVideo("Chocolate cake");
	for (int i = 1; i <= 100; i++) {
		cookingytChannel.Subscribe();
	}
	cookingytChannel.GetInfo();
	cookingytChannel.Practice();
	cookingytChannel2.Practice();
	//cookingytChannel2.

	cout << endl;
	singersytChannel.GetInfo();
	singersytChannel.Practice();
	singersytChannel.Practice();
	singersytChannel.Practice();
	singersytChannel.Practice();
	singersytChannel.Practice();

	YouTubeChannel* yt1 = &cookingytChannel;
	YouTubeChannel* yt2 = &singersytChannel;

	yt1->CheckAnalytics();

	yt2->CheckAnalytics();

	cout << endl;

	YouTubeChannel ytChannel("CodeBeauty", "Saldina Nurak");
	ytChannel.PublishVideo("C++ for beginners");
	ytChannel.PublishVideo("HTML & CSS for beginners");
	ytChannel.PublishVideo("C++ OOP");
	//ytChannel. 

	ytChannel.Unsubscribe();
	for (int i = 1; i <= 215000; i++) {
		ytChannel.Subscribe();
	}
	ytChannel.Unsubscribe();
	ytChannel.Subscribe();

	ytChannel.GetInfo();

	cout << endl;
	system("pause>0");

}


/*
	cout << "OOP Inheritance!" << endl;

	YouTubeChannel ytChannel("CodeBeauty", "Saldina Nurak");
	ytChannel.PublishVideo("C++ for beginners");
	ytChannel.PublishVideo("HTML & CSS for beginners");
	ytChannel.PublishVideo("C++ OOP");

	ytChannel.Unsubscribe();
	for (int i = 1; i <= 215000; i++) {
		ytChannel.Subscribe();
	}
	ytChannel.Unsubscribe();
	ytChannel.Subscribe();

	ytChannel.GetInfo();


	cout << endl;
	system("pause>0");
	system("cls");
*/