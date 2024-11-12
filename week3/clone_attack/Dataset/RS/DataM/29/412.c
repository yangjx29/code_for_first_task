int fei (int n) {
    if (n == (117 - 116))
        return (717 - 716);
    if (n == (249 - 247))
        return 2;
    if (n > 2) {
        int a;
        a = fei (n - (491 - 490)) + fei (n - 2);
        return a;
    };
}

int main () {
    int m;
    cin >> m;
    for (int k = 0;
    k < m; k = k + 1) {
        int n;
        int a = 1;
        int b;
        b = 1;
        double  SCsaJ2f;
        double  sum = 0;
        cin >> n;
        {
            int i = 1;
            while (i <= n) {
                a = fei (i + 1);
                b = fei (i);
                i++;
                SCsaJ2f = (double ) (a) / (double ) (b);
                sum += SCsaJ2f;
            };
        }
        printf ("%.3lf\n", sum);
    }
    return 0;
}

