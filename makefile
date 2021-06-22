a.out : main.o menu.o tablica_wysw.o  tablica_class.o zapisz_arkusz.o zmien_komorke.o operacje_mat.o
	g++ -o $@ $^
main.o : main.cpp 
	g++ -c -o $@ $^
menu.o : menu.cpp
	g++ -c -o $@ $^
tablica_wysw.o : tablica_wysw.cpp
	g++ -c -o $@ $^
#tablica.o : tablica.cpp 
#	g++ -c -o $@ $^
tablica_class.o : tablica_class.cpp
	g++ -c -o $@ $^
zapisz_arkusz.o : zapisz_arkusz.cpp
	g++ -c -o $@ $^
zmien_komorke.o : zmien_komorke.cpp
	g++ -c -o $@ $^
operacje_mat.o : operacje_mat.cpp
	g++ -c -o $@ $^