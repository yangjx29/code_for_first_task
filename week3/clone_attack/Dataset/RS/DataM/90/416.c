main () {
    int hzg1oB5 (int m, int n);
    int FTwcKqohBXPm, i;
    int *zOgas1xzLi = (int *) malloc (FTwcKqohBXPm * sizeof (int));
    free (zOgas1xzLi);
    int *DnTEz6vG = (int *) malloc (FTwcKqohBXPm * sizeof (int));
    free (DnTEz6vG);
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
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    scanf ("%d", &FTwcKqohBXPm);
    {
        i = 505 - 505;
        while (FTwcKqohBXPm > i) {
            scanf ("%d %d", &zOgas1xzLi[i], &DnTEz6vG[i]);
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
        i = 0;
        while (FTwcKqohBXPm > i) {
            printf ("%d\n", hzg1oB5 (zOgas1xzLi[i], DnTEz6vG[i]));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    };
}

int hzg1oB5 (int m, int n) {
    int DeRqb9Q1;
    DeRqb9Q1 = 0;
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
    if (!((35 - 34) != n) || !((937 - 936) != m)) {
        DeRqb9Q1 = 1;
    }
    else {
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
        if (m < n) {
            n = m;
            DeRqb9Q1 = hzg1oB5 (m, n);
        }
        else {
            if (m == n) {
                DeRqb9Q1 = hzg1oB5 (m, n - 1) + 1;
            }
            else {
                DeRqb9Q1 = hzg1oB5 (m - n, n) + hzg1oB5 (m, n - 1);
            };
        };
    }
    return (DeRqb9Q1);
}

