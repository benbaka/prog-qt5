QMAKE = qmake
QMAKEFILE = QMakefile
APP := $(notdir $(CURDIR))
PROJECT = $(APP).pro

all: $(QMAKEFILE) .gitignore
	make -f $(QMAKEFILE)

$(QMAKEFILE): $(PROJECT)
	$(QMAKE) -o $(QMAKEFILE)

$(PROJECT):
	$(QMAKE) -project
	echo "QT += widgets" >> $(PROJECT)
	echo "CONFIG += c++11" >> $(PROJECT)

clean: $(QMAKEFILE)
	make -f $(QMAKEFILE) clean

distclean: clean
	make -f $(QMAKEFILE) distclean
	rm -f $(QMAKEFILE)
	rm -f $(PROJECT)

.gitignore:
	test -f .gitignore || echo $(APP) > .gitignore
