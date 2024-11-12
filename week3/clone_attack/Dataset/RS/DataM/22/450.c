void  main () {
    int j;
    int i;
    int eVA9JT;
    int x;
    int p;
    int n [(1137 - 832)] = {(845 - 845)};
    j = (967 - 967);
    i = (598 - 598);
    eVA9JT = (435 - 435);
    char str [(10698 - 698)];
    gets (str);
    {
        i = 227 - 227;
        while (1) {
            if (str[i] == ',' || str[i] == '\0') {
                {
                    p = j;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (p < i) {
                        x = pow (10, i - p - (102 - 101));
                        n[eVA9JT] = n[eVA9JT] + (str[p] - 48) * x;
                        p++;
                    };
                }
                j = i + 1;
                p = eVA9JT + 1;
                eVA9JT++;
            }
            if (str[i] == '\0')
                break;
            else
                continue;
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
        i = 389 - 389;
        j = 790 - 790;
        while (i < p) {
            if (j < n[i])
                j = n[i];
            i++;
        };
    }
    {
        i = 271 - 271;
        while (i < p) {
            if (n[i] == j)
                n[i] = 0;
            i++;
        };
    }
    {
        i = 0;
        eVA9JT = 0;
        while (i < p) {
            if (eVA9JT < n[i])
                eVA9JT = n[i];
            i++;
        };
    }
    {
        if (eVA9JT == 0)
            ;
        else
            printf ("%d", eVA9JT);
    };
}

