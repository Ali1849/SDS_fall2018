program ex3p6
  implicit none
  character(len=20)::a,b,c,d,e,f,g*120
  print *, "Enter 6 word sentence: "
  read *,g(:20),g(21:40)
  print *, len(trim(g(:20)))
  g = trim(g(:20))//" "//trim(g(21:40))
  !g = trim(a)//" "//trim(b)//" "//trim(c)//" "//trim(d)//" "//trim(e)//" "//trim(f)//"."
  print *, trim(g),"."
end program ex3p6
