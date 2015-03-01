SUBDIRS = click-counter \
	  click-counters \
	  lcd-slider \
	  lcd-sliders \
	  pushbutton \
	  quitbutton \
	  toggle-button \
	  window

all: 
	for d in $(SUBDIRS); do \
	    (cd $$d && make); \
	done

clean:
	for d in $(SUBDIRS); do \
	    (cd $$d && make clean); \
	done

distclean:
	for d in $(SUBDIRS); do \
	    (cd $$d && make distclean); \
	done
