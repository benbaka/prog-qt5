QMAKE = qmake
QMAKEFILE = QMakefile
PROJECT = window.pro

all: $(QMAKEFILE)
	make -f $(QMAKEFILE)

$(QMAKEFILE): $(PROJECT)
	$(QMAKE) -o $(QMAKEFILE)

$(PROJECT):
	$(QMAKE) -project
	echo "QT += widgets" >> $(PROJECT)

clean: $(QMAKEFILE)
	make -f $(QMAKEFILE) clean

distclean: clean
	make -f $(QMAKEFILE) distclean
	rm -f $(QMAKEFILE)
	rm -f $(PROJECT)

