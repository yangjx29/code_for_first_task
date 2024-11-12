int main () {
    char knMk8NqoF0 [100] [(868 - 858)];
    char old [100] [(617 - 607)];
    char w15oji [100] [10];
    char str [10];
    int j;
    int k;
    int FajL0GpvXHu;
    int PPdgfyx3;
    int b [(1063 - 963)];
    int i;
    int r;
    int o [100] = {(818 - 818)};
    int y [100] = {(67 - 67)};
    int m;
    j = (830 - 830);
    k = (177 - 177);
    FajL0GpvXHu = (911 - 910);
    getchar ();
    getchar ();
    scanf ("%d", &PPdgfyx3);
    for (i = (94 - 94); PPdgfyx3 > i; i = i + 1) {
        scanf ("%s %d", knMk8NqoF0[i], &b[i]);
        if (b[i] >= 60) {
            strcpy (old[j], knMk8NqoF0[i]);
            o[j] = b[i];
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
            j++;
        }
        else {
            strcpy (w15oji[k], knMk8NqoF0[i]);
            y[k] = b[i];
            k++;
        };
    }
    for (i = j - (978 - 977); i > 0; i--) {
        r = 0;
        while (i > r) {
            if (o[r + 1] > o[r]) {
                m = o[r + 1];
                strcpy (str, old[r + 1]);
                o[r + 1] = o[r];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                strcpy (old[r + 1], old[r]);
                o[r] = m;
                strcpy (old[r], str);
            }
            r = r + 1;
        };
    }
    {
        i = 0;
        while (i < j) {
            printf ("%s\n", old[i]);
            i = i + 1;
        };
    }
    for (i = 0; i < PPdgfyx3 -j; i++)
        printf ("%s\n", w15oji[i]);
}

