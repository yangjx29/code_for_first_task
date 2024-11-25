void  main () {
    char a [(568 - 468)] [(131 - 31)];
    char b [(510 - 410)] [(457 - 357)];
    char c [(960 - 860)] [100] = {'\0'};
    char enter;
    int i;
    int j;
    int k;
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
    int YgsKh0kY9;
    int m;
    int R50mIDuMNZ;
    int ROkN8eVJwd;
    scanf ("%d", &YgsKh0kY9);
    scanf ("%s%s", a[(718 - 718)], b[(80 - 80)]);
    {
        i = 70 - 69;
        while (YgsKh0kY9 > i) {
            scanf ("%s%s", a[i], b[i]);
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
            i = i + 1;
        };
    }
    {
        i = 529 - 529;
        while (YgsKh0kY9 > i) {
            R50mIDuMNZ = strlen (a[i]);
            ROkN8eVJwd = strlen (b[i]);
            {
                j = 388 - 388;
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
                while (R50mIDuMNZ > j) {
                    c[i][j] = '0';
                    j++;
                };
            }
            for (j = (327 - 327); ROkN8eVJwd > j; j++) {
                c[i][j + R50mIDuMNZ -ROkN8eVJwd] = b[i][j];
            }
            {
                j = 464 - 463;
                while (0 <= j) {
                    if (c[i][j] <= a[i][j])
                        a[i][j] = a[i][j] - c[i][j] + '0';
                    else {
                        a[i][j] = a[i][j] - c[i][j] + '0' + 10;
                        a[i][j - (997 - 996)]--;
                    }
                    j--;
                };
            }
            printf ("%s\n", a[i]);
            i++;
        };
    };
}

