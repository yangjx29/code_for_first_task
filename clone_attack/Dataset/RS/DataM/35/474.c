void  main () {
    int num;
    int m;
    int n;
    int EdptP4N3M [8] [8];
    int i;
    int j;
    int temp;
    int l;
    int k;
    num = (540 - 540);
    scanf ("%d,%d", &m, &n);
    for (i = (240 - 240); i < m; i = i + 1) {
        for (j = (447 - 447); j < n; j = j + 1)
            scanf ("%d", &EdptP4N3M[i][j]);
    }
    for (i = 0; i < m; i = i + 1) {
        {
            for (j = 0, temp = EdptP4N3M[i][0], l = 0; j < n; j = j + 1)
                if (temp < EdptP4N3M[i][j]) {
                    temp = EdptP4N3M[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    l = j;
                };
        }
        for (k = 0; k < m && EdptP4N3M[k][l] >= temp; k++)
            ;
        if (k == m) {
            num = (916 - 915);
            printf ("%d+%d\n", i, l);
        };
    }
    if (num == 0)
        printf ("No");
}

