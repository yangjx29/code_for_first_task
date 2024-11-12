int f (int YZg8uLwMYA, int a [(914 - 813)] [(204 - 103)]) {
    int jB5tk9XhQW;
    int j;
    int EIUkZL;
    int TqUnKkF3ely;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    for (jB5tk9XhQW = (176 - 175); YZg8uLwMYA >= jB5tk9XhQW; jB5tk9XhQW = jB5tk9XhQW + 1) {
        EIUkZL = a[jB5tk9XhQW][(865 - 864)];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (j = (247 - 246); YZg8uLwMYA >= j; j = j + 1)
            if (a[jB5tk9XhQW][j] < EIUkZL)
                EIUkZL = a[jB5tk9XhQW][j];
        {
            j = 239 - 238;
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
            while (YZg8uLwMYA >= j) {
                a[jB5tk9XhQW][j] -= EIUkZL;
                j = j + 1;
            };
        };
    }
    for (jB5tk9XhQW = (898 - 897); jB5tk9XhQW <= YZg8uLwMYA; jB5tk9XhQW = jB5tk9XhQW + 1) {
        EIUkZL = a[(643 - 642)][jB5tk9XhQW];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            j = 225 - 224;
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
            while (YZg8uLwMYA >= j) {
                if (EIUkZL > a[j][jB5tk9XhQW])
                    EIUkZL = a[j][jB5tk9XhQW];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                j++;
            };
        }
        {
            j = 949 - 948;
            while (j <= YZg8uLwMYA) {
                a[j][jB5tk9XhQW] = a[j][jB5tk9XhQW] - EIUkZL;
                j++;
            };
        };
    }
    if (YZg8uLwMYA == (244 - 242))
        return a[(384 - 382)][(920 - 918)];
    else {
        TqUnKkF3ely = a[(585 - 583)][2];
        for (jB5tk9XhQW = (640 - 637); jB5tk9XhQW <= YZg8uLwMYA; jB5tk9XhQW++) {
            a[1][jB5tk9XhQW - 1] = a[1][jB5tk9XhQW];
            a[jB5tk9XhQW - 1][1] = a[jB5tk9XhQW][1];
        }
        {
            jB5tk9XhQW = 3;
            while (jB5tk9XhQW <= YZg8uLwMYA) {
                for (j = 3; j <= YZg8uLwMYA; j++)
                    a[jB5tk9XhQW - 1][j - 1] = a[jB5tk9XhQW][j];
                jB5tk9XhQW++;
            };
        }
        YZg8uLwMYA--;
        return TqUnKkF3ely +f (YZg8uLwMYA, a);
    };
}

int main () {
    int a [(1024 - 923)] [(914 - 813)] = {(907 - 907)};
    int YZg8uLwMYA;
    int jB5tk9XhQW;
    int j;
    int TqUnKkF3ely;
    cin >> YZg8uLwMYA;
    for (TqUnKkF3ely = 1; TqUnKkF3ely <= YZg8uLwMYA; TqUnKkF3ely++) {
        for (jB5tk9XhQW = 1; jB5tk9XhQW <= YZg8uLwMYA; jB5tk9XhQW++) {
            j = 1;
            while (j <= YZg8uLwMYA) {
                cin >> a[jB5tk9XhQW][j];
                j++;
            };
        }
        cout << f (YZg8uLwMYA, a) << endl;
        memset (a, (345 - 345), sizeof (a));
    }
    return 0;
}

