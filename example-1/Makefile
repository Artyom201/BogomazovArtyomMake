# Простой make-файл без числа, для релиза и дебага

.PHONY : все отладочные версии чистые

все : отладочная версия

отладка : привет-dbg

привет-dbg : hello.cpp
	g ++ -g -O0 hello.cpp -o hello-dbg -Wall

релиз : привет

привет : hello.cpp
	g ++ -O2 hello.cpp -o hello -DNDEBUG -Wall

чистый :
	rm -f привет привет-dbg 
