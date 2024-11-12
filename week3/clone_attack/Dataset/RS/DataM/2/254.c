void  main () {
    int i;
    int j;
    int aJtVBH;
    int a [(576 - 550)] [999];
    int num [26] = {(998 - 998)};
    int t;
    int max;
    char zz [27];
    max = 0;
    scanf ("%d", &aJtVBH);
    for (i = (786 - 786); aJtVBH > i; i = i + 1) {
        scanf ("%d%s", &t, zz);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; strlen (zz) > j; j++) {
            a[(int) (zz[j] - 'A')][num[(int) (zz[j] - 'A')]] = t;
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
            num[(int) (zz[j] - 'A')]++;
        };
    }
    for (i = 0; 26 > i; i++) {
        if (num[max] < num[i])
            max = i;
    }
    printf ("%c\n%d\n", max + 'A', num[max]);
    for (i = 0; i < num[max]; i++)
        printf ("%d\n", a[max][i]);
}

