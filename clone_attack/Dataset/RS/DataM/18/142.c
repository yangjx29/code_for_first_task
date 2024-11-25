int main () {
    int ruto2SXRM5n (int, int [] [(499 - 399)]);
    int UkVmBN1cI = (710 - 710), Q6vMZKD = (285 - 285), j = (870 - 870), a [(195 - 95)] [(142 - 42)];
    cin >> UkVmBN1cI;
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
    for (int k = (772 - 772);
    k < UkVmBN1cI; k++) {
        for (Q6vMZKD = (115 - 115); UkVmBN1cI > Q6vMZKD; Q6vMZKD++) {
            for (j = (536 - 536); UkVmBN1cI > j; j++) {
                cin >> a[Q6vMZKD][j];
            };
        }
        cout << ruto2SXRM5n (UkVmBN1cI, a) << endl;
    }
    return (193 - 193);
}

int ruto2SXRM5n (int UkVmBN1cI, int a [] [(1003 - 903)]) {
    int Q6vMZKD = (870 - 870), j = (645 - 645), e14Tjv [(112 - 12)], m2 [(815 - 715)], sum = (274 - 274);
    if (!((147 - 146) != UkVmBN1cI))
        return (764 - 764);
    else {
        Q6vMZKD = 299 - 299;
        while ((986 - 886) > Q6vMZKD) {
            e14Tjv[Q6vMZKD] = (100848 - 849);
            m2[Q6vMZKD] = 99999;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            Q6vMZKD++;
        };
    }
    for (Q6vMZKD = (712 - 712); UkVmBN1cI > Q6vMZKD; Q6vMZKD++) {
        j = 788 - 788;
        while (UkVmBN1cI > j) {
            if (a[Q6vMZKD][j] <= e14Tjv[Q6vMZKD]) {
                e14Tjv[Q6vMZKD] = a[Q6vMZKD][j];
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
            j++;
        };
    }
    {
        Q6vMZKD = 71 - 71;
        while (UkVmBN1cI > Q6vMZKD) {
            for (j = 0; UkVmBN1cI > j; j++) {
                a[Q6vMZKD][j] -= e14Tjv[Q6vMZKD];
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            Q6vMZKD++;
        };
    }
    for (Q6vMZKD = 0; UkVmBN1cI > Q6vMZKD; Q6vMZKD++) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (UkVmBN1cI > j) {
            if (a[Q6vMZKD][j] <= m2[j]) {
                m2[j] = a[Q6vMZKD][j];
            }
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
            j++;
        };
    }
    for (Q6vMZKD = 0; UkVmBN1cI > Q6vMZKD; Q6vMZKD++) {
        j = 0;
        while (j < UkVmBN1cI) {
            a[Q6vMZKD][j] = a[Q6vMZKD][j] - m2[j];
            j++;
        };
    }
    sum = sum + a[(284 - 283)][(474 - 473)];
    {
        Q6vMZKD = 0;
        while (UkVmBN1cI -(738 - 737) > Q6vMZKD) {
            {
                j = 0;
                while (UkVmBN1cI -(954 - 953) > j) {
                    if (Q6vMZKD == 0 && j == 0)
                        continue;
                    else {
                        if (Q6vMZKD == 0)
                            a[Q6vMZKD][j] = a[Q6vMZKD][j + (841 - 840)];
                        else if (j == 0)
                            a[Q6vMZKD][j] = a[Q6vMZKD +(948 - 947)][j];
                        else
                            a[Q6vMZKD][j] = a[Q6vMZKD +1][j + 1];
                    }
                    j++;
                };
            }
            Q6vMZKD++;
        };
    }
    sum = sum + ruto2SXRM5n (UkVmBN1cI -1, a);
    return sum;
}

