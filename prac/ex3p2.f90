program ex3p2
  implicit none
  real :: v1 = 111.111, v2 = 222.222 , temp
  print *,"Before swap: ",v1," ",v2
  temp =v1
  v1 = v2
  v2 = temp
  print *,"After swap: ",v1," ",v2
end program ex3p2
