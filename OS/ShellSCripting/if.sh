read -p "enter first variables" n1 
read -p "enter second variables" n2
 
 

#Check whether they are equal 
if [ $n1 == $n2 ] 
then 
	echo "$n1 is equal to $n2" 

#Check whether they are not equal 
else
 
	echo "$n1 is not equal to $n2"
fi 
