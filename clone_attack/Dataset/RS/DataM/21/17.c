void  main () {
    float XEqRpC [(993 - 693)], bMnriCI = 0, mnKfWFNU [300], aver, U07oEi6 = 0;
    unsigned  int i, j = (783 - 783), n, Ffd6iZV [2];
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%f", &XEqRpC[i]);
            bMnriCI = bMnriCI + XEqRpC[i];
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
            i = i + 1;
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
    aver = bMnriCI / n;
    for (i = 0; n > i; i = i + 1) {
        mnKfWFNU[i] = (XEqRpC[i] - aver) > (aver - XEqRpC[i]) ? (XEqRpC[i] - aver) : (aver - XEqRpC[i]);
        if (U07oEi6 < mnKfWFNU[i])
            U07oEi6 = mnKfWFNU[i];
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < n) {
            if (mnKfWFNU[i] == U07oEi6) {
                Ffd6iZV[j] = XEqRpC[i];
                j = j + 1;
            }
            i++;
        };
    }
    if (j == 1)
        printf ("%d", Ffd6iZV[0]);
    else
        printf ("%d,%d\n", (Ffd6iZV[0] < Ffd6iZV[1] ? Ffd6iZV[0] : Ffd6iZV[1]), (Ffd6iZV[0] > Ffd6iZV[1] ? Ffd6iZV[0] : Ffd6iZV[1]));
}

