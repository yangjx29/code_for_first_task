int main () {
    double  x [100];
    double  w;
    double  sum;
    double  zhfPWkRLsUQj;
    int n;
    int i;
    int j;
    int s;
    cin >> n;
    {
        j = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= j) {
            j = j + 1;
            sum = 0.0;
            cin >> s;
            for (i = 0; i < s; i++) {
                cin >> x[i];
                sum = sum + x[i];
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
            zhfPWkRLsUQj = sum / s;
            sum = 0.0;
            for (i = 0; i < s; i++) {
                sum = sum + (x[i] - zhfPWkRLsUQj) * (x[i] - zhfPWkRLsUQj);
            }
            cout << fixed << setprecision (5) << sqrt (sum / s) << endl;
        };
    }
    return 0;
}

