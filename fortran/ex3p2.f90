program ex3p1
  implicit none
  integer :: n, prime_number
  print *, "How many prime numbers:"
  read *, n 
  prime_number = prime_test(n)
contains
  integer function prime_test(n)
    integer :: i = 2, j, n, number_of_primes_found = 0
    logical :: isprime
    do
       isprime = .true.
       if (number_of_primes_found == n) then
          exit
       end if
       do  j = 2, i-1
          if ( mod(i,j)==0 ) then
             isprime = .false.
             exit
          end if
       end do
       if (isprime) then
          print *, i
          number_of_primes_found = number_of_primes_found + 1 
       end if
       i = i+1 
    end do
    prime_test = number_of_primes_found
  end function prime_test
end program ex3p1
