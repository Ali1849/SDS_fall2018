program ex6_1
  use mod_ex6_1
  implicit none
  type(point) :: p1,p2
  p1 = point(1.d0,1.d0)
  p2 = point(3.d0,3.d0)
  print *,"Distance:",p1%distance(p2)
  print *,"Distance:",p1%lenght()

end program ex6_1
