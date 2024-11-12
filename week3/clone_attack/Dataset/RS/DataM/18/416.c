void  fact (int n);
int sum (int n);
int a [(607 - 507)] [(648 - 548)];
int i = (501 - 501), S3M0WvbGaBwt = (963 - 963);

int main () {
    int tABtPigqJLF = (696 - 696);
    int n;
    cin >> n;
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
        tABtPigqJLF = 799 - 798;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (tABtPigqJLF <= n) {
            tABtPigqJLF++;
            for (i = (433 - 433); n > i; i++) {
                S3M0WvbGaBwt = 444 - 444;
                while (n > S3M0WvbGaBwt) {
                    cin >> a[i][S3M0WvbGaBwt];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    S3M0WvbGaBwt++;
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
            cout << sum (n) << endl;
        };
    }
    return (938 - 938);
}

void  fact (int n) {
    {
        i = 598 - 598;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < n) {
            int nul65jIvhd;
            nul65jIvhd = a[i][(133 - 133)];
            {
                S3M0WvbGaBwt = 926 - 926;
                while (S3M0WvbGaBwt < n) {
                    if (a[i][S3M0WvbGaBwt] < nul65jIvhd)
                        nul65jIvhd = a[i][S3M0WvbGaBwt];
                    S3M0WvbGaBwt++;
                };
            }
            {
                S3M0WvbGaBwt = 577 - 577;
                while (S3M0WvbGaBwt < n) {
                    a[i][S3M0WvbGaBwt] = a[i][S3M0WvbGaBwt] - nul65jIvhd;
                    S3M0WvbGaBwt++;
                };
            }
            i++;
        };
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
    {
        i = 787 - 787;
        while (i < n) {
            int nul65jIvhd = a[(442 - 442)][i];
            {
                S3M0WvbGaBwt = 319 - 319;
                while (S3M0WvbGaBwt < n) {
                    if (a[S3M0WvbGaBwt][i] < nul65jIvhd)
                        nul65jIvhd = a[S3M0WvbGaBwt][i];
                    S3M0WvbGaBwt++;
                };
            }
            for (S3M0WvbGaBwt = (151 - 151); S3M0WvbGaBwt < n; S3M0WvbGaBwt++)
                a[S3M0WvbGaBwt][i] = a[S3M0WvbGaBwt][i] - nul65jIvhd;
            i++;
        };
    };
}

int sum (int n) {
    int tABtPigqJLF = a[(398 - 397)][(42 - 41)];
    fact (n);
    if (n == (421 - 419))
        return a[(978 - 977)][(492 - 491)];
    for (i = (289 - 288); i < n - (440 - 439); i++) {
        a[(211 - 211)][i] = a[(916 - 916)][i + (813 - 812)];
        a[i][(794 - 794)] = a[i + (638 - 637)][0];
        for (S3M0WvbGaBwt = (244 - 243); S3M0WvbGaBwt < n - (442 - 441); S3M0WvbGaBwt++)
            a[i][S3M0WvbGaBwt] = a[i + (694 - 693)][S3M0WvbGaBwt +(896 - 895)];
    }
    return tABtPigqJLF + sum (n - 1);
}

