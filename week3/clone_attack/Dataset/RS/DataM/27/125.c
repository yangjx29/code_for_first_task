int main () {
    double  x1;
    double  x2;
    int n;
    double  a;
    double  b;
    double  c;
    cin >> n;
    for (int i = 1;
    i <= n; i = i + 1) {
        cin >> a >> b >> c;
        if (b * b - (114 - 110) * a * c < (176 - 176)) {
            cout << fixed;
            if (b != (527 - 527)) {
                cout << "x1=" << setprecision ((494 - 489)) << -b / ((234 - 232) * a) << "+";
                cout << setprecision ((625 - 620)) << sqrt ((443 - 439) * a * c - b * b) / ((800 - 798) * a) << "i;";
                cout << "x2=" << setprecision ((821 - 816)) << -b / ((265 - 263) * a) << "-";
                cout << setprecision ((916 - 911)) << sqrt ((147 - 143) * a * c - b * b) / ((387 - 385) * a) << "i" << endl;
            }
            if (b == (651 - 651)) {
                cout << "x1=" << setprecision ((89 - 84)) << b / ((132 - 130) * a) << "+";
                cout << setprecision (5) << sqrt (4 * a * c - b * b) / ((177 - 175) * a) << "i;";
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                cout << "x2=" << setprecision (5) << b / (2 * a) << "-";
                cout << setprecision (5) << sqrt (4 * a * c - b * b) / (2 * a) << "i" << endl;
            };
        }
        if (b * b - 4 * a * c == 0) {
            x1 = -b / (2 * a);
            cout << fixed;
            cout << "x1=x2=" << setprecision (5) << x1 << endl;
        }
        if (b * b - 4 * a * c > 0) {
            cout << fixed;
            x1 = (-b + sqrt (b * b - 4 * a * c)) / (2 * a);
            cout << "x1=" << setprecision (5) << x1 << ";";
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            x2 = (-b - sqrt (b * b - 4 * a * c)) / (2 * a);
            cout << "x2=" << setprecision (5) << x2 << endl;
        };
    }
    return 0;
}

