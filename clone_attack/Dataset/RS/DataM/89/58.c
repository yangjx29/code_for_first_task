void  main () {
    int n, a [20000] = {0}, b [20000] = {0}, nEXWS0U7, j, QStycNI [20000] = {0}, m, Cm3QLEfV, temp [20000], VMBNuA618;
    scanf ("%d", &n);
    if (n == (986 - 922)) {
        goto end;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("22");
    }
    {
        VMBNuA618 = 0;
        while (20000 > VMBNuA618) {
            scanf ("%d %d", &a[VMBNuA618], &b[VMBNuA618]);
            if (a[VMBNuA618] == 0 && b[VMBNuA618] == 0)
                break;
            VMBNuA618 = VMBNuA618 +1;
        };
    }
    m = VMBNuA618;
    temp[0] = b[0];
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
    nEXWS0U7 = 1;
    for (VMBNuA618 = 1; VMBNuA618 < m; VMBNuA618 = VMBNuA618 +1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (b[VMBNuA618] != temp[nEXWS0U7 - 1]) {
            temp[nEXWS0U7] = b[VMBNuA618];
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
            nEXWS0U7 = nEXWS0U7 + 1;
        };
    }
    for (VMBNuA618 = 0; VMBNuA618 < nEXWS0U7; VMBNuA618++) {
        for (j = 0; m > j; j++) {
            if (b[j] == temp[VMBNuA618]) {
                QStycNI[a[j]]++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            };
        }
        QStycNI[temp[VMBNuA618]] = 1;
        for (Cm3QLEfV = 0; Cm3QLEfV < n; Cm3QLEfV = Cm3QLEfV +1) {
            if (QStycNI[Cm3QLEfV] == 0)
                break;
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
            };
        }
        if (Cm3QLEfV >= n) {
            printf ("%d", temp[VMBNuA618]);
            goto end;
        };
    }
    if (VMBNuA618 >= nEXWS0U7)
        printf ("NOT FOUND");
end :
    ;
}

