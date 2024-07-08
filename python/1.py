# 题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

import itertools  # 导入itertools模块，用于生成排列

s = [1, 2, 3, 4]  # 初始化一个空列表
# 生成列表s的所有长度为n的排列，并将结果转换为列表
num = list(itertools.permutations(s, 4))
z = len(num)
# 遍历每个排列并打印
for ch in num:
    # 遍历排列中的每个数字并打印
    for i in range(3):
        print(ch[i], end=' ')  # 打印数字，并在数字之间添加空格（end参数指定了打印结束后的行为）
    print()  # 打印一个换行符，开始新的一行

print(f"共有 {z} 个排列")
