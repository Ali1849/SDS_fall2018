program ex14_1
  implicit none
  real(4), dimension(:), allocatable :: x,y
  integer :: i,j
  print *, "Enter size of arry (i): "
  read *, i
  allocate(x(i+1))
  allocate(y(i))
  print *, "Enter i+1 element for arry x: "  
  do j = 1,i+1
     read *, x(j)
  end do
  print *, "x = ",x
  y(:) = (x(1:i)+x(2:i+1))/2
  print *, "y = ",y
end program ex14_1
