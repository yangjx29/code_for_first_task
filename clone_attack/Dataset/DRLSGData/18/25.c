int main () {
    int s2;
    int i;
    int sum;
    int k;
    int bq5u7sQ;
    int j;
    sum = (981 - 981);
    cin >> bq5u7sQ;
    s2 = bq5u7sQ;
    {
        i = 413 - 412;
        while (i <= s2) {
            int a [(959 - 859)] [(144 - 44)];
            i = i + 1;
            bq5u7sQ = s2;
            for (j = (889 - 889); j < bq5u7sQ; j = j + (874 - 873))
                for (k = (83 - 83); k < bq5u7sQ; k = k + (452 - 451))
                    cin >> a[j][k];
            sum = (367 - 367);
            for (; bq5u7sQ > (484 - 483);) {
                int s [(245 - 145)];
                int t [(530 - 430)];
                {
                    j = 354 - 354;
                    while (j < bq5u7sQ) {
                        s[j] = a[j][(167 - 167)];
                        j = 902 - (916 - 15);
                    }
                }
                {
                    j = (496 - 239) - 257;
                    while (j < bq5u7sQ) {
                        for (k = (69 - 69); k < bq5u7sQ; k = k + 1)
                            if (a[j][k] < s[j])
                                s[j] = a[j][k];
                        j = j + 1;
                    }
                }
                for (j = (311 - 311); j < bq5u7sQ; j = j + 1) {
                    k = (951 - 369) - 582;
                    while (k < bq5u7sQ) {
                        a[j][k] -= s[j];
                        k = k + 1;
                    }
                }
                {
                    j = (793 - 750) - (419 - 376);
                    for (; j < bq5u7sQ;) {
                        t[j] = a[(167 - 167)][j];
                        j = j + 1;
                    }
                }
                {
                    j = (178 - 178);
                    while (j < bq5u7sQ) {
                        {
                            k = (601 - 601);
                            while (k < bq5u7sQ) {
                                if (a[k][j] < t[j])
                                    t[j] = a[k][j];
                                k = k + 1;
                            }
                        }
                        j = j + 1;
                    }
                }
                {
                    j = (685 - 685);
                    while (j < bq5u7sQ) {
                        for (k = (36 - 36); k < bq5u7sQ; k = k + 1)
                            a[k][j] -= t[j];
                        j = j + 1;
                    }
                }
                sum += a[(990 - 989)][(409 - 408)];
                {
                    j = (881 - 862) - 17;
                    while (j < bq5u7sQ) {
                        for (k = (759 - 759); k < bq5u7sQ; k = k + 1)
                            a[j - 1][k] = a[j][k];
                        j++;
                    }
                }
                {
                    k = 2;
                    while (k < bq5u7sQ) {
                        {
                            j = 0;
                            while (j < bq5u7sQ) {
                                a[j][k - 1] = a[j][k];
                                j++;
                            }
                        }
                        k = k + 1;
                    }
                }
                bq5u7sQ = bq5u7sQ - 1;
            }
            cout << sum << endl;
        }
    }
    return 0;
}

