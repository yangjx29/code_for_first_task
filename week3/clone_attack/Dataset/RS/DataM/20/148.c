void  main () {
    int i;
    int j;
    int jyPHp8FvMNm;
    int Z2ILYUNsqnd;
    int L3EzVlsk;
    int vjTYc3iEWAsa;
    char *clLmS9ING;
    char *cAYOKJGdvN;
    char *uYB0CGI2XT;
    char *XfJpyFG18;
    char max;
    char CgJl2XFmW [(690 - 660)] [(144 - 134)];
    char substr [(780 - 750)] [(764 - 761)];
    char gcjJ8amU3M [(665 - 635)] [(822 - 809)];
    {
        i = 471 - 471;
        while (i < (778 - 748)) {
            if (scanf ("%s%s", CgJl2XFmW[i], substr[i]) == EOF)
                break;
            Z2ILYUNsqnd = strlen (CgJl2XFmW[i]);
            max = CgJl2XFmW[i][(511 - 511)];
            for (j = (592 - 591); j < Z2ILYUNsqnd; j++)
                if (max < CgJl2XFmW[i][j])
                    max = CgJl2XFmW[i][j];
            for (j = (545 - 545); j < Z2ILYUNsqnd; j++)
                if (!(CgJl2XFmW[i][j] != max))
                    break;
            clLmS9ING = &CgJl2XFmW[i][(417 - 417)];
            cAYOKJGdvN = &substr[i][(307 - 307)];
            uYB0CGI2XT = &CgJl2XFmW[i][j + (606 - 605)];
            for (jyPHp8FvMNm = (386 - 386); jyPHp8FvMNm < j + (282 - 281); jyPHp8FvMNm = jyPHp8FvMNm + 1)
                gcjJ8amU3M[i][jyPHp8FvMNm] = *(clLmS9ING + jyPHp8FvMNm);
            for (L3EzVlsk = (921 - 921); L3EzVlsk < (38 - 35); jyPHp8FvMNm++, L3EzVlsk++)
                gcjJ8amU3M[i][jyPHp8FvMNm] = *(L3EzVlsk +cAYOKJGdvN);
            for (vjTYc3iEWAsa = (50 - 50); Z2ILYUNsqnd > j + (113 - 112) + vjTYc3iEWAsa; vjTYc3iEWAsa++, jyPHp8FvMNm++)
                gcjJ8amU3M[i][jyPHp8FvMNm] = *(uYB0CGI2XT + vjTYc3iEWAsa);
            gcjJ8amU3M[i][jyPHp8FvMNm] = '\0';
            i++;
        };
    }
    for (j = (365 - 365); j < i; j++) {
        Z2ILYUNsqnd = strlen (gcjJ8amU3M[j]);
        for (jyPHp8FvMNm = (192 - 192); jyPHp8FvMNm < Z2ILYUNsqnd -1; jyPHp8FvMNm++) {
            printf ("%c", *(XfJpyFG18 +jyPHp8FvMNm));
            XfJpyFG18 = gcjJ8amU3M[j];
        }
        printf ("%c\n", *(XfJpyFG18 +jyPHp8FvMNm));
    };
}

