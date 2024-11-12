void  main () {
    int XSOMxkDC;
    int jDdLAm2hN;
    int JCDNHX6s;
    int H5s9kgAE1;
    char Hn69bYIy;
    jDdLAm2hN = 1;
    while (scanf ("%d%c", &H5s9kgAE1, &Hn69bYIy) && Hn69bYIy != '\n') {
        if (!(1 != jDdLAm2hN)) {
            XSOMxkDC = 0;
            JCDNHX6s = H5s9kgAE1;
        }
        else {
            if (JCDNHX6s < H5s9kgAE1) {
                XSOMxkDC = JCDNHX6s;
                JCDNHX6s = H5s9kgAE1;
            }
            else {
                if (H5s9kgAE1 > XSOMxkDC &&H5s9kgAE1 != JCDNHX6s) {
                    XSOMxkDC = H5s9kgAE1;
                }
            }
        }
        jDdLAm2hN++;
    }
    if (jDdLAm2hN == 1) {
    }
    else {
        if (H5s9kgAE1 > JCDNHX6s) {
            XSOMxkDC = JCDNHX6s;
            JCDNHX6s = H5s9kgAE1;
        }
        else {
            if (H5s9kgAE1 > XSOMxkDC &&H5s9kgAE1 != JCDNHX6s) {
                XSOMxkDC = H5s9kgAE1;
            }
        }
        if (XSOMxkDC == 0) {
        }
        else {
            printf ("%d", XSOMxkDC);
        }
    }
}

