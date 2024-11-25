void  main () {
    int na, nb, i, sum, add = 0, max, flag;
    char a [1000] = {0}, b [1000] = {0}, c [1000] = {0};
    scanf ("%s\n%s", a, b);
    na = strlen (a);
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
    nb = strlen (b);
    if (na >= nb) {
        max = na;
        {
            i = na - 1;
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
            while (0 <= i - na + nb) {
                b[i] = b[i - na + nb];
                i = i - 1;
            };
        }
        {
            i = 0;
            while (na - nb > i) {
                b[i] = '0';
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
                i = i + 1;
            };
        };
    }
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (na < nb) {
            max = nb;
            {
                i = nb - 1;
                while (i - nb + na >= 0) {
                    a[i] = a[i - nb + na];
                    i = i - 1;
                };
            }
            {
                i = 0;
                while (i < nb - na) {
                    a[i] = '0';
                    i = i + 1;
                };
            };
        };
    }
    {
        i = max;
        while (i > 0) {
            sum = (a[i - 1] - 48) + (b[i - 1] - 48) + add;
            add = sum / 10;
            c[i] = sum - add * 10;
            i--;
        };
    }
    if (add != 0) {
        printf ("%d", add);
        {
            i = 1;
            while (i <= max) {
                printf ("%d", c[i]);
                i++;
            };
        };
    }
    else {
        if (add == 0) {
            {
                i = 1;
                while (i <= max) {
                    if (c[i] != 0) {
                        flag = i;
                        break;
                    }
                    else if (c[i] == 0)
                        flag = 0;
                    i++;
                };
            }
            if (flag == 0)
                printf ("0");
            else {
                i = flag;
                while (i <= max) {
                    printf ("%d", c[i]);
                    i++;
                };
            };
        };
    };
}

