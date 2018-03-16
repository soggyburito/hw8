#include <iostream>
#include "Date.h"
using namespace std;

/*benjamin stanley
r01209581
crn 23322
I certify that this submission is my own original work.*/

void addTen(int* ptr){
	for (int i = 0; i < 5; i++){
		*(ptr + i) += 10;
	}

}

void printArray(int* array,int size){
	for (int i = 0; i < size; i++){
		cout << array[i]<<" ";
	}
	cout << endl;
}

int* append(int* array,int* tempPtr, int size,int newnum){
	tempPtr = new int[size + 1];

	for (int i = 0; i < size; i++){
		tempPtr[i] = array[i];
	}
	tempPtr[size] = newnum;
	return tempPtr;
	
}

int main(){

	int room = 12,num=0,userNums=0,temp=0;
	int* roomPtr = nullptr, *ptrA = nullptr, *ptrB = nullptr, *arrayPtr = nullptr, *tempPtr = nullptr;
	int arrayA[5];
	int arrayB[5];
	Date deadLine(2015, 4, 18);
	Date* deadLinePtr = nullptr;

	roomPtr = &room;
	cout << "the value of room is: " << room << endl;
	cout << "the address of room is: " << &room << endl;
	cout << "the address roomptr points to is: " << roomPtr << endl;
	cout << "the address of roomPtr is: " << &roomPtr << endl;
	cout << "the value room pointer points to is: " << *roomPtr << endl;

	for (int i = 0; i <5; i++){
		arrayA[i] =2*i+1;
	}

	for (int i = 0; i < 5; i++){
		arrayB[i] = 2 * i;
	}

	ptrA = arrayA;
	ptrB = arrayB;

	for (int i = 0; i < 5; i++){
		cout << arrayA[i]<<" ";
	}cout << endl;

	for (int i = 0; i < 5; i++){
		cout << *(ptrB+i)<<" ";
	}cout << endl;


	for (int i = 0; i < 5; i++){
		*(ptrA + i) += 10;
	}

	for (int i = 0; i < 5; i++){
		cout << *(ptrA+i) << " ";
	}cout << endl;

	addTen(ptrB);

	for (int i = 0; i < 5; i++){
		cout << *(ptrB + i) << " ";
	}cout << endl;

	deadLine.print();
	deadLinePtr = &deadLine;

	cout << "the address of deadLine is: " << &deadLine << endl;
	cout << "the address of deadlinePtr is" << &deadLinePtr << endl;
	cout << "the value of deadLinePtr is: " << deadLinePtr << endl;
	deadLinePtr->setDate(deadLinePtr->getYear(), deadLinePtr->getMonth(), deadLinePtr->getDay() + 7);
	deadLinePtr->print();

	cout << "please enter an integer for your array size: ";
	cin >> num;
	cout << endl;

	arrayPtr = new int[num];
	cout << "please enter a number: ";
	cin >> userNums;

	arrayPtr[0] = userNums;
	for (int i = 1; i < num; i++){
		cout << "please enter a number: ";
		cin >> userNums;
		arrayPtr[i] = userNums;
	}

	printArray(arrayPtr, num);

	cout << "please enter a number you would like to add to the list: ";
	cin >> temp;
	
	arrayPtr = append(arrayPtr,tempPtr, num, temp);
	
	printArray(arrayPtr, num + 1);
	
	delete arrayPtr;
	delete tempPtr;


	system("pause");
	return 0;
}