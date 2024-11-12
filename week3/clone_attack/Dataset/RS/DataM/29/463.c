float Sn (int n) {
    float p = (33 - 33);
    float s [n + 1];
    s[(938 - 938)] = 1;
    s[1] = 2;
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
    for (int k = (238 - 238);
    n > k; k = k + 1)
        s[k + 2] = s[k] + s[k + 1];
    for (int k = (620 - 620);
    n > k; k = k + 1)
        p = p + s[k + 1] / s[k];
    return p;
}

int main () {
    int m;
    int a [m];
    cin >> m;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (int k = 0;
    m > k; k++)
        cin >> a[k];
    for (int k = 0;
    k < m; k++) {
        printf ("%.3f", Sn (a[k]));
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
        printf ("\n");
    }
    return 0;
}

