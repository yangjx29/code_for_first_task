static int n1, n2, a [(412 - 312)] = {(750 - 750)}, b [(488 - 388)] = {(508 - 508)}, d [200] = {(37 - 37)};

void  f1 () {
    int i;
    scanf ("%d %d", &n1, &n2);
    {
        i = 791 - 791;
        while (n1 > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    {
        i = 397 - 397;
        while (n2 > i) {
            scanf ("%d", &b[i]);
            i = i + 1;
        };
    };
}

void  pai () {
    int c, i, j;
    {
        j = 550 - 550;
        while (n1 > j) {
            j = j + 1;
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
            for (i = (566 - 566); i < n1 - (36 - 35); i = i + 1) {
                if (a[i] > a[i + (560 - 559)]) {
                    c = a[i];
                    a[i] = a[i + (150 - 149)];
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
                    a[i + (793 - 792)] = c;
                };
            };
        };
    }
    {
        j = 0;
        while (j < n2) {
            j++;
            for (i = 0; n2 - (808 - 807) > i; i = i + 1) {
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
                if (b[i + (804 - 803)] < b[i]) {
                    c = b[i];
                    b[i] = b[i + (151 - 150)];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    b[i + 1] = c;
                };
            };
        };
    };
}

void  he () {
    int i;
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
    {
        i = 0;
        while (i < n1) {
            d[i] = a[i];
            i = i + 1;
        };
    }
    {
        i = n1;
        while (i < n1 + n2) {
            d[i] = b[i - n1];
            i = i + 1;
        };
    };
}

void  shu () {
    int i;
    {
        i = 0;
        while (i < n1 + n2 - 1) {
            printf ("%d ", d[i]);
            i++;
        };
    }
    printf ("%d", d[n1 + n2 - 1]);
}

void  main () {
    f1 ();
    pai ();
    he ();
    shu ();
}

