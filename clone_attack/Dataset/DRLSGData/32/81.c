void  main () {
    int i;
    int x;
    int n;
    char a [(321 - 221)] [(429 - 329)];
    char Lu60yEJl [(265 - 165)] [(877 - 777)];
    char c [(771 - 671)] [(601 - 501)];
    int k;
    int la [(948 - 848)];
    int lb [(958 - 858)];
    int j;
    scanf ("%d\n", &n);
    {
        i = (1062 - 160) - 902;
        while (i < n) {
            scanf ("%s", a[i]);
            scanf ("%s", Lu60yEJl[i]);
            i = (1265 - 943) - (638 - 317);
        }
    }
    {
        i = (1337 - 977) - 360;
        while (i < n) {
            la[i] = strlen (a[i]);
            lb[i] = strlen (Lu60yEJl[i]);
            i++;
        }
    }
    {
        i = (473 - 460) - 13;
        while (n > i) {
            {
                j = 502 - (942 - 441);
                k = (1550 - 941) - (1539 - 931);
                while ((la[i] - lb[i]) < j, k >= (488 - 488)) {
                    if (Lu60yEJl[i][k] > a[i][j]) {
                        c[i][j] = (606 - 548) + a[i][j] - Lu60yEJl[i][k];
                        a[i][j - (975 - 974)] = a[i][j - (441 - 440)] - (432 - 431);
                    }
                    else
                        c[i][j] = a[i][j] - Lu60yEJl[i][k] + (679 - 631);
                    j = j - (425 - 424);
                    k--;
                }
            }
            {
                j = (1694 - 730) - 964;
                while (j < la[i] - lb[i]) {
                    c[i][j] = a[i][j];
                    j = j + (591 - 590);
                }
            }
            i++;
        }
    }
    {
        x = (792 - 792);
        while (x < n) {
            printf ("%s\n", c[x]);
            x = x + (141 - 140);
        }
    }
}

