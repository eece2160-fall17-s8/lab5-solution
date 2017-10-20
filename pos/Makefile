all: acc

acc: main.o wiimote.o acc_event_printer.o zedboard.o acc_event_led_viewer.o pos_tracker.o
	g++ main.o wiimote.o acc_event_printer.o zedboard.o acc_event_led_viewer.o pos_tracker.o -o acc -g -Wall -Werror

main.o: main.cc
	g++ main.cc -c -o main.o -g -Wall -Werror

wiimote.o: wiimote.h wiimote.cc
	g++ wiimote.cc -c -o wiimote.o -g -Wall -Werror

acc_event_printer.o: acc_event_printer.h acc_event_printer.cc
	g++ acc_event_printer.cc -c -o acc_event_printer.o -g -Wall -Werror

acc_event_led_viewer.o: acc_event_led_viewer.h acc_event_led_viewer.cc
	g++ acc_event_led_viewer.cc -c -o acc_event_led_viewer.o -g -Wall -Werror

zedboard.o: zedboard.h zedboard.cc
	g++ zedboard.cc -c -o zedboard.o -g -Wall -Werror

pos_tracker.o: pos_tracker.h pos_tracker.cc
	g++ pos_tracker.cc -c -o pos_tracker.o -g -Wall -Werror

clean:
	rm *.o ac
