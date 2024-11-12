struct   Bo {
    int num;
    char auth [30];
}
XwDVs7mq [1010];

void  main () {
    int nvrQadIsg [26] = {0};
    int vVX2WR;
    int n;
    int i;
    int j;
    int max;
    vVX2WR = 0;
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
    char dRGoV45HD;
    scanf ("%d", &n);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= i) {
            scanf ("%d %s", &XwDVs7mq[i].num, XwDVs7mq[i].auth);
            for (j = 0; j <= strlen (XwDVs7mq[i].auth) - 1; j++)
                nvrQadIsg[XwDVs7mq[i].auth[j] - 'A'] = nvrQadIsg[XwDVs7mq[i].auth[j] - 'A'] + 1;
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
        i = 1;
        while (i <= 25) {
            if (nvrQadIsg[i] > nvrQadIsg[vVX2WR])
                vVX2WR = i;
            i = i + 1;
        };
    }
    dRGoV45HD = 'A' + vVX2WR;
    printf ("%c\n", dRGoV45HD);
    printf ("%d\n", nvrQadIsg[vVX2WR]);
    {
        i = 1;
        while (i <= n) {
            if (strchr (XwDVs7mq[i].auth, dRGoV45HD) != NULL)
                printf ("%d\n", XwDVs7mq[i].num);
            i++;
        };
    };
}

