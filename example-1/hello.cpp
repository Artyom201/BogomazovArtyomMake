# включить  < iostream >
используя  пространство имен  std ;

int  main ( int argc, char ** argv)
{
    if (argc == 1 ) {
        cout << " Здравствуйте! Я могу вывести параметры командной строки. Попробуйте \ n " ;
    } else {
        for ( int i = 0 ; i <argc; i ++) {
            cout << i << ' \ t ' << argv [i] << endl;
        }
    }
    возврат  0 ;
}
