/*
��10������������
*/

#include <stdio.h>
/*
ð������
�Ƚ����ڵ�Ԫ�ء������һ���ȵڶ����󣬾ͽ�������������
��ÿһ������Ԫ����ͬ���Ĺ������ӿ�ʼ��һ�Ե���β�����һ�ԡ�
�ⲽ���������Ԫ�ػ�����������
������е�Ԫ���ظ����ϵĲ��裬�������һ����
����ÿ�ζ�Խ��Խ�ٵ�Ԫ���ظ�����Ĳ��裬ֱ��û���κ�һ��������Ҫ�Ƚϡ�
*/
void bubble_sort(int arr[], int len) {
	int i, j, temp;
	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < len - 1 - i; j++) {
			// ��������ŵ�����
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

/*
ѡ������
������δ�����������ҵ���С����Ԫ�أ���ŵ��������е���ʼλ�á�
�ٴ�ʣ��δ����Ԫ���м���Ѱ����С����Ԫ�أ�Ȼ��ŵ����������е�ĩβ��
�ظ��ڶ�����ֱ������Ԫ�ؾ�������ϡ�
*/
void selection_sort(int arr[], int len) {
	int i,j,temp;

	for (i = 0 ; i < len - 1 ; i++) {
		int min = i;
		//�߷�δ�����Ԫ��
		for (j = i + 1; j < len; j++) {
			//�ҵ�Ŀǰ��Сֵ
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
��������
����һ���������е�һ��Ԫ�ؿ���һ����������
�ѵڶ���Ԫ�ص����һ��Ԫ�ص�����δ�������С�
��ͷ��β����ɨ��δ��������
��ɨ�赽��ÿ��Ԫ�ز����������е��ʵ�λ�á�
����������Ԫ�������������е�ĳ��Ԫ����ȣ��򽫴�����Ԫ�ز��뵽���Ԫ�صĺ��档
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
