#
# @lc app=leetcode.cn id=192 lang=bash
#
# [192] 统计词频

# tr 字符替换， -s连续
# sort 排序 -r 逆序
# uniq -c 显示重复出现的次数
# awk 默认空格和TAG分割行处理， -F指定分隔符
cat words.txt | tr -s ' ' '\n' | sort | uniq -c | sort -r |awk '{print $2" "$1}'
# @lc code=start
# Read from the file words.txt and output the word frequency list to stdout.

# @lc code=end

