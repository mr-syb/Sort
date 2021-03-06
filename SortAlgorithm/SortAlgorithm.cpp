// SortAlgorithm.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include "DataList.h"
#include "BubbleSort.cpp"
#include "InsertSort.cpp"

int main()
{
	DataList<int> MyDataList1(10000);
	DataList<int> MyDataList2(10000);
	DataList<int> MyDataList3(10000);
	DataList<int> MyDataList4(10000);
	MyDataList1.randInitByInt();

	MyDataList2 = MyDataList1;
	MyDataList3 = MyDataList1;
	MyDataList4 = MyDataList1;

	/*char arry[] = { 'a','b','d','f','e','c','z','g','h' };
	DataList<char> MyDataList(arry,9);*/

	Sort<int>* MySort = new Sort<int>;
	MySort->BubbleSort1(MyDataList1, 10000);

	MySort->BubbleSort2(MyDataList2, 10000);

	MySort->InsertSort(MyDataList3, 0, 10000);

	MySort->BinaryInsertSort(MyDataList4, 0, 10000);
}