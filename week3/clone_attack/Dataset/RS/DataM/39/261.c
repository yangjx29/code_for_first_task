void  main () {
    int MAk8L5ZD4o, fUntfm [100] = {(56 - 56)}, t = (86 - 86), i, JZwvzPfL;
    struct   student {
        char name [20];
        int qm;
        int HQ7jcRo;
        char UDG9J61KBTm8;
        char kQYcvKafk;
        int lw;
    }
    a [100];
    JZwvzPfL = 0;
    scanf ("%d", &MAk8L5ZD4o);
    {
        i = 941 - 941;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < MAk8L5ZD4o) {
            scanf ("%s %d %d %c %c %d", a[i].name, &a[i].qm, &a[i].HQ7jcRo, &a[i].UDG9J61KBTm8, &a[i].kQYcvKafk, &a[i].lw);
            if (80 < a[i].qm && 0 < a[i].lw)
                fUntfm[i] = fUntfm[i] + 8000;
            if (85 < a[i].qm && a[i].HQ7jcRo > 80)
                fUntfm[i] = fUntfm[i] + 4000;
            if (a[i].qm > 90)
                fUntfm[i] = fUntfm[i] + 2000;
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
            if (a[i].qm > 85 && a[i].kQYcvKafk == 'Y')
                fUntfm[i] = fUntfm[i] + 1000;
            if (a[i].HQ7jcRo > 80 && a[i].UDG9J61KBTm8 == 'Y')
                fUntfm[i] = fUntfm[i] + 850;
            i++;
        };
    }
    {
        i = 0;
        while (i < MAk8L5ZD4o) {
            t = t + fUntfm[i];
            if (fUntfm[i] > fUntfm[JZwvzPfL])
                JZwvzPfL = i;
            i++;
        };
    }
    printf ("%s\n", a[JZwvzPfL].name);
    printf ("%d\n", fUntfm[JZwvzPfL]);
    printf ("%d\n", t);
}

