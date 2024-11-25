void  main () {
    char JdLmnjAT2f [101], crjQnOVeUN [101], *p1, *RjwrXT3ofQ2, *wIYSUxTXME;
    gets (JdLmnjAT2f);
    p1 = JdLmnjAT2f;
    RjwrXT3ofQ2 = crjQnOVeUN;
    while (!('\0' == *(p1 + 1))) {
        wIYSUxTXME = p1 + 1;
        *RjwrXT3ofQ2 = *p1 + *wIYSUxTXME;
        RjwrXT3ofQ2 = RjwrXT3ofQ2 +1;
        p1 = p1 + 1;
    }
    wIYSUxTXME = JdLmnjAT2f;
    *RjwrXT3ofQ2 = *p1 + *wIYSUxTXME;
    wIYSUxTXME = crjQnOVeUN;
    for (; wIYSUxTXME <= RjwrXT3ofQ2;) {
        printf ("%c", *wIYSUxTXME);
        wIYSUxTXME = wIYSUxTXME + 1;
    };
}

