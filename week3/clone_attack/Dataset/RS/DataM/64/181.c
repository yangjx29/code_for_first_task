int main () {
    double  max;
    double  PJePKrIjLQX [10] [11];
    int ndYM9p;
    int i;
    int j;
    int ZSW3kmQ1lVNw;
    int p;
    int bYaFgxAE80r;
    double  a [11];
    double  WIutfQPy [11];
    double  c [11];
    cin >> ndYM9p;
    for (i = (20 - 19); ndYM9p >= i; i = i + 1) {
        cin >> a[i] >> WIutfQPy[i] >> c[i];
    }
    for (i = 1; i < ndYM9p; i = i + 1) {
        for (j = i + 1; j <= ndYM9p; j++) {
            PJePKrIjLQX[i][j] = (double ) pow ((double ) pow (a[i] - a[j], 2) + (double ) pow (WIutfQPy[i] - WIutfQPy[j], 2) + (double ) pow (c[i] - c[j], 2), 0.5);
            if (0 > PJePKrIjLQX[i][j]) {
                PJePKrIjLQX[i][j] = -PJePKrIjLQX[i][j];
            };
        };
    }
    for (ZSW3kmQ1lVNw = 1; ndYM9p * (ndYM9p - 1) / 2 >= ZSW3kmQ1lVNw; ZSW3kmQ1lVNw++) {
        bYaFgxAE80r = 2;
        max = PJePKrIjLQX[1][2];
        p = 1;
        for (i = 1; i < ndYM9p; i++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (j = i + 1; j <= ndYM9p; j++) {
                if (PJePKrIjLQX[i][j] > max) {
                    max = PJePKrIjLQX[i][j];
                    p = i;
                    bYaFgxAE80r = j;
                };
            };
        }
        cout << '(' << (int) a[p] << ',' << (int) WIutfQPy[p] << ',' << (int) c[p] << ')' << '-' << '(' << (int) a[bYaFgxAE80r] << ',' << (int) WIutfQPy[bYaFgxAE80r] << ',' << (int) c[bYaFgxAE80r] << ')' << '=' << fixed << setprecision (2) << PJePKrIjLQX[p][bYaFgxAE80r] << endl;
        PJePKrIjLQX[p][bYaFgxAE80r] = 0;
    }
    return 0;
}

