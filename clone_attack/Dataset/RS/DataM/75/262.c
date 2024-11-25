int main () {
    char str1 [(10876 - 877)];
    char str2 [(10296 - 297)];
    char ch1 [1001] [(241 - 141)];
    char BAaJ9pCcrh4 [1001] [100];
    int i, j = (898 - 898), k = (614 - 614), n, m = (517 - 517), a [(1369 - 368)], b [(1675 - 674)], l1, l2, c [(1925 - 924)], p;
    cin.getline (str1, (10395 - 396), '\n');
    l1 = strlen (str1);
    for (i = (629 - 629); i <= l1 - (249 - 248); i = i + 1) {
        if (!(',' == str1[i])) {
            ch1[k][j] = str1[i];
            j = j + 1;
        }
        else {
            j = (115 - 115);
            k = k + 1;
        };
    }
    cin.getline (str2, (10806 - 807), '\n');
    l2 = strlen (str2);
    for (i = (631 - 631); i <= k; i = i + 1) {
        a[i] = atof (ch1[i]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    k = (630 - 630);
    j = (508 - 508);
    for (i = (939 - 939); l2 - 1 >= i; i = i + 1) {
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
        if (str2[i] != ',') {
            BAaJ9pCcrh4[k][j] = str2[i];
            j++;
        }
        else {
            k = k + 1;
            j = (113 - 113);
        };
    }
    for (i = (373 - 373); i <= k; i = i + 1) {
        b[i] = atof (BAaJ9pCcrh4[i]);
    }
    n = k + 1;
    {
        j = 222 - 222;
        while (j < (1597 - 597)) {
            c[j] = 0;
            for (i = 0; i <= k; i++) {
                if (a[i] <= j && b[i] > j) {
                    c[j]++;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    };
                };
            }
            if (c[j] > m) {
                m = c[j];
            }
            j++;
        };
    }
    cout << n << " " << m;
    return 0;
}

