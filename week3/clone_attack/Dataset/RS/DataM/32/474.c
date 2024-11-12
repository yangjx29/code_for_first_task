void  main () {
    char a [20] [100] = {'\0'}, b [20] [100] = {'\0'}, o9soYwCaleZ [20] [100] = {'\0'};
    int dVukUmT, changb, n, i, qIBGAr, k = 0, SU79cxsEjnr [(656 - 636)] [100] = {'\0'};
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%s", a[i]);
            scanf ("%s", b[i]);
            dVukUmT = strlen (a[i]);
            changb = strlen (b[i]);
            {
                qIBGAr = dVukUmT - changb;
                while (dVukUmT > qIBGAr) {
                    o9soYwCaleZ[i][qIBGAr] = b[i][qIBGAr - dVukUmT + changb];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    qIBGAr++;
                };
            }
            for (qIBGAr = 0; dVukUmT - changb > qIBGAr; qIBGAr++) {
                o9soYwCaleZ[i][qIBGAr] = '0';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
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
            for (qIBGAr = dVukUmT - 1; qIBGAr > 0; qIBGAr--) {
                if (48 > a[i][qIBGAr]) {
                    a[i][qIBGAr] = a[i][qIBGAr] + 10;
                    a[i][qIBGAr - 1] = a[i][qIBGAr - 1] - 1;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (o9soYwCaleZ[i][qIBGAr] > a[i][qIBGAr]) {
                    a[i][qIBGAr - 1] = a[i][qIBGAr - 1] - 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    SU79cxsEjnr[i][qIBGAr] = (int) 10 + a[i][qIBGAr] - o9soYwCaleZ[i][qIBGAr];
                }
                else {
                    SU79cxsEjnr[i][qIBGAr] = (int) a[i][qIBGAr] - o9soYwCaleZ[i][qIBGAr];
                };
            }
            SU79cxsEjnr[i][0] = (int) a[i][0] - o9soYwCaleZ[i][0];
            {
                qIBGAr = 0;
                while (dVukUmT > qIBGAr) {
                    if (SU79cxsEjnr[i][qIBGAr] != 0)
                        break;
                    qIBGAr++;
                };
            }
            {
                k = qIBGAr;
                while (k < dVukUmT) {
                    printf ("%d", SU79cxsEjnr[i][k]);
                    k++;
                };
            }
            i++;
            printf ("\n");
        };
    };
}

