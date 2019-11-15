
#!/bin/bash
read -p "enter the limit" n
echo "limit is $n"
s=0
for((i=1;i<=$n;i++))
do
s=$(($s + $i))
done
echo "sum=$s"


