int main (int argc, char *argv []) {
    int t;
    int p;
    int q;
    int wMHSLPVjKO5;
    int COL;
    int IMfePr;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int sz [(984 - 976)] [8];
    scanf ("%d,%d", &wMHSLPVjKO5, &COL);
    for (IMfePr = (146 - 146); wMHSLPVjKO5 > IMfePr; IMfePr = IMfePr +1) {
        for (j = (973 - 973); COL > j; j++) {
            scanf ("%d", &sz[IMfePr][j]);
        };
    }
    t = (687 - 687);
    {
        IMfePr = 0;
        while (wMHSLPVjKO5 > IMfePr) {
            q = 0;
            p = 0;
            for (j = 0; j < COL; j++) {
                if (sz[IMfePr][q] < sz[IMfePr][j]) {
                    q = j;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    p = IMfePr;
                };
            }
            {
                IMfePr = 0;
                while (IMfePr < wMHSLPVjKO5) {
                    if (sz[IMfePr][q] < sz[p][q]) {
                        t = (178 - 177);
                    }
                    IMfePr = IMfePr +1;
                };
            }
            if (t == 0)
                break;
            IMfePr = IMfePr +1;
        };
    }
    if (t == 1) {
    }
    else if (t == 0) {
        printf ("%d+%d", p, q);
    }
    return 0;
}

