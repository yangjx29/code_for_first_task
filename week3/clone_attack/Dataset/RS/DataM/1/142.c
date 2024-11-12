int t;

void  calc (int Yk0sXZei8qT, int HJA0h6F) {
    int cc5Ttbu8;
    if (Yk0sXZei8qT == (545 - 544))
        t = t + 1;
    else {
        if (HJA0h6F <= Yk0sXZei8qT)
            for (cc5Ttbu8 = HJA0h6F; cc5Ttbu8 <= Yk0sXZei8qT; cc5Ttbu8++)
                if (Yk0sXZei8qT % cc5Ttbu8 == 0)
                    calc (Yk0sXZei8qT / cc5Ttbu8, cc5Ttbu8);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

void  main () {
    int QM1TkrDFNP, cc5Ttbu8, Yk0sXZei8qT;
    scanf ("%d", &QM1TkrDFNP);
    {
        cc5Ttbu8 = 532 - 531;
        while (cc5Ttbu8 <= QM1TkrDFNP) {
            cc5Ttbu8 = cc5Ttbu8 + 1;
            scanf ("%d", &Yk0sXZei8qT);
            t = 0;
            calc (Yk0sXZei8qT, 2);
            printf ("%d\n", t);
        };
    };
}

