main () {
    double  a;
    double  seZg7K1R4;
    double  IEACcX;
    double  a1;
    double  a2;
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
    int wagzf3NPw;
    int I3uwHD;
    I3uwHD = 1;
    scanf ("%d", &wagzf3NPw);
    for (; I3uwHD <= wagzf3NPw;) {
        I3uwHD = I3uwHD +1;
        scanf ("%lf %lf %lf", &a, &seZg7K1R4, &IEACcX);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        a1 = -seZg7K1R4 / (2 * a);
        if (a1 == 0)
            a1 = 0;
        else
            a1 = -seZg7K1R4 / (2 * a);
        if ((seZg7K1R4 * seZg7K1R4 - 4 * a * IEACcX) == 0) {
            printf ("x1=x2=%.5lf\n", a1);
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
            a2 = 0;
        }
        else if ((seZg7K1R4 * seZg7K1R4 - 4 * a * IEACcX) < 0) {
            a2 = (sqrt (4 * a * IEACcX -seZg7K1R4 * seZg7K1R4)) / (2 * a);
            printf ("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n", a1, a2, a1, a2);
        }
        else if ((seZg7K1R4 * seZg7K1R4 - 4 * a * IEACcX) > 0) {
            a2 = (sqrt (seZg7K1R4 * seZg7K1R4 - 4 * a * IEACcX)) / (2 * a);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            printf ("x1=%.5lf;x2=%.5lf\n", a1 + a2, a1 - a2);
        };
    };
}

