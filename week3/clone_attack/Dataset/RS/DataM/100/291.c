void  main () {
    int xsGl7cgd4uPx;
    int kPQton;
    int mGIKkn7F2X;
    int Lc0yu5tLUKAp;
    int jSRXWk5Vzq;
    int DiE5e2W;
    int Ql5ZmMsQpJD1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    xsGl7cgd4uPx = (261 - 261);
    kPQton = 1;
    char qwoh8km [300], CnWLEk;
    gets (qwoh8km);
    jSRXWk5Vzq = strlen (qwoh8km);
    {
        mGIKkn7F2X = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (mGIKkn7F2X < jSRXWk5Vzq) {
            Ql5ZmMsQpJD1 = mGIKkn7F2X;
            {
                Lc0yu5tLUKAp = mGIKkn7F2X + 1;
                while (Lc0yu5tLUKAp < jSRXWk5Vzq) {
                    if (qwoh8km[Lc0yu5tLUKAp] < qwoh8km[Ql5ZmMsQpJD1])
                        Ql5ZmMsQpJD1 = Lc0yu5tLUKAp;
                    Lc0yu5tLUKAp++;
                };
            }
            CnWLEk = qwoh8km[mGIKkn7F2X];
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
            qwoh8km[mGIKkn7F2X] = qwoh8km[Ql5ZmMsQpJD1];
            mGIKkn7F2X = mGIKkn7F2X + 1;
            qwoh8km[Ql5ZmMsQpJD1] = CnWLEk;
        };
    }
    {
        mGIKkn7F2X = 0;
        while (mGIKkn7F2X < jSRXWk5Vzq) {
            if (qwoh8km[mGIKkn7F2X] <= 'z' && 'a' <= qwoh8km[mGIKkn7F2X]) {
                xsGl7cgd4uPx = 0;
                {
                    Lc0yu5tLUKAp = 0;
                    while (Lc0yu5tLUKAp < jSRXWk5Vzq) {
                        if (!(qwoh8km[Lc0yu5tLUKAp] != qwoh8km[mGIKkn7F2X]))
                            xsGl7cgd4uPx = xsGl7cgd4uPx + 1;
                        Lc0yu5tLUKAp++;
                    };
                }
                kPQton = 1;
                for (DiE5e2W = mGIKkn7F2X - 1; DiE5e2W >= 0; DiE5e2W = DiE5e2W -1)
                    if (qwoh8km[mGIKkn7F2X] == qwoh8km[DiE5e2W])
                        kPQton = 0;
                if (kPQton == 1)
                    printf ("%c=%d\n", qwoh8km[mGIKkn7F2X], xsGl7cgd4uPx);
            }
            mGIKkn7F2X++;
        };
    }
    if (xsGl7cgd4uPx == 0)
        printf ("No");
}

