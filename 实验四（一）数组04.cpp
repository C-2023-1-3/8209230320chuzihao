#include<iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)
		list3[i] = list1[i];
	for (int i = 0; i < size2; i++)
		list3[size1+i] = list2[i];

	int t;

	for (int i = 0; i < size1+size2; i++)
		for (int i = 0; i < size1+size2-1; i++)
			if (list3[i] > list3[i + 1]) {
				t = list3[i];
				list3[i] = list3[i + 1];
					list3[i + 1] = t;
			}
}

int main() {
	int size1,size2;

	cout << "�������һ�������Ԫ�ظ�����";
	cin >> size1;
	int* list1 = new int[size1];
	cout << "�������һ�����������Ԫ�أ�";
	for (int i = 0; i < size1; i++)
		cin >> list1[i];

	cout << "������ڶ��������Ԫ�ظ�����";
	cin >> size2;
	int* list2 = new int[size2];
	cout << "������ڶ������������Ԫ�أ�";
	for (int i = 0; i < size2; i++)
		cin >> list2[i];

	int* list3 = new int[size1+size2];

	merge(list1, size1, list2, size2, list3);
	cout << "����������ں�����Ϊ��";
	for (int i = 0; i < size1+size2; i++)
		cout << list3[i]<<" ";
}