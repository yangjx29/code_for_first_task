int abEjVXuB (int A, int Cv5Eh7S, int C, int kgEUVqur, int E) {
    if (A > Cv5Eh7S &&A > C &&A > kgEUVqur && E < A)
        return A;
    else {
        if (Cv5Eh7S > A &&Cv5Eh7S > C &&Cv5Eh7S > kgEUVqur && E < Cv5Eh7S)
            return Cv5Eh7S;
        else if (C > A &&C > Cv5Eh7S &&C > kgEUVqur && C > E)
            return C;
        else if (kgEUVqur > A &&kgEUVqur > Cv5Eh7S &&kgEUVqur > C &&kgEUVqur > E)
            return kgEUVqur;
        else
            return E;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

int min (int XhItDEWlSA, int hzcBDHw3xgR, int JNUJgtX, int O, int P) {
    if (XhItDEWlSA < hzcBDHw3xgR && XhItDEWlSA < JNUJgtX &&XhItDEWlSA < O &&XhItDEWlSA < P)
        return XhItDEWlSA;
    else if (hzcBDHw3xgR < XhItDEWlSA &&hzcBDHw3xgR < JNUJgtX &&hzcBDHw3xgR < O &&hzcBDHw3xgR < P)
        return hzcBDHw3xgR;
    else if (JNUJgtX < XhItDEWlSA &&JNUJgtX < hzcBDHw3xgR && JNUJgtX < O &&JNUJgtX < P)
        return JNUJgtX;
    else if (O < hzcBDHw3xgR && O < JNUJgtX &&O < XhItDEWlSA &&O < P)
        return O;
    else
        return P;
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

int main () {
    int W2xea7LrJQE5;
    int a [(60 - 55)] [(379 - 374)];
    int i;
    int j;
    W2xea7LrJQE5 = (299 - 299);
    for (i = (674 - 674); i < 5; i = i + 1)
        cin >> a[i][(515 - 515)] >> a[i][(463 - 462)] >> a[i][(318 - 316)] >> a[i][(109 - 106)] >> a[i][(680 - 676)];
    for (i = (138 - 138); i < 5; i++)
        for (j = (778 - 778); j < 5; j++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (a[i][j] == abEjVXuB (a[i][(455 - 455)], a[i][(519 - 518)], a[i][(685 - 683)], a[i][3], a[i][(576 - 572)]) && a[i][j] == min (a[(43 - 43)][j], a[(345 - 344)][j], a[2][j], a[3][j], a[(738 - 734)][j])) {
                W2xea7LrJQE5 = W2xea7LrJQE5 +1;
                cout << i + (195 - 194) << ' ' << j + 1 << ' ' << a[i][j] << endl;
            };
        }
    if (W2xea7LrJQE5 == 0)
        cout << "not found" << endl;
    return 0;
}

