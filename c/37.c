/*
对10个数进行排序
*/

#include <stdio.h>
/*
冒泡排序
比较相邻的元素。如果第一个比第二个大，就交换他们两个。
对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。
这步做完后，最后的元素会是最大的数。
针对所有的元素重复以上的步骤，除了最后一个。
持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。
*/
void bubble_sort(int arr[], int len) {
	int i, j, temp;
	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < len - 1 - i; j++) {
			// 将大的数放到后面
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

/*
选择排序
首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置。
再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。
重复第二步，直到所有元素均排序完毕。
*/
void selection_sort(int arr[], int len) {
	int i,j,temp;

	for (i = 0 ; i < len - 1 ; i++) {
		int min = i;
		//走访未排序的元素
		for (j = i + 1; j < len; j++) {
			//找到目前最小值
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}

/*
插入排序
将第一待排序序列第一个元素看做一个有序序列
把第二个元素到最后一个元素当成是未排序序列。
从头到尾依次扫描未排序序列
将扫描到的每个元素插入有序序列的适当位置。
如果待插入的元素与有序序列中的某个元素相等，则将待插入元素插入到相等元素的后面。
*/
void insertion_sort(int arr[], int len) {
	int i, j, key;
	for (i = 1; i < len; i++) {
		key = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = key;
	}
}
int main() {
	int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, len);
//	selection_sort(arr, len);
//	insertion_sort(arr, len);
	int i;
	for (i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
