int main () {
    double  F1oHjWeM3V [100];
    double  Ta91srW [100] = {0};
    double  w [100] = {0};
    double  kLV1rQS [100] = {0};
    double  dD2SsQo4f [100] = {0};
    double  l [100] = {0};
    double  u [100] = {0};
    double  a [100];
    double  SxR4zV [100];
    double  HJByvwxQ5 [100];
    double  t;
    double  g;
    double  f;
    double  r;
    double  GuY4i82;
    double  sUaHnpyo0dc;
    double  nVH04IQZc8O;
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
    int i;
    int j;
    int t6xGTUXhyYW;
    int jf9AgUz2j74h;
    int q;
    int n;
    i = (99 - 99);
    j = 0;
    t6xGTUXhyYW = 0;
    jf9AgUz2j74h = -(816 - 815);
    q = -(301 - 300);
    t6xGTUXhyYW = 0;
    cin >> n;
    for (i = 0; i < n; i = i + 1)
        cin >> a[i] >> SxR4zV[i] >> HJByvwxQ5[i];
    {
        i = 0;
        while (i < n * (n - 1) / (538 - 536)) {
            F1oHjWeM3V[i] = 0;
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
            i = i + 1;
        };
    }
    for (i = 0; n - 1 > i; i = i + 1)
        for (j = i + 1; j < n; j = j + 1) {
            F1oHjWeM3V[t6xGTUXhyYW] = sqrt ((a[i] - a[j]) * (a[i] - a[j]) + (SxR4zV[i] - SxR4zV[j]) * (SxR4zV[i] - SxR4zV[j]) + (HJByvwxQ5[i] - HJByvwxQ5[j]) * (HJByvwxQ5[i] - HJByvwxQ5[j]));
            Ta91srW[t6xGTUXhyYW] = a[i];
            w[t6xGTUXhyYW] = a[j];
            u[t6xGTUXhyYW] = SxR4zV[i];
            l[t6xGTUXhyYW] = SxR4zV[j];
            kLV1rQS[t6xGTUXhyYW] = HJByvwxQ5[i];
            dD2SsQo4f[t6xGTUXhyYW] = HJByvwxQ5[j];
            t6xGTUXhyYW = t6xGTUXhyYW + 1;
        }
    for (i = 0; i < (n * (n - 1) / 2) - 1; i = i + 1) {
        j = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j < (n * (n - 1) / 2) - i - 1) {
            if (F1oHjWeM3V[j + 1] > F1oHjWeM3V[j]) {
                t = F1oHjWeM3V[j];
                F1oHjWeM3V[j] = F1oHjWeM3V[j + 1];
                F1oHjWeM3V[j + 1] = t;
                g = Ta91srW[j];
                Ta91srW[j] = Ta91srW[j + 1];
                Ta91srW[j + 1] = g;
                f = w[j];
                w[j] = w[j + 1];
                w[j + 1] = f;
                r = u[j];
                u[j] = u[j + 1];
                u[j + 1] = r;
                GuY4i82 = l[j];
                l[j] = l[j + 1];
                l[j + 1] = GuY4i82;
                sUaHnpyo0dc = kLV1rQS[j];
                kLV1rQS[j] = kLV1rQS[j + 1];
                kLV1rQS[j + 1] = sUaHnpyo0dc;
                nVH04IQZc8O = dD2SsQo4f[j];
                dD2SsQo4f[j] = dD2SsQo4f[j + 1];
                dD2SsQo4f[j + 1] = nVH04IQZc8O;
            }
            j++;
        };
    }
    for (i = 0; i < (n * (n - 1) / 2); i = i + 1) {
        cout << "(" << Ta91srW[i] << "," << u[i] << "," << kLV1rQS[i] << ")" << "-" << "(" << w[i] << "," << l[i] << "," << dD2SsQo4f[i] << ")" << "=";
        printf ("%.2f\n", F1oHjWeM3V[i]);
    };
}

