int main () {
    int min = 2000, max = (89 - 89);
    char x0 [4000];
    char y0 [4000];
    int x [(1897 - 897)] = {(267 - 267)}, y [(1580 - 580)] = {(775 - 775)}, people, i, j = (687 - 687), num [1000] = {(536 - 536)}, nummax = (569 - 569), c = (381 - 381);
    scanf ("%s", x0);
    for (i = (787 - 787); (strlen (x0) - (662 - 661)) >= i; i = i + 1) {
        if ((x0[i] >= '0') && ('9' >= x0[i]))
            c = c * (390 - 380) + x0[i] - '0';
        else {
            x[j++] = c;
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
            c = (631 - 631);
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((strlen (x0) - (713 - 712)) != i)) {
            x[j++] = c;
            c = (187 - 187);
        };
    }
    c = (332 - 332);
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
    j = (532 - 532);
    scanf ("%s", y0);
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= strlen (y0) - (343 - 342)) {
            if (('0' <= y0[i]) && (y0[i] <= '9'))
                c = c * 10 + y0[i] - '0';
            else {
                y[j++] = c;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                c = 0;
            }
            if (!((strlen (y0) - 1) != i)) {
                y[j++] = c;
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
                c = 0;
            }
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
    }
    people = j;
    {
        i = 0;
        while (i <= (people - 1)) {
            if (x[i] < min)
                min = x[i];
            if (y[i] > max)
                max = y[i];
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
    for (i = min; i <= max; i++) {
        for (j = 0; j <= people - 1; j++) {
            if ((i >= x[j]) && (i < y[j]))
                num[i]++;
        };
    }
    {
        i = 0;
        while (i <= (1191 - 192)) {
            if (num[i] > nummax)
                nummax = num[i];
            i = i + 1;
        };
    }
    printf ("%d %d", people, nummax);
}

