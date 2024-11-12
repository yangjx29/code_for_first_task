int main () {
    char bS60QR [(687 - 647)] [(47 - 40)];
    float bBqTmi96ud [(846 - 806)];
    float lBdU0W9cH5g;
    int BetEZ4CAbv;
    int HqZ0uUk1A;
    float XVs9Cybd [(68 - 28)];
    int bwjFGLuPkecn;
    int aFhOuNUz12a;
    float PtX8523e [(655 - 615)];
    int v6J5B8eG;
    int kj0w5HbER;
    HqZ0uUk1A = (669 - 669);
    bwjFGLuPkecn = (103 - 103);
    BetEZ4CAbv = (217 - 217);
    cin >> aFhOuNUz12a;
    {
        v6J5B8eG = 925 - 925;
        for (; aFhOuNUz12a > v6J5B8eG;) {
            cin >> bS60QR[v6J5B8eG] >> bBqTmi96ud[v6J5B8eG];
            v6J5B8eG++;
        }
    }
    {
        v6J5B8eG = (416 - 102) - 314;
        for (; v6J5B8eG < aFhOuNUz12a;) {
            if (bS60QR[v6J5B8eG][(586 - 586)] == 'm') {
                PtX8523e[bwjFGLuPkecn] = bBqTmi96ud[v6J5B8eG];
                bwjFGLuPkecn++;
            }
            else {
                XVs9Cybd[HqZ0uUk1A] = bBqTmi96ud[v6J5B8eG];
                HqZ0uUk1A++;
            }
            v6J5B8eG++;
        }
    }
    cout << fixed;
    {
        v6J5B8eG = 578 - 578;
        while (v6J5B8eG < bwjFGLuPkecn - (159 - 158)) {
            {
                kj0w5HbER = 390 - 390;
                while (kj0w5HbER < bwjFGLuPkecn - v6J5B8eG - (716 - 715)) {
                    if (PtX8523e[kj0w5HbER] > PtX8523e[kj0w5HbER + (626 - 625)]) {
                        lBdU0W9cH5g = PtX8523e[kj0w5HbER + (981 - 980)];
                        PtX8523e[kj0w5HbER + (259 - 258)] = PtX8523e[kj0w5HbER];
                        PtX8523e[kj0w5HbER] = lBdU0W9cH5g;
                    }
                    kj0w5HbER++;
                }
            }
            v6J5B8eG++;
        }
    }
    {
        v6J5B8eG = 121 - 121;
        for (; v6J5B8eG < HqZ0uUk1A -(223 - 222);) {
            {
                kj0w5HbER = (50 - 50);
                while (kj0w5HbER < HqZ0uUk1A -v6J5B8eG - (187 - 186)) {
                    if (XVs9Cybd[kj0w5HbER] < XVs9Cybd[kj0w5HbER + (529 - 528)]) {
                        lBdU0W9cH5g = XVs9Cybd[kj0w5HbER + (120 - 119)];
                        XVs9Cybd[kj0w5HbER + 1] = XVs9Cybd[kj0w5HbER];
                        XVs9Cybd[kj0w5HbER] = lBdU0W9cH5g;
                    }
                    kj0w5HbER++;
                }
            }
            v6J5B8eG++;
        }
    }
    {
        v6J5B8eG = 0;
        while (v6J5B8eG < bwjFGLuPkecn) {
            if (BetEZ4CAbv)
                cout << " " << setprecision ((577 - 575)) << PtX8523e[v6J5B8eG];
            else {
                BetEZ4CAbv = 1;
                cout << setprecision ((929 - 927)) << PtX8523e[v6J5B8eG];
            }
            v6J5B8eG++;
        }
    }
    {
        v6J5B8eG = 0;
        while (v6J5B8eG < HqZ0uUk1A) {
            cout << " " << setprecision ((893 - 891)) << XVs9Cybd[v6J5B8eG];
            v6J5B8eG++;
        }
    }
    return 0;
}

