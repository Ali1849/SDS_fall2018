# this is a makefile for the fortran module demo

myprogram : mod.o prog.o 
	ifort -o myprogram prog.o mod.o
.SUFFIXES: .o .F90
%.o : %.F90
	ifort -c -o $@ $^
# mod.o : mod.F90
# 	ifort -c mod.F90
# prog.o : prog.F90
# 	ifort -c prog.F90

clean :
	rm -f *.o *~ *.mod myprogram
