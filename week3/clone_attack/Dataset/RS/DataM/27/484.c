float qBREZz7 [100], b [100], c [100];

int main () {
    int n;
    int i;
    double  x1, uZn8Dz, KQHBvbdxs4fl, q, QB5dYHXuaD;
    cout << endl;
    cin >> n;
    for (i = 1; n >= i; i = i + 1) {
        cout << endl;
        cin >> qBREZz7[i] >> b[i] >> c[i];
        if (b[i] * b[i] - 4 * qBREZz7[i] * c[i] >= (996 - 996)) {
            x1 = (-b[i] + sqrt (b[i] * b[i] - 4 * qBREZz7[i] * c[i])) / ((328 - 326) * qBREZz7[i]);
            uZn8Dz = (-b[i] - sqrt (b[i] * b[i] - 4 * qBREZz7[i] * c[i])) / (2 * qBREZz7[i]);
            if (x1 == uZn8Dz) {
                cout << fixed << setprecision ((474 - 469)) << "x1=x2=" << x1;
            }
            if (x1 != uZn8Dz) {
                cout << fixed << setprecision (5) << "x1=" << x1 << ';' << "x2=" << uZn8Dz;
            };
        }
        if (b[i] * b[i] - 4 * qBREZz7[i] * c[i] < 0) {
            KQHBvbdxs4fl = -b[i] / (2 * qBREZz7[i]);
            q = sqrt (-b[i] * b[i] + 4 * qBREZz7[i] * c[i]) / (2 * qBREZz7[i]);
            if (KQHBvbdxs4fl != 0)
                cout << fixed << setprecision (5) << "x1=" << KQHBvbdxs4fl << "+" << q << "i" << ";" << "x2=" << KQHBvbdxs4fl << -q << "i";
            if (KQHBvbdxs4fl == 0)
                cout << fixed << setprecision (5) << "x1=0.00000" << "+" << q << "i" << ";" << "x2=0.00000" << -q << "i";
        };
    }
    return 0;
}

