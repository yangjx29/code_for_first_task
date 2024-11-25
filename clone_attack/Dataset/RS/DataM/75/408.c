int main () {
    char a [(10679 - 679)], ywKqC80cAY4B [(10928 - 928)];
    int IrXV2Q;
    int t;
    int J7KqvwkXL;
    int most;
    int max;
    int min;
    int mrfJDTcSsiVl [(10842 - 842)] [(168 - 166)];
    int d [(10098 - 98)];
    int e [(10282 - 282)];
    int F385ABy;
    int m;
    int pause;
    IrXV2Q = (496 - 496);
    t = (696 - 696);
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
    J7KqvwkXL = -(653 - 652);
    most = (820 - 820);
    max = (23 - 23);
    min = 1000;
    cin >> a;
    memset (mrfJDTcSsiVl, (504 - 504), sizeof (mrfJDTcSsiVl));
    memset (e, (489 - 489), sizeof (e));
    for (IrXV2Q = (741 - 741); (10164 - 164) > IrXV2Q; IrXV2Q = IrXV2Q +1) {
        if (!(',' == a[IrXV2Q]) && !('\0' == a[IrXV2Q]))
            d[IrXV2Q] = a[IrXV2Q] - '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(',' != a[IrXV2Q])) {
            m = IrXV2Q;
            for (F385ABy = J7KqvwkXL +(799 - 798); m > F385ABy; F385ABy = F385ABy +1)
                mrfJDTcSsiVl[t][(614 - 614)] = (889 - 879) * mrfJDTcSsiVl[t][(725 - 725)] + d[F385ABy];
            J7KqvwkXL = m;
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
            if (min > mrfJDTcSsiVl[t][(869 - 869)])
                min = mrfJDTcSsiVl[t][(256 - 256)];
            t = t + 1;
        }
        if (!('\0' != a[IrXV2Q])) {
            m = IrXV2Q;
            for (F385ABy = J7KqvwkXL +(212 - 211); m > F385ABy; F385ABy = F385ABy +1)
                mrfJDTcSsiVl[t][(431 - 431)] = (135 - 125) * mrfJDTcSsiVl[t][(268 - 268)] + d[F385ABy];
            J7KqvwkXL = m;
            if (mrfJDTcSsiVl[t][(968 - 968)] < min)
                min = mrfJDTcSsiVl[t][(474 - 474)];
            t = t + 1;
            break;
        };
    }
    cin >> ywKqC80cAY4B;
    t = (874 - 874);
    J7KqvwkXL = -(61 - 60);
    {
        IrXV2Q = 404 - 404;
        while (IrXV2Q < (10213 - 213)) {
            if (!(',' == ywKqC80cAY4B[IrXV2Q]) && !('\0' == ywKqC80cAY4B[IrXV2Q]))
                d[IrXV2Q] = ywKqC80cAY4B[IrXV2Q] - '0';
            if (ywKqC80cAY4B[IrXV2Q] == ',') {
                m = IrXV2Q;
                {
                    F385ABy = 70 - 69;
                    while (m > F385ABy) {
                        mrfJDTcSsiVl[t][(160 - 159)] = (334 - 324) * mrfJDTcSsiVl[t][(942 - 941)] + d[F385ABy];
                        F385ABy = F385ABy +1;
                    };
                }
                if (max < mrfJDTcSsiVl[t][(501 - 500)])
                    max = mrfJDTcSsiVl[t][(504 - 503)];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                t++;
                J7KqvwkXL = m;
            }
            if (ywKqC80cAY4B[IrXV2Q] == '\0') {
                m = IrXV2Q;
                for (F385ABy = J7KqvwkXL +(50 - 49); F385ABy < m; F385ABy = F385ABy +1)
                    mrfJDTcSsiVl[t][(59 - 58)] = 10 * mrfJDTcSsiVl[t][(457 - 456)] + d[F385ABy];
                J7KqvwkXL = m;
                if (max < mrfJDTcSsiVl[t][1])
                    max = mrfJDTcSsiVl[t][1];
                t++;
                break;
            }
            IrXV2Q = IrXV2Q +1;
        };
    }
    {
        IrXV2Q = min;
        while (IrXV2Q < max) {
            {
                F385ABy = 0;
                while (F385ABy < t) {
                    if (mrfJDTcSsiVl[F385ABy][0] <= IrXV2Q &&mrfJDTcSsiVl[F385ABy][1] > IrXV2Q)
                        e[IrXV2Q]++;
                    F385ABy = F385ABy +1;
                };
            }
            if (most < e[IrXV2Q])
                most = e[IrXV2Q];
            IrXV2Q++;
        };
    }
    cout << t << " " << most << endl;
    return 0;
}

