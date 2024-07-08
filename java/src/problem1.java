/*
 *  ��Ŀ
 *  ��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
 * */

public class problem1 {
    public static int z = 0;

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4};
        dfs(arr, arr.length, 0);
        System.out.println("����" + z + "��");
    }

    /**
     * ������������㷨�������������в��Ҳ�����Ԫ��
     *
     * @param arr Ҫ����������
     * @param size ����ĳ���
     * @param n ��ǰҪ���������λ��
     */
    public static void dfs(int[] arr, int size, int n) {
        if (n == size) {
            System.out.println(arr[0] + " " + arr[1] + " " + arr[2]);
            z++;
        } else {
            for (int i = n; i < size; i++) {
                //��ֵ����Ȼ�Ҫִ�е���������,����Ҫ����
                if (arr[i] != arr[n] || i == n) {
                    swap(arr, i, n);
                    dfs(arr, size, n + 1);
                    swap(arr, i, n);
                }
            }
        }
    }

    /**
     * ����������ָ��λ�õ�Ԫ��
     *
     * @param arr Ҫ����Ԫ�ص�����
     * @param i   Ҫ�����ĵ�һ��Ԫ�ص�λ��
     * @param j   Ҫ�����ĵڶ���Ԫ�ص�λ��
     */
    public static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}