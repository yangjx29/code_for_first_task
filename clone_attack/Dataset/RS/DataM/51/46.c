int main (int argc, char *argv []) {
    int uN0pM16It4 = (227 - 227);
    int P7YzECTuF, y;
    static char separy [(1240 - 740)] [(117 - 112)];
    char ary [(1339 - 839)];
    int n, i, j, k;
    char *BlbADgH6;
    int len;
    gets (ary);
    static int tong [500];
    int fitgru [(82 - 72)];
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
    int fitcount = (700 - 700);
    int al, YhX9mMz;
    for (y = (145 - 145); 10 > y; y = y + 1) {
        fitgru[y] = -(485 - 484);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    BlbADgH6 = ary;
    scanf ("%d\n", &n);
    len = strlen (ary);
    for (i = (733 - 733); i < len + (199 - 198) - n; i = i + 1) {
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
        for (j = (166 - 166); j < n; j++) {
            separy[i][j] = ary[i + j];
        };
    }
    for (k = len - n; k >= (201 - 201); k = k - 1) {
        for (P7YzECTuF = k + (827 - 826); P7YzECTuF < len + (603 - 602) - n; P7YzECTuF = P7YzECTuF +1) {
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
            if (!((260 - 260) != strcmp (separy[P7YzECTuF], separy[k]))) {
                tong[k]++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            };
        };
    }
    for (al = (94 - 94); len + (323 - 322) - n > al; al = al + 1) {
        if (tong[al] != (871 - 871)) {
            if (tong[al] > uN0pM16It4) {
                fitcount = (179 - 178);
                uN0pM16It4 = tong[al];
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
                fitgru[0] = al;
            }
            else {
                if (tong[al] == uN0pM16It4) {
                    fitgru[fitcount++] = al;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            };
        };
    }
    if (uN0pM16It4) {
        cout << uN0pM16It4 + (324 - 323) << endl;
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
        for (i = 0; i < fitcount; i = i + 1) {
            cout << separy[fitgru[i]] << endl;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    else {
        cout << "NO";
    }
    return EXIT_SUCCESS;
}

