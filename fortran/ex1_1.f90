program ex1_1
  implicit none
  real :: a,b,c,d,v_sph,v_cub, pi = 3.14
  character(len=20) :: name
  print *, "Enter three numbers: "
  read *, a, b, c
  print *, "Enter your name: "
  read *, name
  v_sph = 4./3.*pi*a**3.
  v_cub = a*b*c
  d = (a*b*c)/7.
  print *, "Hello, ",name
  print *, "Sphere volume with radius a: ", v_sph
  print *, "Cube volume with a, b, c as dimensions: ", v_cub
  print *, int(d)
end program ex1_1
