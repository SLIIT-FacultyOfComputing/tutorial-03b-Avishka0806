#include <iostream>
using namespace std;
int volume(int height, int width, int length);

struct box{
	
	int height;
	int width;
	int length;
} box1, box2;


int main() {

	int box1Height, box1Width, box1Length;
	int box2Height, box2Width, box2Length;
	int totalVolume;

	cout << "Enter Box 1 Height : ";
	cin >> box1Height;
	cout << "Enter Box 1 Width : ";
	cin >> box1Width;
	cout << "Enter Box 1 Length : ";
	cin >> box1Length;
	
	cout << "Enter Box 2 Height : ";
	cin >> box2Height;
	cout << "Enter Box 2 Width : ";
	cin >> box2Width;
	cout << "Enter Box 2 Length : ";
	cin >> box2Length;
	
	
	box1.height = box1Height;
	box1.width = box1Width;
	box1.length = box1Length;
	
	box2.height = box2Height;
	box2.width = box2Width;
	box2.length = box2Length;

	totalVolume = volume( box1.height, box1.width, box1.length)
	+ volume( box2.height, box2.width, box2.length);
	
	cout << "Volume of Box is " << totalVolume << endl;
	
	return 0;
	
}


int volume( int box1Height, int box1Width, int box1Length)
{
	return box1Height * box1Width * box1Length;
}