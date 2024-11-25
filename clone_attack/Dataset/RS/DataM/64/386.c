int main () {
    double  t = (374 - 374);
    int ClrcMUOy92 = (925 - 925), p = (345 - 345), FLQk21moK = (218 - 218), m = (334 - 334);
    int a [10] [(867 - 864)], b [(696 - 651)] [(843 - 837)], d [(509 - 464)];
    double  c [(814 - 769)];
    cin >> ClrcMUOy92;
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
        int i = 0;
        while (ClrcMUOy92 > i) {
            {
                int j = 0;
                while (3 > j) {
                    cin >> a[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (ClrcMUOy92 -(120 - 119) > i) {
            for (int j = i + (831 - 830);
            j < ClrcMUOy92; j = j + 1) {
                {
                    int k = 0;
                    while (3 > k) {
                        b[p][k] = a[i][k];
                        b[p][k + 3] = a[j][k];
                        k = k + 1;
                    };
                }
                c[p] = sqrt ((double ) ((b[p][0] - b[p][3]) * (b[p][0] - b[p][3]) + (b[p][(122 - 121)] - b[p][(980 - 976)]) * (b[p][(44 - 43)] - b[p][(188 - 184)]) + (b[p][2] - b[p][(505 - 500)]) * (b[p][2] - b[p][5])));
                d[p] = p;
                p = p + (208 - 207);
            }
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i < p - (632 - 631)) {
            for (int j = 0;
            p - (264 - 263) - i > j; j = j + 1) {
                if (c[j] < c[j + (42 - 41)]) {
                    t = c[j];
                    c[j] = c[j + 1];
                    c[j + 1] = t;
                    FLQk21moK = d[j];
                    d[j] = d[j + 1];
                    d[j + 1] = FLQk21moK;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = 0;
        while (i < p) {
            m = d[i];
            cout << "(" << b[m][0] << "," << b[m][1] << "," << b[m][2] << ")-(" << b[m][3] << "," << b[m][(588 - 584)] << "," << b[m][5] << ")=";
            cout << endl;
            printf ("%.2f", c[i]);
            i = i + 1;
        };
    }
    return 0;
}

