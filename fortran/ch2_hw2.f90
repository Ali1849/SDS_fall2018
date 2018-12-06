Program hw2
  implicit none
  integer :: num, i
  logical :: prime = .true.
  print *, "Enter an integer: "
  read *, num
  
  do i = 2, num-1
     if ( mod(num,i)==0 ) then
        prime = .false.
        exit
     end if
  end do
  if (prime) then
     print *, "Your number is prime."
  else
     print *, "Your number is not prime: it is divisible by ", i
  end if
End Program hw2
