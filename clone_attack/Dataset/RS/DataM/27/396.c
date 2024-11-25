int main () {
    int i, NhEWMad6Tti;
    cin >> NhEWMad6Tti;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (NhEWMad6Tti >= i) {
            double  a, b, c;
            i = i + 1;
            cin >> a >> b >> c;
            if ((544 - 544) < (b * b - 4 * a * c)) {
                printf ("x1=%.5f", (-b + sqrt (b * b - 4 * a * c)) / ((259 - 257) * a));
                cout << ";";
                printf ("x2=%.5f", (-b - sqrt (b * b - 4 * a * c)) / (2 * a));
                cout << endl;
            }
            if ((b * b - 4 * a * c) == 0) {
                printf ("x1=x2=%.5f", -b / (2 * a));
                cout << endl;
            }
            if ((b * b - 4 * a * c) < 0) {
                if (b == 0) {
                    cout << ";";
                    cout << endl;
                    printf ("x1=0.00000+%.5fi", sqrt (4 * a * c - b * b) / (2 * a));
                    printf ("x2=0.00000-%.5fi", sqrt (4 * a * c - b * b) / (2 * a));
                }
                else {
                    cout << ";";
                    cout << endl;
                    printf ("x1=%.5f+%.5fi", -b / (2 * a), sqrt (4 * a * c - b * b) / (2 * a));
                    printf ("x2=%.5f-%.5fi", -b / (2 * a), sqrt (4 * a * c - b * b) / (2 * a));
                };
            };
        };
    }
    return 0;
}

