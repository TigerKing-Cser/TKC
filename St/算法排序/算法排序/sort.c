#include"test.h"

void bubble_sort(int* arr, int sz) {
	int i = 0;
	int j = 0;
	for (j = 0; j < sz - 1; j++) {
		int flag = 0;
		for (i = 0; i < sz - 1 - j; i++) {
			if (arr[i] > arr[i + 1]) {
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0) {
			return;
		}
	}
}
void insert_sort(int* arr, int sz) {
		int current, preIndex;
		for (int i = 1; i < sz; i++) {
			current = arr[i];
			preIndex = i - 1;
			while (preIndex >= 0 && arr[preIndex] > current) {
				arr[preIndex + 1] = arr[preIndex];
				preIndex--;
			}
			arr[preIndex + 1] = current;
		}
}

void select_sort(int* arr, int sz) {
	int i = 0;
	int j = 0;
	int preindex;
	for (i = 0; i < sz; i++) {
		preindex = i;
		int tmp;
		for (j = i + 1; j < sz; j++) {
			if (arr[preindex] > arr[j]) {
				preindex = j;
			}
			tmp = arr[preindex];
			arr[preindex] = arr[i];
			arr[i] = tmp;
		}
	}
}

void quick_sort(int* arr,int left, int right) {

	int i, j, t, temp;
	if (left > right)
		return;
	temp = arr[left];
	i = left;
	j = right;
	while (i < j) { 
		while (arr[j] >= temp && i < j)
			j--;
		while (arr[i] <= temp && i < j)
			i++;
		if (i < j)
		{
			t = arr[i];
			arr[i] = arr[j];
			arr[j] = t;
		}
	}
	arr[left] = arr[i];
	arr[i] = temp;
	quick_sort(arr,left, i - 1);
	quick_sort(arr,i + 1, right);
}

void shell_sort(int* arr, int sz) {
	int i, j, gap;
	for (gap = sz / 2; gap > 0; gap = gap / 2) {
		for (i = gap; i < sz; i++) {
			for (j = i; j >= gap; j = j - gap) {
				if (arr[j - gap] > arr[j]) {
					int tmp = arr[j - gap];
					arr[j - gap] = arr[j];
					arr[j] = tmp;
				}
			}
		}
	}
}

void Swap(int* d1, int* d2)
{
	assert(d1 && d2);
	int tmp = 0;
	tmp = *d1;
	*d1 = *d2;
	*d2 = tmp;
}
void HeapSort(HPDataType* d, int n)//堆排序
{
	assert(d);
	int i = 0;
	Heap hp;

	//通过堆的属性来寻找最大（小）值，升序：大堆， 降序：小堆
	//创建大堆
	hp.a = (HPDataType*)malloc(sizeof(HPDataType) * n);//堆元素开辟空间
	assert(hp.a);//防止开辟失败
	hp.capacity = n;
	hp.num = n - 1;//元素下标0 - (n-1)
	for (i = 0; i < n; i++)
	{
		hp.a[i] = d[i];
	}
	//向下调整为大堆
	for (i = ((n - 2) / 2); i >= 0; --i)
	{
		AdjustDown(hp.a, hp.num + 1, i);
	}
	//排序
	int end = hp.num;
	while (end >= 0)
	{
		//交换root和最后一个节点的数据
		Swap(&(hp.a[0]), &(hp.a[end]));
		--end;//下标前进1
		n--;//数据减一
		AdjustDown(hp.a, n, 0);
	}

	printf("排序后：");
	for (i = 0; i <= hp.num; i++)
	{
		printf("%d", hp.a[i]);
	}
	printf("\n\n");
}

void AdjustDown(HPDataType* a, int n, int root)//堆内渗透函数
{

	int parent = root;
	int child = parent * 2 + 1;
	while (child < n)
	{
		//选左右中大的一个
		if (a[child + 1] > a[child] && child + 1 < n)
		{
			child += 1;
		}
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);//在函数外部进行交换要传址
			parent = child;
			child = child * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

int main() {
	
	int arr[100] = {0};
	int sz = sizeof(arr) / sizeof(0);
	
	for (int i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
}