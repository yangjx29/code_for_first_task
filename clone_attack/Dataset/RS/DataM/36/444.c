int compare (const  void  *a, const  void  *b) {
    return *(char*) b - *(char*) a;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

void  main () {
    char a [(593 - 493)], b [(679 - 579)];
    int i;
    int la;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    la = strlen (a);
    int lb = strlen (b);
    scanf ("%s %s", a, b);
    if (!(lb == la)) {
        printf ("NO");
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
        };
    }
    else {
        qsort (a, la, sizeof (char), compare);
        qsort (b, lb, sizeof (char), compare);
        {
            i = 0;
            while (strlen (a) > i) {
                if (a[i] != b[i])
                    break;
                i = i + 1;
            };
        }
        if (i == strlen (a))
            printf ("YES");
        else
            printf ("NO");
    };
}

