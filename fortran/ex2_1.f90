Program ex2_1
  
  implicit none
  integer :: num

  print *, 'Enter a number:'
  read *, num

  if (mod(num,3)==0) then
     if (mod(num,5)==0) then
        print *, "FizzBuzz"
     else 
        print *, "Fizz"
     end if
  else
     print *, "Buzz"
  end if
  if (num == 3*(num/3)) then
     if (num == 5*(num/5)) then
        print *, "FizzBuzz"
     else 
        print *, "Fizz"
     end if
  else
     print *, "Buzz"
  end if

end Program ex2_1
