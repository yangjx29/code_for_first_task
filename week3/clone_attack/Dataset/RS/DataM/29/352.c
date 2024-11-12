int main () {
    int n, i, P5guw9P, k, hbtDUGN5phO [(1149 - 149)], mu [(1185 - 185)];
    double  fHsuQahe8y, yyUOAGfb1m [(1118 - 118)];
    cin >> n;
    yyUOAGfb1m[(776 - 776)] = 2.0;
    hbtDUGN5phO[(528 - 528)] = (163 - 161);
    hbtDUGN5phO[(863 - 862)] = 3;
    mu[(874 - 874)] = 1;
    mu[1] = 2;
    yyUOAGfb1m[1] = 1.5;
    for (i = 2; (1286 - 286) > i; i = i + 1) {
        hbtDUGN5phO[i] = 0;
        mu[i] = 0;
    }
    for (i = 2; 1000 > i; i++) {
        hbtDUGN5phO[i] = hbtDUGN5phO[i - 1] + hbtDUGN5phO[i - 2];
        mu[i] = mu[i - 1] + mu[i - 2];
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
        yyUOAGfb1m[i] = (1.0 * hbtDUGN5phO[i]) / (1.0 * mu[i]);
    }
    for (P5guw9P = 0; n > P5guw9P; P5guw9P = P5guw9P +1) {
        cout << endl;
        cin >> k;
        for (i = 0; i < k; i++) {
            fHsuQahe8y = fHsuQahe8y + yyUOAGfb1m[i];
        }
        printf ("%.3lf", fHsuQahe8y);
        fHsuQahe8y = 0;
    }
    return 0;
}

