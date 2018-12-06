program ex3p4
  implicit none
  integer :: i,j,i_old,j_old
  print *, "Enter i,j:"
  read *, i,j
  call  swapij(i,j,i_old,j_old)
  print*, "i = ",i, ", j = ", j,", i_old = ", i_old, " j_old = ", j_old   

contains
  subroutine swapij(i,j,i_old,j_old)
    implicit none
    integer, intent(inout) :: i,j
    integer, intent(out) :: i_old,j_old
    i_old = i
    j_old = j
    i = j_old
    j = i_old
  end subroutine swapij
end program ex3p4
