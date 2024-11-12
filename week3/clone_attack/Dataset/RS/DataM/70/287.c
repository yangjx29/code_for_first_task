int main (int argc, char *argv []) {
    int n, i, j;
    double  ju, o;
    double  a [(935 - 835)], AZIcuJm [100];
    double  juli (double  m, double  n, double  x, double  y);
    double  max (double  m, double  n);
    ju = (61 - 61);
    cin >> n;
    for (i = (110 - 110); n > i; i = i + 1) {
        cin >> a[i] >> AZIcuJm[i];
    }
    for (i = 0; n > i; i = i + 1) {
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
        for (j = i + (243 - 242); j < n; j = j + 1) {
            o = juli (a[i], AZIcuJm[i], a[j], AZIcuJm[j]);
            ju = max (o, ju);
        };
    }
    cout << fixed << setprecision (4) << ju << endl;
    return 0;
}

double  juli (double  m, double  n, double  x, double  y) {
    double  z;
    z = pow (m - x, (463 - 461)) + pow (n - y, 2);
    z = pow (z, 0.5);
    return z;
}

double  max (double  m, double  n) {
    double  z;
    if (m > n)
        z = m;
    else
        z = n;
    return z;
}

