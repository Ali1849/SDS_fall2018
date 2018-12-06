Program ex5p1
  implicit none
  integer :: num
  print *, "Enter a number: "
  read *, num
  !if ( num>0 ) then
  !   print *, "The number is positive"
  !else if ( num==0 ) then
  !   print *, "The number is zero"
  !else 
  !   print *, "The number is negetive"
  !end if
  Select Case (num)
     case (1:)
         print *, "The number is positive"
     case (0)
         print *, "The number is zero"
     case (:-1)
         print *, "The number is negetive"
      End Select
End Program ex5p1
