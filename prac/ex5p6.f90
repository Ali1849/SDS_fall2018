Program ex5p6
  implicit none
  integer :: n,m
  print *, "Enter a number"
  read *, n
  if ( mod(n,2)==0 ) then
     print *,n, " is even."
  else if ( mod(n,2)==1 ) then
     print *,n, " is odd."
  end if
  if ( mod(n,7)==0 ) then
     print *,n, " is divisible by 7."
  else if ( mod(n,7)/=0 ) then
     print *,n, " is not divisible by 7."
  end if
  m = n**(1./2.)
  if ( m**2==n ) then
     print *,n, " is a perfect square."
  else if ( m**2/=0 ) then
     print *,n, " is not a perfect square."
  end if
  
  
End Program ex5p6
