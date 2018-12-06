info ::
	@echo "Makefile for class examples"

% : %.cxx
	icpc -o $@ $^

.PHONY: clean
clean ::
	@/bin/rm -f *~ *.o a.out
	for f in * ; do \
	  if [ -f $${f}.cxx ] ; then \
	    echo "removing executable: $${f}" ; \
	    /bin/rm -f $${f} ; \
	  fi ; \
	done
