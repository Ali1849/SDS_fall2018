program ex2_4
  implicit none
  real :: acc1 = 100, acc2 = 200
  integer :: i, year = 0
  do i = 1,100
     year = year+1
     acc1 = acc1*1.05
     acc2 = acc2*1.02
     if ( acc1 >= acc2 ) then
        print *, "Account 1 value: ",acc1 
        print *, "Account 2 value: ",acc2 
        print *, "Answer is: ", year
        exit
     end if
  end do
end program ex2_4