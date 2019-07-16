#!/bin/bash
#********************************************************    *****
#
# Filename: test.sh
#
# Author: liule
# Email:-->
# Create: 2019-07-11 17:57:38
# Description:......
#********************************************************    *****
a="hello"
b="world"
c='!'
:<<!
echo -e "hello \"$b\"$c"
echo -e "hello ${b}$c"
echo ${a:1:2}
echo "第一个参数：$1"
echo "总参数：$#"
echo "字符串:$*"
echo "\"it is a test\""
!
:<<!
read name
echo "$name"
echo -e "${name}le \n" >myhello
echo `date`
!
read a b
echo "1:$a 2:$b"











