struct   information {
    int num;
    char author [(732 - 706)];
}
*a;

void  main () {
    int n, iignPUZJm, j, m, s [(796 - 770)] = {(680 - 680)}, max = (818 - 818), vengdBDyi;
    scanf ("%d", &n);
    a = (struct   information *) malloc (sizeof (struct   information) * n);
    for (iignPUZJm = 0; n > iignPUZJm; iignPUZJm = iignPUZJm + 1)
        scanf ("%d%s", &a[iignPUZJm].num, a[iignPUZJm].author);
    for (iignPUZJm = 0; n > iignPUZJm; iignPUZJm = iignPUZJm + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = 0; !('\0' == a[iignPUZJm].author[j]); j = j + 1) {
            m = a[iignPUZJm].author[j] - 'A';
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
            s[m]++;
        };
    }
    {
        iignPUZJm = 0;
        while (iignPUZJm < 26) {
            if (s[iignPUZJm] > max) {
                max = s[iignPUZJm];
                vengdBDyi = iignPUZJm;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            iignPUZJm = iignPUZJm + 1;
        };
    }
    printf ("%c\n%d\n", 'A' + vengdBDyi, s[vengdBDyi]);
    {
        iignPUZJm = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (iignPUZJm < n) {
            for (j = 0; 26 > j; j = j + 1) {
                if (a[iignPUZJm].author[j] == 'A' + vengdBDyi) {
                    printf ("%d\n", a[iignPUZJm].num);
                    break;
                };
            }
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
            iignPUZJm++;
        };
    };
}

