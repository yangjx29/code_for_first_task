int main () {
    int qMPZ5wzi;
    int n;
    int i;
    double  GVJ1l2C90nac;
    double  r;
    double  p;
    cin >> qMPZ5wzi;
    while (qMPZ5wzi > 0) {
        qMPZ5wzi = qMPZ5wzi - 1;
        p = 0;
        GVJ1l2C90nac = 0;
        cin >> n;
        for (i = 1; i <= n; i = i + 1) {
            cin >> r;
            GVJ1l2C90nac = GVJ1l2C90nac +r * r;
            p += r;
        }
        p = p / n;
        GVJ1l2C90nac = sqrt (GVJ1l2C90nac / n - p * p);
        cout << fixed << setprecision (5) << GVJ1l2C90nac << endl;
    };
}

