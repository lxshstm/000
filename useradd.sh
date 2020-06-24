#!/bin/bash
read -p  "Please input the number of classes " -t 30 clnum
read -p  "Please input the number of students " -t 30 stunum
read -p "Please input the password of users  " -t 30 pass
for ((i=1 ; i<=$clnum ; i=i+1))
	do
	for((j=1;j<=$stunum;j=j+1))
		do
		/usr/sbin/useradd class$i stu$j &> /dev/null
		echo $pass | /usr/bin/passwd --stdin class$i stu$j &>/dev/null
		done
	done
