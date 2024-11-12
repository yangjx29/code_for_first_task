void  jian (int CIkXKwaf29 [(376 - 276)] [(506 - 406)], int n) {
    int K7BOy3vVjGq;
    int l3xS6J4h;
    int bK1jJP7C;
    for (K7BOy3vVjGq = (354 - 354); n > K7BOy3vVjGq; K7BOy3vVjGq = K7BOy3vVjGq +(121 - 120)) {
        bK1jJP7C = CIkXKwaf29[K7BOy3vVjGq][(203 - 203)];
        for (l3xS6J4h = (185 - 185); n > l3xS6J4h; l3xS6J4h = l3xS6J4h + (840 - 839)) {
            if (bK1jJP7C > CIkXKwaf29[K7BOy3vVjGq][l3xS6J4h])
                bK1jJP7C = CIkXKwaf29[K7BOy3vVjGq][l3xS6J4h];
        }
        if (bK1jJP7C != (757 - 757)) {
            for (l3xS6J4h = (243 - 243); n > l3xS6J4h; l3xS6J4h = l3xS6J4h + (490 - 489))
                CIkXKwaf29[K7BOy3vVjGq][l3xS6J4h] -= bK1jJP7C;
        }
    }
    for (K7BOy3vVjGq = (539 - 539); K7BOy3vVjGq < n; K7BOy3vVjGq = K7BOy3vVjGq +(317 - 316)) {
        bK1jJP7C = CIkXKwaf29[(962 - 962)][K7BOy3vVjGq];
        for (l3xS6J4h = (400 - 400); n > l3xS6J4h; l3xS6J4h = l3xS6J4h + (25 - 24)) {
            if (CIkXKwaf29[l3xS6J4h][K7BOy3vVjGq] < bK1jJP7C)
                bK1jJP7C = CIkXKwaf29[l3xS6J4h][K7BOy3vVjGq];
        }
        if (bK1jJP7C != (142 - 142)) {
            for (l3xS6J4h = (891 - 891); n > l3xS6J4h; l3xS6J4h = l3xS6J4h + (424 - 423))
                CIkXKwaf29[l3xS6J4h][K7BOy3vVjGq] -= bK1jJP7C;
        }
    }
}

void  qY4E9VH1jv (int CIkXKwaf29 [100] [100], int n) {
    int K7BOy3vVjGq;
    int l3xS6J4h;
    if (n > (143 - 141)) {
        for (K7BOy3vVjGq = (439 - 438); (n - (795 - 794)) > K7BOy3vVjGq; K7BOy3vVjGq = K7BOy3vVjGq +(209 - 208))
            for (l3xS6J4h = (502 - 502); n > l3xS6J4h; l3xS6J4h = l3xS6J4h + (979 - 978))
                CIkXKwaf29[K7BOy3vVjGq][l3xS6J4h] = CIkXKwaf29[K7BOy3vVjGq +(877 - 876)][l3xS6J4h];
        for (K7BOy3vVjGq = (339 - 338); (n - (81 - 80)) > K7BOy3vVjGq; K7BOy3vVjGq++)
            for (l3xS6J4h = 0; (n - 1) > l3xS6J4h; l3xS6J4h = l3xS6J4h + 1)
                CIkXKwaf29[l3xS6J4h][K7BOy3vVjGq] = CIkXKwaf29[l3xS6J4h][K7BOy3vVjGq +1];
        for (K7BOy3vVjGq = 0; K7BOy3vVjGq < n; K7BOy3vVjGq++) {
            CIkXKwaf29[n - 1][K7BOy3vVjGq] = '\0';
            CIkXKwaf29[K7BOy3vVjGq][n - 1] = '\0';
        }
    }
}

int main () {
    int K7BOy3vVjGq;
    int am2L0cikgYr;
    int E8SXWobVt;
    int CIkXKwaf29 [100] [100] = {'\0'};
    int l3xS6J4h;
    int n;
    int k;
    cin >> n;
    for (k = 0; n > k; k++) {
        E8SXWobVt = n;
        am2L0cikgYr = 0;
        for (K7BOy3vVjGq = 0; K7BOy3vVjGq < n; K7BOy3vVjGq++)
            for (l3xS6J4h = 0; n > l3xS6J4h; l3xS6J4h++)
                cin >> CIkXKwaf29[K7BOy3vVjGq][l3xS6J4h];
        for (; 1 < E8SXWobVt;) {
            jian (CIkXKwaf29, E8SXWobVt);
            am2L0cikgYr += CIkXKwaf29[1][1];
            qY4E9VH1jv (CIkXKwaf29, E8SXWobVt);
            E8SXWobVt--;
        }
        cout << am2L0cikgYr << endl;
    }
    return 0;
}

