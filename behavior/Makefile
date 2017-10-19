all: acc

acc: main.o wiimote.o acc_event_printer.o
	g++ main.o wiimote.o acc_event_printer.o -o acc

main.o: main.cc
	g++ main.cc -c -o main.o

wiimote.o: wiimote.h wiimote.cc
	g++ wiimote.cc -c -o wiimote.o

acc_event_printer.o: acc_event_printer.h acc_event_printer.cc
	g++ acc_event_printer.cc -c -o acc_event_printer.o

clean:
	rm *.o button
