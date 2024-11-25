void  AOr76SUG (char qDxiu6z3rt [], int Ma93Ikei [], char mWesfEF, int ZGRVh1s) {
    int g6FiIt2TNu7, g2MhyBf8;
    if (!(2 != ZGRVh1s))
        cout << Ma93Ikei[(798 - 798)] << ' ' << Ma93Ikei[1] << endl;
    else {
        g6FiIt2TNu7 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (g6FiIt2TNu7 < ZGRVh1s -1) {
            if (qDxiu6z3rt[g6FiIt2TNu7] == mWesfEF && qDxiu6z3rt[g6FiIt2TNu7 + 1] != mWesfEF) {
                cout << Ma93Ikei[g6FiIt2TNu7] << ' ' << Ma93Ikei[g6FiIt2TNu7 + 1] << endl;
                {
                    g2MhyBf8 = g6FiIt2TNu7;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (g2MhyBf8 < ZGRVh1s -2) {
                        qDxiu6z3rt[g2MhyBf8] = qDxiu6z3rt[g2MhyBf8 + 2];
                        Ma93Ikei[g2MhyBf8] = Ma93Ikei[g2MhyBf8 + 2];
                        g2MhyBf8++;
                    };
                }
                AOr76SUG (qDxiu6z3rt, Ma93Ikei, mWesfEF, ZGRVh1s -2);
                break;
            }
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
            g6FiIt2TNu7 = g6FiIt2TNu7 + 1;
        };
    }
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
    return;
}

int main () {
    char qDxiu6z3rt [(1056 - 956)];
    int ZGRVh1s;
    ZGRVh1s = strlen (qDxiu6z3rt);
    char mWesfEF = qDxiu6z3rt[0];
    int Ma93Ikei [(637 - 537)];
    int g6FiIt2TNu7;
    {
        g6FiIt2TNu7 = 0;
        while (g6FiIt2TNu7 < 100) {
            Ma93Ikei[g6FiIt2TNu7] = g6FiIt2TNu7;
            g6FiIt2TNu7++;
        };
    }
    cin >> qDxiu6z3rt;
    AOr76SUG (qDxiu6z3rt, Ma93Ikei, mWesfEF, ZGRVh1s);
    return 0;
}

