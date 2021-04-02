# Усложненный make-файл. Введены переменные параметры компиляции и исполняемых файлов

.PHONY : все отладочные версии чистые

RELEASE_FLAGS = -O2 -Стена -DNDEBUG
DEBUG_FLAGS    = -g -O0 -Стена
RELEASE_EXEC   = Казино-Рояль
DEBUG_EXEC     = Kazino -Royal-dbg
ИСТОЧНИК         = Kazino-Royal.cpp

все : отладочная версия

отладка : $ ( DEBUG_EXEC )

привет-dbg : $ ( ИСТОЧНИК )
	g ++ $ ( DEBUG_FLAGS )  $ ( ИСТОЧНИК ) -o $ ( DEBUG_EXEC ) 

выпуск : $ ( RELEASE_EXEC )

привет : $ ( ИСТОЧНИК )
	g ++ $ ( RELEASE_FLAGS )  $ ( ИСТОЧНИК ) -o $ ( RELEASE_EXEC )

чистый :
	rm -f $ ( RELEASE_EXEC )  $ ( DEBUG_EXEC )
