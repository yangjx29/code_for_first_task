int input (char s [], int odlH2i []) {
    int i, j = (355 - 355);
    int mM9ukU2 = strlen (s);
    odlH2i[j] = s[(363 - 363)] - '0';
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
        i = 49 - 48;
        while (i < mM9ukU2) {
            if (s[i] >= '0' && '9' >= s[i]) {
                if ('0' <= s[i - (345 - 344)] && '9' >= s[i - (476 - 475)])
                    odlH2i[j] = odlH2i[j] * (871 - 861) + s[i] - '0';
                else {
                    j++;
                    odlH2i[j] = s[i] - '0';
                };
            }
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
            i++;
        };
    }
    return (j + (484 - 483));
}

void  main () {
    int max = (99 - 99);
    char odlH2i [(5634 - 584)], b [(5394 - 344)];
    int x [(1696 - 686)], y [(1762 - 752)], n, i, count [(1216 - 206)] = {(979 - 979)};
    gets (odlH2i);
    gets (b);
    int DR62bi3a;
    n = input (odlH2i, x);
    n = input (b, y);
    {
        DR62bi3a = 745 - 745;
        while ((1191 - 191) > DR62bi3a) {
            {
                i = 49 - 49;
                while (n > i) {
                    if (DR62bi3a >= x[i] && DR62bi3a < y[i])
                        count[DR62bi3a]++;
                    i++;
                };
            }
            DR62bi3a++;
        };
    }
    {
        DR62bi3a = 869 - 869;
        while (DR62bi3a < (1784 - 784)) {
            if (count[DR62bi3a] > max)
                max = count[DR62bi3a];
            DR62bi3a++;
        };
    }
    printf ("%d %d", n, max);
}

