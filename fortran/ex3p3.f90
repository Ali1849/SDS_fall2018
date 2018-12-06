program ex3p3
  implicit none
  integer i,j
  print *, "Enter i,j:"
  read *, i,j
  print*, "Before swap i = ",i, "j = ", j 
  call  swapij(i,j)
  print*, "After swap  i = ",i, "j = ", j  

contains
  subroutine swapij(i,j)
    implicit none
    integer i,j,temp
    temp = i
    i = j
    j = temp
  end subroutine swapij
end program ex3p3
