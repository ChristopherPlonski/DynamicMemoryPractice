#include <iostream>
#include <string>
#include "HelloClass.hpp"
#include "HelloStruct.hpp"

using namespace std;

struct IntNode {
	int data;
	IntNode *nextNode;
};

void problem1() {
	int* integer = new int(0);
	char* character = new char('b');
	string* _string = new string("hello");
}

void problem2() {
	int* int_array = new int[3];
	int_array[0] = 0;
	int_array[1] = 1;
	int_array[2] = 2;
	//int* int_array = new int[3] {0, 1, 2};
	string* string_array = new string[3] { "aaa", "bbb", "ccc" };
}

void problem3() {
	float** float2DArray = new float*[2];

	float2DArray[0] = new float[2] {5, 10};
	float2DArray[1] = new float[2] {3, 7};

	cout << float2DArray[0][0] << endl << float2DArray[0][1] << endl;
}

void problem4() {
	char* input_c;
	string* input_s;


	getline(cin, *input_s);
	cin >> input_c;
}

void problem5() {
	HelloClass* helloClass = new HelloClass();

}

void problem6() {
	HelloClass* helloClass = new HelloClass[3];
	
}

void problem7() {
	HelloStruct* hellostruct = new HelloStruct();

	while (true) {
		string input;
		cin >> input;
		if (input == "exit") {
			break;
		}
		else {
			hellostruct->add_member(input);
		}
	}
}

void problem8() {
	IntNode* newNode = new IntNode();
}

int main() {
	problem1();
	problem2();
	problem3();
	problem4();
	problem5();
	problem6();

	return 0;
}