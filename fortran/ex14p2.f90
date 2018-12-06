program ex14_2
  implicit none
  real(8), dimension(:), allocatable :: x
  real(8), linf_norm, lone_norm
  integer :: i = 5
  allocate (x(5,5))
  x = rand(5,5)
  l1_norm = maxval(sum(x())
  linf_norm = 
end program ex14_2
