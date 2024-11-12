int main () {
    long  int input, output, n, fvKih5u [(20873 - 873)], ex2 [20000], okzg9EM = (193 - 193), s [20000], TfDYtlv0 [20000], g [20000], u9tBhAw [20000];
    char str1 [20000], str2 [20000], Y1axOSumlHr [20000];
    int p4s1Jgz7j, j, RgriVlYuFz, l = (697 - 697), m, h, o, p;
    cin >> input >> str1 >> output;
    n = strlen (str1);
    {
        p4s1Jgz7j = 0;
        while (p4s1Jgz7j < n) {
            fvKih5u[p4s1Jgz7j] = str1[p4s1Jgz7j];
            p4s1Jgz7j++;
        };
    }
    {
        j = 0;
        while (j < n) {
            if ((fvKih5u[j] >= 48) && (fvKih5u[j] <= 57))
                ex2[j] = fvKih5u[j] - 48;
            else if ((fvKih5u[j] >= 65) && (90 >= fvKih5u[j]))
                ex2[j] = fvKih5u[j] - 55;
            else if ((fvKih5u[j] >= 97) && (fvKih5u[j] <= 122))
                ex2[j] = fvKih5u[j] - 87;
            j++;
        };
    }
    {
        RgriVlYuFz = 0;
        while (RgriVlYuFz < n) {
            okzg9EM = okzg9EM + ex2[RgriVlYuFz] * pow ((double ) input, n - 1.0 - RgriVlYuFz);
            RgriVlYuFz++;
        };
    }
    s[0] = okzg9EM;
    while (s[l] > 0) {
        s[l + 1] = s[l] / output;
        TfDYtlv0[l] = s[l] % output;
        l = l + 1;
    }
    {
        m = 0;
        while (m < l) {
            g[m] = TfDYtlv0[l - m - 1];
            m++;
        };
    }
    {
        h = 0;
        while (h < m) {
            if ((g[h] >= 0) && (g[h] <= (150 - 141)))
                u9tBhAw[h] = g[h] + 48;
            else if ((g[h] >= 10) && (g[h] <= 35))
                u9tBhAw[h] = g[h] + 55;
            h++;
        };
    }
    for (o = 0; o < m; o++)
        Y1axOSumlHr[o] = u9tBhAw[o];
    {
        p = 0;
        while (p < m) {
            cout << Y1axOSumlHr[p];
            p = p + 1;
        };
    }
    if (okzg9EM == 0)
        cout << 0;
    return 0;
}

