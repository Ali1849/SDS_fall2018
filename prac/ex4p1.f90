MODULE global_data
  implicit none
  save
  real :: x1,x2,y1,y2,d1,d2,d
END MODULE global_data

SUBROUTINE dist()
  USE global_data
  implicit none
  d1 = sqrt(x1**2+y1**2)
  d2 = sqrt(x2**2+y2**2)
  d = sqrt((x1-x2)**2+(y1-y2)**2)
END SUBROUTINE dist

PROGRAM ex4p1
  USE global_data
  implicit none
  print *, "Enter x1,x2,y1,y2:  " 
  read *, x1,x2,y1,y2
  call dist()
  print *,"d1 = ",d1,", d2 = ",d2,", d = ",d
END PROGRAM ex4p1
