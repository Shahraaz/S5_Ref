read -p "choose your car 1-mercedes 2-audi 3-bmw" CARS
#read -p "enter the car name" CARS

#Pass the variable in string 
case "$CARS" in 
	#case 1 
	"1") echo "mercedes" "Headquarters - Affalterbach, Germany" ;; 
	
	#case 2 
	"2") echo "AUDI" "Headquarters - Ingolstadt, Germany" ;; 
	
	#case 3 
	"3") echo  "BMW" "Headquarters - Chennai, Tamil Nadu, India" ;; 
esac 
