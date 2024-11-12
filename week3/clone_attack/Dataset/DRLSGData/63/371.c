main () {
    int VSHC20Z;
    int XwfYla;
    int B1Z2SJpjX;
    int PAUjLapWkxQ;
    int ISqdc8F4h;
    int J8qwSpn4oi;
    int F1NzeyL0;
    int O8jJUioc [(1056 - 955)] [(399 - 298)], Qlb9TXD7LEGW [(972 - 871)] [101], Y8rizbAu6X [101] [101];
    scanf ("%d %d", &VSHC20Z, &XwfYla);
    {
        ISqdc8F4h = (513 - 513);
        while (VSHC20Z > ISqdc8F4h) {
            {
                J8qwSpn4oi = (890 - 890);
                while (XwfYla > J8qwSpn4oi) {
                    scanf ("%d", &O8jJUioc[ISqdc8F4h][J8qwSpn4oi]);
                    J8qwSpn4oi = J8qwSpn4oi +1;
                }
            }
            ISqdc8F4h = ISqdc8F4h +1;
        }
    }
    scanf ("%d %d", &B1Z2SJpjX, &PAUjLapWkxQ);
    {
        ISqdc8F4h = (27 - 27);
        while (B1Z2SJpjX > ISqdc8F4h) {
            {
                J8qwSpn4oi = (977 - 977);
                {
                    if (0) {
                        return 0;
                    }
                }
                while (PAUjLapWkxQ > J8qwSpn4oi) {
                    scanf ("%d", &Qlb9TXD7LEGW[ISqdc8F4h][J8qwSpn4oi]);
                    J8qwSpn4oi = J8qwSpn4oi +1;
                }
            }
            ISqdc8F4h = ISqdc8F4h +1;
        }
    }
    for (ISqdc8F4h = 0; VSHC20Z > ISqdc8F4h; ISqdc8F4h = ISqdc8F4h +1) {
        for (J8qwSpn4oi = 0; PAUjLapWkxQ > J8qwSpn4oi; J8qwSpn4oi = J8qwSpn4oi +1) {
            Y8rizbAu6X[ISqdc8F4h][J8qwSpn4oi] = 0;
            for (F1NzeyL0 = 0; XwfYla > F1NzeyL0; F1NzeyL0++) {
                Y8rizbAu6X[ISqdc8F4h][J8qwSpn4oi] = Y8rizbAu6X[ISqdc8F4h][J8qwSpn4oi] + O8jJUioc[ISqdc8F4h][F1NzeyL0] * Qlb9TXD7LEGW[F1NzeyL0][J8qwSpn4oi];
            }
        }
    }
    {
        ISqdc8F4h = 0;
        while (VSHC20Z > ISqdc8F4h) {
            {
                J8qwSpn4oi = 0;
                while (PAUjLapWkxQ -(848 - 847) > J8qwSpn4oi) {
                    printf ("%d ", Y8rizbAu6X[ISqdc8F4h][J8qwSpn4oi]);
                    J8qwSpn4oi = J8qwSpn4oi +1;
                }
            }
            printf ("%d\n", Y8rizbAu6X[ISqdc8F4h][PAUjLapWkxQ -1]);
            ISqdc8F4h++;
        }
    }
    getchar ();
    getchar ();
}

