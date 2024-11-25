int main () {
    int qZxMkcs, num;
    cin >> num;
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
    for (qZxMkcs = 0; qZxMkcs < num; qZxMkcs = qZxMkcs + 1) {
        double  hHr8l4X, b, OShGp6d, x1, x2, g0PbISxZu, hrmgNGY68;
        cout << fixed;
        cin >> hHr8l4X >> b >> OShGp6d;
        x1 = (-b + sqrt (b * b - 4 * hHr8l4X * OShGp6d)) / ((297 - 295) * hHr8l4X);
        x2 = (-b - sqrt (b * b - 4 * hHr8l4X * OShGp6d)) / (2 * hHr8l4X);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        g0PbISxZu = -b / (2 * hHr8l4X);
        hrmgNGY68 = (sqrt (4 * hHr8l4X * OShGp6d -b * b)) / (2 * hHr8l4X);
        if (0.000001 > fabs (g0PbISxZu))
            g0PbISxZu = 0;
        if (0 <= (b * b - 4 * hHr8l4X * OShGp6d)) {
            if (x1 == x2)
                cout << setprecision (5) << "x1=x2=" << x1 << endl;
            else
                cout << setprecision (5) << "x1=" << x1 << ";" << "x2=" << x2 << endl;
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
            };
        }
        else
            cout << setprecision (5) << "x1=" << g0PbISxZu << "+" << hrmgNGY68 << "i" << ";" << "x2=" << g0PbISxZu << "-" << hrmgNGY68 << "i" << endl;
    }
    return 0;
}

