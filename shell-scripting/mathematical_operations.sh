# Shell Script to print sum of assigned values to variables 
# Errors - arithmetic syntax error 

#!/bin/bash
# Assign values
num1=25
num2=15
# Add numbers
sum=$((num1 + num2))
# Print result
echo "Sum is: $sum"

# example - 2 
# Mathematical operations by taking user input
#!/bin/bash
# Addition 
echo "Enter first number"
read num1
echo "Enter second number"
read num2
add=$((num1+num2))
echo "The sum is" $add

# Subtraction 
sub=$((num1-num2))
echo "The difference is " $sub

# Multiplication 
pro=$((num1*num2))
echo "The product is" $pro

# Division 
case - 1 
div=$((num1/num2))
echo "The division is " $div
# returns remainder 
# case - 2
frac=$((num1%num2))
echo $frac
# returns quotient 

# Power / Exponent 
pow=$((num1**num2))
echo $pow 

