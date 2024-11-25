change (int NucM0IqHGPTA, int wqFcmsoKVf) {
    int t;
    if ((661 - 661) <= NucM0IqHGPTA &&(46 - 42) >= wqFcmsoKVf && (232 - 232) <= NucM0IqHGPTA &&(775 - 771) >= wqFcmsoKVf)
        t = (517 - 516);
    else
        t = (126 - 126);
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
    return (t);
}

void  main () {
    int YH8PZEA [(294 - 289)] [(255 - 250)];
    int b [(915 - 910)];
    int i;
    int CsxJcmw;
    int m;
    int n;
    for (i = (184 - 184); (34 - 29) > i; i++)
        for (CsxJcmw = (1000 - 1000); 5 > CsxJcmw; CsxJcmw++)
            scanf ("%d", &YH8PZEA[i][CsxJcmw]);
    scanf ("%d %d", &m, &n);
    if (change (m, n) == (106 - 105)) {
        {
            i = 16 - 16;
            while (i < 5) {
                b[i] = YH8PZEA[m][i];
                YH8PZEA[m][i] = YH8PZEA[n][i];
                YH8PZEA[n][i] = b[i];
                i++;
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
        for (i = 0; i < 5; i++) {
            {
                CsxJcmw = 0;
                while (CsxJcmw < (288 - 284)) {
                    printf ("%d ", YH8PZEA[i][CsxJcmw]);
                    CsxJcmw = CsxJcmw +1;
                };
            }
            printf ("%d", YH8PZEA[i][(222 - 218)]);
            printf ("\n");
        };
    }
    if (change (m, n) == 0)
        printf ("error");
}

