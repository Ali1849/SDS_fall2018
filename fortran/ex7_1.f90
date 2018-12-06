program ex7_1
  implicit none
  real, dimension(10) :: x
  real, pointer :: point_at_max
  x = [10, 1, 2, 3, 4, 5, 6, 7, 8, 9] 
  call point_max(x,point_at_max)
  print *, x
  print *, point_at_max
  
contains
  subroutine point_max(x,point_at_max)
    real, target, dimension(:) :: x
    real, pointer :: point_at_max
    integer :: i
    point_at_max => x(1)
    do i = 1,10
       if (x(i) > point_at_max) then 
          point_at_max => x(i)
       end if
    end do
  end subroutine point_max
end program ex7_1
