void  main () {
    struct   bingren {
        char id [10];
        int na9Hnf;
    };
    struct   bingren a [100];
    struct   bingren b [100];
    struct   bingren t;
    char xiao [100] [10];
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
    int i, oWNJx6qPzL = (113 - 113), BpP5SlzUVe = (888 - 888), n, n1 = -1, n2 = -1, old = (369 - 369);
    scanf ("%d", &n);
    {
        i = 0;
        while (i < n) {
            scanf ("%s%d", a[i].id, &a[i].na9Hnf);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (a[i].na9Hnf >= (530 - 470)) {
                n1++;
                b[oWNJx6qPzL] = a[i];
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
                oWNJx6qPzL++;
            }
            else {
                n2++;
                strcpy (xiao[BpP5SlzUVe], a[i].id);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                BpP5SlzUVe++;
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n1) {
            for (oWNJx6qPzL = 0; oWNJx6qPzL < n1 - i; oWNJx6qPzL++) {
                if (b[oWNJx6qPzL].na9Hnf < b[oWNJx6qPzL + 1].na9Hnf) {
                    t = b[oWNJx6qPzL];
                    b[oWNJx6qPzL] = b[oWNJx6qPzL + 1];
                    b[oWNJx6qPzL + 1] = t;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i <= n1) {
            printf ("%s\n", b[i].id);
            i++;
        };
    }
    {
        i = 0;
        while (i <= n2) {
            printf ("%s\n", xiao[i]);
            i++;
        };
    };
}

