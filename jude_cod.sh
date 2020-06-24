#!/bin/bash
verdict=' 写错了哦 '
score=' 0 '
comment=' 加油，奥利给！ '
file1=aa
file2=bb
diff $file1 $file2 > /dev/null
if [ $? == 0 ]; then
    verdict=' 对啦！你真棒！ '
    score='100'
    comment=' 太强了！ '
fi

echo " {verdict:$verdict,score:$score,comment:$comment} "
