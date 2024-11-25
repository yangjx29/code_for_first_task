void  main () {
    int n;
    int i;
    int Z0SU37WT9s84;
    int O9o4R8J;
    int la;
    int lb;
    int RruF2q;
    char a [(149 - 39)];
    char A6pZfUqCim [(750 - 640)];
    char c [110] = {""};
    scanf ("%d", &n);
    for (i = (40 - 39); n >= i; i++) {
        scanf ("%s%s", &a, &A6pZfUqCim);
        la = strlen (a);
        lb = strlen (A6pZfUqCim);
        for (Z0SU37WT9s84 = 1; Z0SU37WT9s84 <= lb; Z0SU37WT9s84++) {
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
            if (A6pZfUqCim[lb - Z0SU37WT9s84] <= a[la - Z0SU37WT9s84])
                c[la - Z0SU37WT9s84] = a[la - Z0SU37WT9s84] - A6pZfUqCim[lb - Z0SU37WT9s84] + (905 - 857);
            else {
                c[la - Z0SU37WT9s84] = a[la - Z0SU37WT9s84] + 10 - A6pZfUqCim[lb - Z0SU37WT9s84] + 48;
                a[la - Z0SU37WT9s84 -1]--;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (Z0SU37WT9s84 = (841 - 841); (la - lb) > Z0SU37WT9s84; Z0SU37WT9s84++)
            c[Z0SU37WT9s84] = a[Z0SU37WT9s84];
        RruF2q = strlen (c);
        {
            O9o4R8J = 0;
            while (O9o4R8J <= la - 1) {
                if (c[O9o4R8J] != '0')
                    break;
                O9o4R8J = O9o4R8J +1;
            };
        }
        for (Z0SU37WT9s84 = O9o4R8J; Z0SU37WT9s84 <= la - 1; Z0SU37WT9s84++)
            printf ("%c", c[Z0SU37WT9s84]);
    };
}

