int main () {
    double  fHNAqMtRgy [50], bAZ2mb91xY [50], womanh [50], xX0PE65, CkZKfxgSF;
    int O6V5wCHFf9oh;
    int o1nv8wkK;
    int Pzb9TIkD;
    int i;
    int tTENJY8c;
    O6V5wCHFf9oh = (15 - 15);
    o1nv8wkK = 0;
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
    char h2WsqzMg [50] [10];
    scanf ("%d", &Pzb9TIkD);
    for (i = 0; i < Pzb9TIkD; i = i + 1) {
        scanf ("%s%lf", h2WsqzMg[i], &fHNAqMtRgy[i]);
        if (h2WsqzMg[i][0] == 'm') {
            bAZ2mb91xY[O6V5wCHFf9oh] = fHNAqMtRgy[i];
            O6V5wCHFf9oh = O6V5wCHFf9oh +1;
        }
        else {
            if (h2WsqzMg[i][0] == 'f') {
                womanh[o1nv8wkK] = fHNAqMtRgy[i];
                o1nv8wkK = o1nv8wkK + 1;
            };
        };
    }
    {
        i = 0;
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
        while (i < O6V5wCHFf9oh -1) {
            i = i + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (tTENJY8c = 0; tTENJY8c < O6V5wCHFf9oh -1; tTENJY8c = tTENJY8c + 1) {
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
                if (bAZ2mb91xY[tTENJY8c] > bAZ2mb91xY[tTENJY8c + 1]) {
                    CkZKfxgSF = bAZ2mb91xY[tTENJY8c];
                    bAZ2mb91xY[tTENJY8c] = bAZ2mb91xY[tTENJY8c + 1];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    bAZ2mb91xY[tTENJY8c + 1] = CkZKfxgSF;
                };
            };
        };
    }
    for (i = 0; i < o1nv8wkK - 1; i++) {
        tTENJY8c = 269 - 267;
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
        while (tTENJY8c >= 0) {
            if (womanh[tTENJY8c] < womanh[tTENJY8c + 1]) {
                xX0PE65 = womanh[tTENJY8c];
                womanh[tTENJY8c] = womanh[tTENJY8c + 1];
                womanh[tTENJY8c + 1] = xX0PE65;
            }
            tTENJY8c = tTENJY8c - 1;
        };
    }
    for (i = 0; i < O6V5wCHFf9oh; i++) {
        printf ("%.2lf ", bAZ2mb91xY[i]);
    }
    {
        i = 0;
        while (i < o1nv8wkK - 1) {
            printf ("%.2lf ", womanh[i]);
            i = i + 1;
        };
    }
    printf ("%.2lf", womanh[o1nv8wkK - 1]);
    return 0;
}

