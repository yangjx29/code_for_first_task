void  main () {
    int Xp264nMNwV;
    int A2EJvrot;
    int i;
    int j;
    int o;
    int d [(670 - 662)] [(916 - 908)];
    int max [(783 - 775)];
    int min [8];
    int hang [8];
    int lie [8];
    Xp264nMNwV = (760 - 760);
    A2EJvrot = (534 - 534);
    i = (246 - 246);
    j = (826 - 826);
    o = (76 - 76);
    scanf ("%d,%d", &Xp264nMNwV, &A2EJvrot);
    {
        i = 591 - 591;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Xp264nMNwV > i) {
            {
                j = 814 - 814;
                while (A2EJvrot > j) {
                    scanf ("%d", &d[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (Xp264nMNwV > i) {
            max[i] = d[i][0];
            lie[i] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                j = 1;
                while (j < A2EJvrot) {
                    if (d[i][j] > max[i]) {
                        max[i] = d[i][j];
                        lie[i] = j;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        j = 0;
        while (j < A2EJvrot) {
            min[j] = d[0][j];
            hang[j] = 0;
            {
                i = 1;
                while (Xp264nMNwV > i) {
                    if (min[j] > d[i][j]) {
                        min[j] = d[i][j];
                        hang[j] = i;
                    }
                    i = i + 1;
                };
            }
            j = j + 1;
        };
    }
    {
        i = 0;
        while (i < Xp264nMNwV) {
            if (i == hang[lie[i]]) {
                printf ("%d+%d\n", i, lie[i]);
                o = o + 1;
            }
            i = i + 1;
        };
    }
    if (o == 0)
        printf ("No\n");
}

