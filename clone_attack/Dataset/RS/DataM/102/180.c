int main () {
    int U4DQqyogwe, m1, m2, u87WLYJqBz, mCjN8t, jmOAUuP45Ho, que, f;
    char d3CM9R7hwuZ [50];
    float b [(1011 - 970)], g [41], r9QJNp, uACFyDn;
    scanf ("%d", &u87WLYJqBz);
    m1 = -(262 - 261);
    m2 = -1;
    {
        mCjN8t = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (mCjN8t < u87WLYJqBz) {
            mCjN8t = mCjN8t + 1;
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
            scanf ("%s%f", d3CM9R7hwuZ, &r9QJNp);
            if (d3CM9R7hwuZ[0] == 'm') {
                m1 = m1 + 1;
                b[m1] = r9QJNp;
            }
            else {
                m2++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                g[m2] = r9QJNp;
            };
        };
    }
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
    {
        mCjN8t = 0;
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
        while (m1 > mCjN8t) {
            f = mCjN8t;
            {
                jmOAUuP45Ho = mCjN8t + 1;
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
                while (jmOAUuP45Ho <= m1) {
                    if (b[jmOAUuP45Ho] < b[f])
                        f = jmOAUuP45Ho;
                    jmOAUuP45Ho = jmOAUuP45Ho + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (!(mCjN8t == f)) {
                uACFyDn = b[mCjN8t];
                b[mCjN8t] = b[f];
                b[f] = uACFyDn;
            }
            mCjN8t = mCjN8t + 1;
        };
    }
    {
        mCjN8t = 0;
        while (mCjN8t < m2) {
            f = mCjN8t;
            {
                jmOAUuP45Ho = mCjN8t + 1;
                while (jmOAUuP45Ho <= m2) {
                    if (g[f] < g[jmOAUuP45Ho])
                        f = jmOAUuP45Ho;
                    jmOAUuP45Ho++;
                };
            }
            if (f != mCjN8t) {
                uACFyDn = g[mCjN8t];
                g[mCjN8t] = g[f];
                g[f] = uACFyDn;
            }
            mCjN8t = mCjN8t + 1;
        };
    }
    printf ("%.2f", b[0]);
    {
        mCjN8t = 1;
        while (mCjN8t <= m1) {
            printf (" %.2f", b[mCjN8t]);
            mCjN8t = mCjN8t + 1;
        };
    }
    {
        mCjN8t = 0;
        while (mCjN8t <= m2) {
            printf (" %.2f", g[mCjN8t]);
            mCjN8t++;
        };
    }
    return 0;
}

