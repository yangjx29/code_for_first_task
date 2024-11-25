int BPT5qslBWj (char *p);

void  main () {
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
    for (;;) {
        char WdglFj [11];
        char Tk6cK8U [4];
        int n;
        int AmrETj;
        scanf ("%s", WdglFj);
        if (!('\0' != WdglFj[0]))
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", Tk6cK8U);
        n = BPT5qslBWj (WdglFj);
        WdglFj[0] = '\0';
        for (AmrETj = 0; AmrETj <= n; AmrETj = AmrETj +1)
            printf ("%c", *(WdglFj +AmrETj));
        {
            AmrETj = 0;
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
            while (2 >= AmrETj) {
                printf ("%c", *(Tk6cK8U +AmrETj));
                AmrETj = AmrETj +1;
            };
        }
        for (AmrETj = n + 1; *(WdglFj +AmrETj) != '\0'; AmrETj = AmrETj +1)
            printf ("%c", *(WdglFj +AmrETj));
        printf ("\n");
    };
}

int BPT5qslBWj (char *p) {
    int AmrETj, lfBibN94mv = 0, F2d3Eos;
    for (AmrETj = 0; *(p + AmrETj) != '\0'; AmrETj = AmrETj +1) {
        if (*(p + AmrETj) > lfBibN94mv) {
            lfBibN94mv = *(p + AmrETj);
            F2d3Eos = AmrETj;
        };
    }
    return F2d3Eos;
}

