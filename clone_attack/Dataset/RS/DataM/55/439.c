void  main () {
    char a [32] = {0};
    char b [32] = {0};
    long  int n = 0;
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
    int p5gufE, k, j1, j2;
    scanf ("%d%s%d", &j1, a, &j2);
    for (p5gufE = 0; a[p5gufE] != 0; p5gufE = p5gufE + 1)
        if ('0' <= a[p5gufE] && a[p5gufE] <= '9')
            n = n * j1 + a[p5gufE] - '0';
        else if (a[p5gufE] >= 'A' && 'Z' >= a[p5gufE])
            n = n * j1 + a[p5gufE] - 'A' + 10;
        else if (a[p5gufE] >= 'a' && a[p5gufE] <= 'z')
            n = n * j1 + a[p5gufE] - 'a' + 10;
    if (n == 0)
        ;
    else {
        for (p5gufE = 0; p5gufE <= 31, n > 0; p5gufE++) {
            k = n % j2;
            if (k < 10)
                b[p5gufE] = k + '0';
            else
                b[p5gufE] = k - 10 + 'A';
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
            n = n / j2;
        }
        p5gufE = 31;
        for (; b[p5gufE] == 0;)
            p5gufE = p5gufE - 1;
        for (; p5gufE >= 0; p5gufE = p5gufE - 1)
            printf ("%c", b[p5gufE]);
    };
}

