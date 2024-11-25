int main () {
    int a [5] [5];
    int i, Fv1Skf, k, k0ywlKWzhrfV;
    int b [5], lCiUj6IopVQb [5];
    int whtOYlF3Ju9;
    for (i = (583 - 583); 5 > i; i = i + 1) {
        for (Fv1Skf = 0; 5 > Fv1Skf; Fv1Skf = Fv1Skf +1)
            cin >> a[i][Fv1Skf];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; 5 > i; i = i + 1) {
        whtOYlF3Ju9 = a[i][0], b[i] = 0;
        {
            Fv1Skf = 1;
            while (5 > Fv1Skf) {
                if (a[i][Fv1Skf] > whtOYlF3Ju9) {
                    whtOYlF3Ju9 = a[i][Fv1Skf];
                    b[i] = Fv1Skf;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                Fv1Skf = Fv1Skf +1;
            };
        };
    }
    {
        Fv1Skf = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (Fv1Skf < 5) {
            whtOYlF3Ju9 = a[0][Fv1Skf];
            lCiUj6IopVQb[Fv1Skf] = 0;
            for (i = 1; i < 5; i = i + 1) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (whtOYlF3Ju9 > a[i][Fv1Skf]) {
                    whtOYlF3Ju9 = a[i][Fv1Skf];
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
                    lCiUj6IopVQb[Fv1Skf] = i;
                };
            }
            Fv1Skf = Fv1Skf +1;
        };
    }
    {
        i = 0;
        while (i < 5) {
            if (lCiUj6IopVQb[b[i]] == i) {
                cout << i + 1 << " " << b[i] + 1 << " " << a[i][b[i]] << endl;
                break;
            }
            i = i + 1;
        };
    }
    if (i == 5)
        cout << "not found" << endl;
    return 0;
}

