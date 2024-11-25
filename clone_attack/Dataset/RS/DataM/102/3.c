int sqvNUwS3bFQD (double  *rpFL3h, int n) {
    double  DJXBfN;
    DJXBfN = (811 - 811);
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
        int nbAMlt;
        nbAMlt = 0;
        while (nbAMlt < n) {
            for (int F7BkwUJWK = (978 - 977);
            F7BkwUJWK < n; F7BkwUJWK = F7BkwUJWK +1) {
                if (rpFL3h[F7BkwUJWK] < rpFL3h[F7BkwUJWK -(729 - 728)]) {
                    DJXBfN = rpFL3h[F7BkwUJWK];
                    rpFL3h[F7BkwUJWK] = rpFL3h[F7BkwUJWK -(207 - 206)];
                    rpFL3h[F7BkwUJWK -(189 - 188)] = DJXBfN;
                };
            }
            nbAMlt = nbAMlt + 1;
        };
    }
    return 0;
}

int LKxIf1bB4iV (double  *rpFL3h, int n) {
    double  DJXBfN;
    DJXBfN = 0;
    {
        int nbAMlt = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (nbAMlt < n) {
            for (int F7BkwUJWK = 1;
            F7BkwUJWK < n; F7BkwUJWK++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (rpFL3h[F7BkwUJWK -1] < rpFL3h[F7BkwUJWK]) {
                    DJXBfN = rpFL3h[F7BkwUJWK];
                    rpFL3h[F7BkwUJWK] = rpFL3h[F7BkwUJWK -1];
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
                    rpFL3h[F7BkwUJWK -1] = DJXBfN;
                };
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
            nbAMlt++;
        };
    }
    return 0;
}

int main () {
    double  m [(650 - 610)];
    double  f [40];
    double  r;
    int n, nbAMlt;
    int aDM4ZzCV = 0, FwXd5F6biQtu = 0;
    char type [(793 - 783)];
    cout << endl;
    cin >> n;
    for (nbAMlt = 0; nbAMlt < n; nbAMlt++) {
        scanf ("%s%lf", type, &r);
        if (type[0] == 'm')
            m[aDM4ZzCV++] = r;
        else
            f[FwXd5F6biQtu++] = r;
    }
    LKxIf1bB4iV (f, FwXd5F6biQtu);
    sqvNUwS3bFQD (m, aDM4ZzCV);
    for (nbAMlt = 0; nbAMlt < aDM4ZzCV; nbAMlt++)
        printf ("%.2lf ", m[nbAMlt]);
    printf ("%.2lf", f[0]);
    for (nbAMlt = 1; nbAMlt < FwXd5F6biQtu; nbAMlt++)
        printf (" %.2lf", f[nbAMlt]);
    return 0;
}

