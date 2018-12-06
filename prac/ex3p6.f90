program ex3p6
  implicit none
  character(len=20)::a,b,c,d,e,f,g*120
  print *, "Enter 6 words seperated by enter: "
  read *, a,b,c,d,e,f
  g = trim(a)//" "//trim(b)//" "//trim(c)//" "//trim(d)//" "//trim(e)//" "//trim(f)//"."
  print *, trim(g)
end program ex3p6
