a.out : main.o menu.o tablica_wysw.o tablica.o tablica_class.o zapisanie_do_pliku.o
	g++ -o $@ $^
main.o : main.cpp 
	g++ -c -o $@ $^
menu.o : menu.cpp
	g++ -c -o $@ $^
tablica_wysw.o : tablica_wysw.cpp
	g++ -c -o $@ $^
tablica.o : tablica.cpp 
	g++ -c -o $@ $^
tablica_class.o : tablica_class.cpp
	g++ -c -o $@ $^
zapisanie_do_pliku.o : zapisanie_do_pliku.cpp 
	g++ -c -o $@ $^
