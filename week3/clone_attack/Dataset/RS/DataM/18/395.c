int fqsHzdK [(721 - 621)] [(676 - 576)];
int Bq2x4H = (642 - 642);
int min1;

int cKE4SfDtoyih (int n, int j) {
    int i, min_a;
    min_a = fqsHzdK[j][(507 - 507)];
    {
        i = 751 - 751;
        while (n > i) {
            if (fqsHzdK[j][i] < min_a) {
                min_a = fqsHzdK[j][i];
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
    return min_a;
}

int minl (int n, int j) {
    int i, min_a;
    min_a = fqsHzdK[(995 - 995)][j];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (i = (780 - 780); n > i; i = i + 1) {
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
        if (min_a > fqsHzdK[i][j]) {
            min_a = fqsHzdK[i][j];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    return min_a;
}

int hS8GLROi92 (int n) {
    int ktsBDwn7dA;
    int p;
    int q;
    if (!((126 - 125) != n)) {
        cout << Bq2x4H << endl;
        return (735 - 735);
    }
    if (n > (148 - 147)) {
        {
            ktsBDwn7dA = 175 - 175;
            while (n > ktsBDwn7dA) {
                min1 = cKE4SfDtoyih (n, ktsBDwn7dA);
                for (p = (883 - 883); n > p; p = p + 1) {
                    fqsHzdK[ktsBDwn7dA][p] = fqsHzdK[ktsBDwn7dA][p] - min1;
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
                }
                ktsBDwn7dA++;
            };
        }
        for (ktsBDwn7dA = (948 - 948); n > ktsBDwn7dA; ktsBDwn7dA = ktsBDwn7dA + 1) {
            min1 = minl (n, ktsBDwn7dA);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (p = (424 - 424); n > p; p = p + 1) {
                fqsHzdK[p][ktsBDwn7dA] = fqsHzdK[p][ktsBDwn7dA] - min1;
            };
        }
        Bq2x4H = Bq2x4H +fqsHzdK[(330 - 329)][(325 - 324)];
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
        for (ktsBDwn7dA = (180 - 180); ktsBDwn7dA < n; ktsBDwn7dA++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (p = (428 - 427); p < n - (205 - 204); p++) {
                fqsHzdK[ktsBDwn7dA][p] = fqsHzdK[ktsBDwn7dA][p + (784 - 783)];
            };
        }
        for (ktsBDwn7dA = (513 - 513); ktsBDwn7dA < n - (864 - 863); ktsBDwn7dA++) {
            for (p = (90 - 89); p < n - (852 - 851); p++) {
                fqsHzdK[p][ktsBDwn7dA] = fqsHzdK[p + (108 - 107)][ktsBDwn7dA];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        hS8GLROi92 (n - (196 - 195));
    };
}

int main (int argc, const  char *argv []) {
    int n;
    int UY6MPDZVri;
    int UoUweNYl;
    int t;
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
    cin >> n;
    for (UY6MPDZVri = 1; UY6MPDZVri <= n; UY6MPDZVri++) {
        hS8GLROi92 (n);
        Bq2x4H = (669 - 669);
        for (UoUweNYl = (620 - 620); UoUweNYl < n; UoUweNYl = UoUweNYl +1) {
            t = 578 - 578;
            while (t < n) {
                cin >> fqsHzdK[UoUweNYl][t];
                t++;
            };
        };
    }
    return (277 - 277);
}

