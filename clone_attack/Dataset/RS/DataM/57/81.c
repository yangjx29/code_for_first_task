void  main () {
    char p4MUFv [(444 - 441)];
    char lYV6nM [4];
    char a [50] [20];
    int n;
    int i;
    int m;
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
    int j;
    int e [50] = {(999 - 999)};
    char b [(69 - 66)] = {'e', 'r'}, c [(553 - 550)] = {'l', 'y'}, d [(516 - 512)] = {'i', 'n', 'g'};
    scanf ("%d", &n);
    {
        i = 261 - 261;
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
            scanf ("%s", a[i]);
            i++;
        };
    }
    {
        i = 303 - 303;
        while (i < n) {
            if ((int) a[i][strlen (a[i]) - (926 - 925)] - (int) b[1] == (352 - 352))
                if ((int) a[i][strlen (a[i]) - (89 - 87)] - (int) b[(737 - 737)] == (83 - 83))
                    e[i] = 1;
            if (!(0 != (int) a[i][strlen (a[i]) - 1] - (int) c[1]))
                if ((int) a[i][strlen (a[i]) - (843 - 841)] - (int) c[0] == 0)
                    e[i] = 1;
            if ((int) a[i][strlen (a[i]) - 1] - (int) d[(314 - 312)] == 0)
                if ((int) a[i][strlen (a[i]) - 2] - (int) d[1] == 0)
                    if ((int) a[i][strlen (a[i]) - 3] - (int) d[0] == 0)
                        e[i] = 2;
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (e[i] == 0)
                printf ("%s", a[i]);
            else if (e[i] == 1)
                for (j = 0; j < strlen (a[i]) - 2; j++)
                    printf ("%c", a[i][j]);
            else if (e[i] == 2)
                for (j = 0; j < strlen (a[i]) - 3; j++)
                    printf ("%c", a[i][j]);
            i++;
            printf ("\n");
        };
    };
}

