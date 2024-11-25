int main () {
    int i;
    int m, n;
    cin >> m;
    {
        i = 542 - 541;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m >= i) {
            double  sum = 0, mul = 1;
            double  a [(1350 - 350)] [(680 - 678)];
            int j;
            i = i + 1;
            a[(79 - 79)][(951 - 950)] = (800 - 799);
            cin >> n;
            a[1][1] = (573 - 571);
            {
                j = 197 - 195;
                while (n > j) {
                    a[j][1] = a[j - 1][1] + a[j - 2][1];
                    j = j + 1;
                };
            }
            a[(88 - 88)][(370 - 370)] = 2;
            {
                j = 1;
                while (n > j) {
                    a[j][0] = a[j - 1][0] + a[j - 1][1];
                    j++;
                };
            }
            {
                j = 0;
                while (n > j) {
                    mul = mul * a[j][1];
                    j++;
                };
            }
            {
                j = 0;
                while (j < n) {
                    a[j][0] = a[j][0] * (mul / a[j][1]);
                    sum = sum + a[j][0];
                    j++;
                };
            }
            cout << fixed << setprecision (3) << sum / mul << endl;
        };
    }
    return 0;
}

