#include <iostream>
#include<string>
#include<list>
using namespace std;

struct YouTubeChannel {
	string Name;
	int SubscribersCount;

	YouTubeChannel(string name, int subscribersCount) {
		Name = name;
		SubscribersCount = subscribersCount;
	}
	bool operator==(const YouTubeChannel& channel) const{
		return this->Name == channel.Name;
	}
};
ostream& operator<<(ostream& COUT, YouTubeChannel& ytChannel) {  // pass by reference
	COUT << "Name: " << ytChannel.Name << endl;
	COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
	return COUT;
} //globabl function

struct MyCollection {
	list<YouTubeChannel>myChannels;

	void operator+=(YouTubeChannel& channel) { // member function
		this->myChannels.push_back(channel);
	}

	void operator-=(YouTubeChannel& channel) { // member function
		this->myChannels.remove(channel);
	}
};

ostream& operator<<(ostream& COUT, MyCollection& myCollection) {
	for (YouTubeChannel ytChannel : myCollection.myChannels)
		COUT << ytChannel << endl;
	return COUT;
}

int main()
{
	cout << endl;
	cout << "Operator Overloading Cpp!" << endl;
	cout << endl;

	YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000);
	YouTubeChannel yt2 = YouTubeChannel("My second channel", 80000);

	cout << "List channels:" << endl;
	cout << yt1 << yt2;
	cout << endl;

	cout << "List channels:" << endl;
	operator<<(cout, yt1);
	operator<<(cout, yt2);
	cout << endl;

	cout << "Add to myCollection:" << endl;
	MyCollection myCollection;
	myCollection += yt1;
	myCollection += yt2;
	cout << myCollection;
	cout << "Remove from myCollection:" << endl;
	myCollection -= yt2;
	cout << myCollection;

	cin.get();

	system("pause>0");
	return 0;
}


/*


#include <iostream>
#include<string>
#include<list>
using namespace std;

struct YouTubeChannel {
	string Name;
	int SubscribersCount;

	YouTubeChannel(string name, int subscribersCount) {
		Name = name;
		SubscribersCount = subscribersCount;
	}
	bool operator==(const YouTubeChannel&channel) const{
		return this->Name == channel.Name;
	}
};
ostream& operator<<(ostream& COUT, YouTubeChannel& ytChannel) {
	COUT << "Name: " << ytChannel.Name << endl;
	COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
	return COUT;
}
struct MyCollection {
	list<YouTubeChannel>myChannels;

	void operator+=(YouTubeChannel& channel) {
		this->myChannels.push_back(channel);
	}
	void operator-=(YouTubeChannel& channel) {
		this->myChannels.remove(channel);
	}
};
ostream& operator<<(ostream& COUT, MyCollection& myCollection) {
	for (YouTubeChannel ytChannel : myCollection.myChannels)
		COUT << ytChannel << endl;
	return COUT;
}

int main()
{
	YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000);
	YouTubeChannel yt2 = YouTubeChannel("My second channel", 80000);

	MyCollection myCollection;
	myCollection += yt1;
	myCollection += yt2;
	myCollection -= yt2;

	cout << myCollection;

	cin.get();
}

*/


/*A structure type is a user-defined composite type. It is composed of fields or members that can have different types.

In C++, a structure is the same as a class except that its members are public by default.

For information on managed classes and structs in C++/CLI, see Classes and Structs.

*/


/*
#include <iostream>

using namespace std;

int main()
{
	cout << endl;
	cout << "CppArrayPointers!" << endl;
	cout << endl;

	system("pause>0");
	return 0;
}
*/

