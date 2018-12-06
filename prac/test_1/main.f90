MODULE global_data
  IMPLICIT NONE
  SAVE
  REAL :: var1,var2
END MODULE global_data

real function addition()
  use global_data
  implicit none
  addition = var1+var2
end function addition

PROGRAM modules_test
  USE global_data
  IMPLICIT NONE
  REAL :: addition
  PRINT *, "Enter two real numbers: "
  READ *, var1,var2
  PRINT *, var1
  PRINT *, var2
  PRINT *, addition()
END PROGRAM modules_test
