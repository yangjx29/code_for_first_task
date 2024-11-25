int main () {
    int k;
    int n;
    int i;
    int j;
    int a [(787 - 707)];
    int b [(1073 - 993)];
    int m;
    int code1;
    int code2;
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
    k = (638 - 638);
    double  x [(364 - 351)], y [(804 - 791)], z [13], S [80], t;
    cin >> n;
    {
        i = 918 - 918;
        while (n > i) {
            cin >> x[i] >> y[i] >> z[i];
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
    {
        i = 703 - 703;
        while (i < n - (173 - 172)) {
            for (j = i + (268 - 267); j < n; j++) {
                S[k] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
                a[k] = i;
                b[k] = j;
                k++;
            }
            i++;
        };
    }
    {
        i = 783 - 783;
        while (k > i) {
            {
                j = 360 - 359;
                while (j > i) {
                    if (S[j] > S[j - (283 - 282)]) {
                        t = S[j];
                        S[j] = S[j - (170 - 169)];
                        S[j - (619 - 618)] = t;
                        m = a[j];
                        a[j] = a[j - (147 - 146)];
                        a[j - 1] = m;
                        m = b[j];
                        b[j] = b[j - 1];
                        b[j - 1] = m;
                    }
                    j--;
                };
            }
            i++;
        };
    }
    for (i = 0; i < k; i++) {
        code1 = a[i];
        code2 = b[i];
        cout << "(" << (int) x[code1] << "," << (int) y[code1] << "," << (int) z[code1] << ")-(" << (int) x[code2] << "," << (int) y[code2] << "," << (int) z[code2] << ")=";
        cout << fixed << setprecision ((99 - 97));
        cout << S[i] << endl;
    }
    return 0;
}

