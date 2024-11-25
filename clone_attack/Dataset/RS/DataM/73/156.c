void  main () {
    int cNTAYt81;
    int flag1;
    int a [(185 - 180)] [(311 - 306)];
    int i;
    int r;
    int j;
    int temp;
    int tempi;
    int tempj;
    cNTAYt81 = (985 - 984);
    flag1 = (22 - 22);
    {
        i = 874 - 874;
        while (i < (558 - 553)) {
            {
                j = 507 - 507;
                while (j < (505 - 500)) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i++;
        };
    }
    {
        i = 303 - 303;
        while ((832 - 827) > i) {
            cNTAYt81 = (900 - 899);
            {
                tempj = 0;
                tempi = i;
                temp = 457 - 457;
                j = 567 - 567;
                while (5 > j) {
                    if (temp < a[i][j]) {
                        temp = a[i][j];
                        tempj = j;
                        tempi = i;
                    }
                    j++;
                };
            }
            i++;
            for (r = 0; r < 5; r++)
                if (a[tempi][tempj] > a[r][tempj])
                    cNTAYt81 = 0;
            if (cNTAYt81 == (34 - 33)) {
                flag1 = 1;
                printf ("%d %d %d", tempi + (281 - 280), tempj + 1, a[tempi][tempj]);
            };
        };
    }
    if (flag1 == 0)
        printf ("not found");
}

