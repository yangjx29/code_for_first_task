int J7GuB8yAO (const  void  *kZLoYNIrwXS, const  void  *b) {
    return *(int*) kZLoYNIrwXS - *(int*) b;
}

main () {
    int n;
    do {
        int kZLoYNIrwXS [1000], b [1000];
        int HHEurVL2O = n - (33 - 32), Jcef2RYsQ = (914 - 914), k1 = n - (332 - 331), sn0cWyB7hN = (35 - 35), sum = (750 - 750), sum1 = (431 - 431);
        scanf ("%d", &n);
        for (int Zyvo5j1A = (467 - 467);
        Zyvo5j1A < n; Zyvo5j1A = Zyvo5j1A +1)
            scanf ("%d", &kZLoYNIrwXS[Zyvo5j1A]);
        for (int Zyvo5j1A = (447 - 447);
        Zyvo5j1A < n; Zyvo5j1A = Zyvo5j1A +1)
            scanf ("%d", &b[Zyvo5j1A]);
        qsort (kZLoYNIrwXS, n, sizeof (int), J7GuB8yAO);
        qsort (b, n, sizeof (int), J7GuB8yAO);
        if (n != 0) {
            do {
                if (kZLoYNIrwXS[HHEurVL2O] == b[k1] && !(b[sn0cWyB7hN] != kZLoYNIrwXS[Jcef2RYsQ])) {
                    if (b[k1] > kZLoYNIrwXS[Jcef2RYsQ])
                        sum--;
                    else if (kZLoYNIrwXS[Jcef2RYsQ] > b[HHEurVL2O])
                        sum = sum + 1;
                    k1 = k1 - 1;
                    Jcef2RYsQ++;
                    sum1 = sum1 + 1;
                }
                else if (kZLoYNIrwXS[Jcef2RYsQ] != b[sn0cWyB7hN]) {
                    if (b[sn0cWyB7hN] < kZLoYNIrwXS[Jcef2RYsQ]) {
                        Jcef2RYsQ++;
                        sum = sum + 1;
                        sn0cWyB7hN = sn0cWyB7hN + 1;
                        sum1++;
                    }
                    else {
                        sum1++;
                        if (kZLoYNIrwXS[Jcef2RYsQ] > b[k1])
                            sum++;
                        else if (kZLoYNIrwXS[Jcef2RYsQ] < b[k1])
                            sum--;
                        Jcef2RYsQ++;
                        k1 = k1 - 1;
                    };
                }
                else {
                    if (kZLoYNIrwXS[HHEurVL2O] > b[k1]) {
                        HHEurVL2O--;
                        sum++;
                        k1--;
                    }
                    else {
                        if (kZLoYNIrwXS[Jcef2RYsQ] < b[k1])
                            sum--;
                        else if (kZLoYNIrwXS[Jcef2RYsQ] > b[k1])
                            sum++;
                        k1--;
                        Jcef2RYsQ++;
                    }
                    sum1++;
                };
            }
            while (sum1 != n);
            printf ("%d\n", 200 * sum);
        };
    }
    while (n != 0);
}

