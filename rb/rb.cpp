#include"Header1.h"
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	vector<int> nums{ 22,1488,49,57,13,244,14,1666,1000,-7 };
	RBTree<int> tree;
	for (auto num : nums)
		tree.insert(num);
	cout << "Вывод функции insert: \n";
	tree.print();

	cout << "\nНайти узел с ключом 1000: ";
	cout << endl << tree.search(1000)->key << endl;
	cout << "\nУдалить узел с ключом -7 \n";
	tree.remove(-7);
	tree.print();
	cin.get();
	return 0;
}