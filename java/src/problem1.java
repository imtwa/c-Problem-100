/*
 *  题目
 *  有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
 * */

public class problem1 {
    public static int z = 0;

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4};
        dfs(arr, arr.length, 0);
        System.out.println("共有" + z + "个");
    }

    /**
     * 深度优先搜索算法，用于在数组中查找并交换元素
     *
     * @param arr 要搜索的数组
     * @param size 数组的长度
     * @param n 当前要处理的索引位置
     */
    public static void dfs(int[] arr, int size, int n) {
        if (n == size) {
            System.out.println(arr[0] + " " + arr[1] + " " + arr[2]);
            z++;
        } else {
            for (int i = n; i < size; i++) {
                //两值不相等或要执行的是它本身,则需要交换
                if (arr[i] != arr[n] || i == n) {
                    swap(arr, i, n);
                    dfs(arr, size, n + 1);
                    swap(arr, i, n);
                }
            }
        }
    }

    /**
     * 交换数组中指定位置的元素
     *
     * @param arr 要交换元素的数组
     * @param i   要交换的第一个元素的位置
     * @param j   要交换的第二个元素的位置
     */
    public static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}