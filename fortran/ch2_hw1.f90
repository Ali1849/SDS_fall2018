Program hw1
  implicit none
  integer :: num1, num2
  print *, "Enter two integers: "
  read *, num1, num2
  if ( mod(num2,num1)==0 ) then
     print *,num1," is a divisor of ",num2
  else
     print *,num1," is not a divisor of ",num2
  end if
End Program hw1