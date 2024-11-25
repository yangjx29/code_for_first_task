int LZv642hQ [100] = {(364 - 364)}, m1o5buE [100] = {(687 - 687)};
int MMt27x, jH7h0l1fpA9, QBjCwExQ7N3S;

void  bCf0yjaK () {
    scanf ("%d %d", &MMt27x, &jH7h0l1fpA9);
    {
        QBjCwExQ7N3S = 961 - 961;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (MMt27x > QBjCwExQ7N3S) {
            scanf ("%d", &LZv642hQ[QBjCwExQ7N3S]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            QBjCwExQ7N3S = QBjCwExQ7N3S +1;
        };
    }
    {
        QBjCwExQ7N3S = 855 - 855;
        while (jH7h0l1fpA9 > QBjCwExQ7N3S) {
            scanf ("%d", &m1o5buE[QBjCwExQ7N3S]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            QBjCwExQ7N3S = QBjCwExQ7N3S +1;
        };
    };
}

void  pt65CUBpTlS (int LZv642hQ [], int MMt27x, int m1o5buE [], int jH7h0l1fpA9) {
    int QBjCwExQ7N3S, XU9vd3fRc, kQqKY5ET;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    {
        QBjCwExQ7N3S = 262 - 261;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (QBjCwExQ7N3S < MMt27x) {
            XU9vd3fRc = QBjCwExQ7N3S -1;
            kQqKY5ET = LZv642hQ[QBjCwExQ7N3S];
            QBjCwExQ7N3S = QBjCwExQ7N3S +1;
            while (kQqKY5ET < LZv642hQ[XU9vd3fRc] && 0 <= XU9vd3fRc) {
                LZv642hQ[XU9vd3fRc +1] = LZv642hQ[XU9vd3fRc];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                XU9vd3fRc--;
            }
            LZv642hQ[XU9vd3fRc +1] = kQqKY5ET;
        };
    }
    {
        QBjCwExQ7N3S = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (jH7h0l1fpA9 > QBjCwExQ7N3S) {
            XU9vd3fRc = QBjCwExQ7N3S -1;
            kQqKY5ET = m1o5buE[QBjCwExQ7N3S];
            QBjCwExQ7N3S++;
            while (kQqKY5ET < m1o5buE[XU9vd3fRc] && XU9vd3fRc >= 0) {
                m1o5buE[XU9vd3fRc +1] = m1o5buE[XU9vd3fRc];
                XU9vd3fRc--;
            }
            m1o5buE[XU9vd3fRc +1] = kQqKY5ET;
        };
    };
}

void  merge (int LZv642hQ [], int MMt27x, int m1o5buE [], int jH7h0l1fpA9) {
    int QBjCwExQ7N3S;
    {
        QBjCwExQ7N3S = 0;
        while (QBjCwExQ7N3S < jH7h0l1fpA9) {
            LZv642hQ[MMt27x +QBjCwExQ7N3S] = m1o5buE[QBjCwExQ7N3S];
            QBjCwExQ7N3S++;
        };
    };
}

void  CM3aKH () {
    int QBjCwExQ7N3S;
    {
        QBjCwExQ7N3S = 0;
        while (QBjCwExQ7N3S < MMt27x +jH7h0l1fpA9 - 1) {
            printf ("%d ", LZv642hQ[QBjCwExQ7N3S]);
            QBjCwExQ7N3S++;
        };
    }
    printf ("%d", LZv642hQ[QBjCwExQ7N3S]);
}

void  main () {
    bCf0yjaK ();
    pt65CUBpTlS (LZv642hQ, MMt27x, m1o5buE, jH7h0l1fpA9);
    merge (LZv642hQ, MMt27x, m1o5buE, jH7h0l1fpA9);
    CM3aKH ();
}

