int main () {
    int a0;
    int b0;
    int i;
    int BNJSH7;
    int n;
    a0 = 0;
    b0 = 0;
    double  pAHOQNl [40], b [40];
    char str [10];
    cin >> n;
    {
        i = 1;
        while (i <= n) {
            i = i + 1;
            cin >> str;
            if (!(0 != strcmp (str, "male"))) {
                a0 = a0 + 1;
                cin >> pAHOQNl[a0];
            }
            else {
                b0 = b0 + 1;
                cin >> b[b0];
            };
        };
    }
    {
        BNJSH7 = 1;
        while (a0 >= BNJSH7) {
            for (i = 1; i <= a0 - BNJSH7; i = i + 1) {
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
                if (pAHOQNl[i] > pAHOQNl[i + 1]) {
                    double  a1;
                    a1 = pAHOQNl[i];
                    pAHOQNl[i] = pAHOQNl[i + 1];
                    pAHOQNl[i + 1] = a1;
                };
            }
            BNJSH7 = BNJSH7 +1;
        };
    }
    {
        BNJSH7 = 1;
        while (BNJSH7 <= b0) {
            BNJSH7 = BNJSH7 +1;
            for (i = 1; i <= b0 - 1; i = i + 1) {
                if (b[i] < b[i + 1]) {
                    double  b1;
                    b1 = b[i];
                    b[i] = b[i + 1];
                    b[i + 1] = b1;
                };
            };
        };
    }
    {
        i = 1;
        while (i <= a0) {
            printf ("%.2f ", pAHOQNl[i]);
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= b0 - 1) {
            printf ("%.2f ", b[i]);
            i = i + 1;
        };
    }
    printf ("%.2f", b[b0]);
    return 0;
}

