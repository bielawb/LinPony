include /opt/omi-1.0.8/share/omi.mak

DEFINES = MI_API_VERSION=2
PROVIDER = Pony
SOURCES = $(wildcard *.c *.cpp)
CLASSES = CIM_Pony=Pony 

$(LIBRARY): $(OBJECTS)
	$(CXX) $(CXXSHLIBFLAGS) $(OBJECTS) -o $(LIBRARY) $(CXXLIBS)

%.o: %.c
	$(CC) -c $(CFLAGS) $(INCLUDES) $< $(CLIBS) -o $@

%.o: %.cpp
	$(CXX) -c $(CXXFLAGS) $(INCLUDES) $< -o $@

reg:
	$(BINDIR)/omireg $(CURDIR)/$(LIBRARY)

gen:
	$(BINDIR)/omigen --cpp -m Pony schema.mof CIM_Pony=Pony

clean:
	rm -f $(LIBRARY) $(OBJECTS) $(PROVIDER).reg


